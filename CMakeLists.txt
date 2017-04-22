IF(DEFINED APPLE)
    MESSAGE("APPLE")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
ENDIF(DEFINED APPLE)

set(CMAKE_OSX_DEPLOYMENT_TARGET "")

cmake_minimum_required(VERSION 2.6)
project(gggpsipsi CXX)

## include CERN ROOT
include(FindROOT.cmake)

## include Pythia8
include(FindPythia8.cmake)


set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost COMPONENTS system)


set(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} $ENV{CMAKE_CXX_LINK_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -march=native")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

file(GLOB_RECURSE SOURCE_FILES "nlo/*.cpp" "amps/*.c++" "util/*.cpp" "globals/*.cpp")
list(REMOVE_ITEM SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/nlo/nlo_main.cpp")
list(REMOVE_ITEM SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/lo/lo_main.cpp")
list(REMOVE_ITEM SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/serbo/lo_serbo.cpp")
list(REMOVE_ITEM SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/dps/dps.cpp")

execute_process(COMMAND lhapdf-config --incdir OUTPUT_VARIABLE LHAPDF_INCLUDE OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND lhapdf-config --libdir OUTPUT_VARIABLE LHAPDF_LIBDIR OUTPUT_STRIP_TRAILING_WHITESPACE)

message(STATUS "LHAPDF --inc-dir: ${LHAPDF_INCLUDE}")
message(STATUS "LHAPDF --lib-dir: ${LHAPDF_LIBDIR}")

find_library(LHAPDF_LIBRARY NAMES LHAPDF HINTS "${LHAPDF_LIBDIR}")
message(STATUS "LHAPDF_LIBRARY = ${LHAPDF_LIBRARY}")


include_directories(${Boost_INCLUDE_DIRS})
include_directories(${LHAPDF_INCLUDE})
include_directories(${PYTHIA8_INCLUDE_DIRS})

include_directories(lib)
include_directories(globals)
include_directories(amps)
include_directories(nlo)
include_directories(util)
include_directories(./)


include_directories(${Boost_INCLUDE_DIRS})
include_directories(${ROOT_INCLUDE_DIR})

add_executable(gg_psigg "nlo/nlo_main.cpp" ${SOURCE_FILES})
target_link_libraries(gg_psigg ${Boost_LIBRARIES})
target_link_libraries(gg_psigg ${LHAPDF_LIBRARY})
target_link_libraries(gg_psigg ${ROOT_LIBRARIES})




file(GLOB_RECURSE R_SOURCE_FILES "root/*.cpp" "util/*.cpp" "globals/*.cpp" "nlo/nlo_kinematics.cpp")
list(REMOVE_ITEM R_SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/root/rescale.cpp")
list(REMOVE_ITEM R_SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/root/export_hists.cpp")
list(REMOVE_ITEM R_SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/root/export_parton_cs.cpp")


add_executable(export-histograms "root/export_hists.cpp" ${R_SOURCE_FILES})
target_link_libraries(export-histograms ${Boost_LIBRARIES})
##target_link_libraries(getHist ${LHAPDF_LIBRARY})
target_link_libraries(export-histograms ${ROOT_LIBRARIES})

#add_executable(rescale "root/rescale.cpp" ${R_SOURCE_FILES})
#target_link_libraries(rescale ${Boost_LIBRARIES})
#target_link_libraries(rescale ${LHAPDF_LIBRARY})
#target_link_libraries(rescale ${ROOT_LIBRARIES})


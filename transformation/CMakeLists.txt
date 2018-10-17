# General settings
cmake_minimum_required(VERSION 3.12.1)
project(SensorDataTransformationExample)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED on)
set (DEBUG_SUBFIX "d")
set (BUILD_SHARED_LIBS TRUE)
set (NDDS_LIBS_PATH ${NDDSHOME}/lib/${ARCH})

if(NOT ${BUILD_SHARED_LIBS})
    message(FATAL_ERROR "This example can not be built for a static configuration")
endif()

#Checks if the required information is provided
if("${NDDSHOME}" STREQUAL "")
    message(FATAL_ERROR "NDDSHOME variable not set. Please set it with the path to your connextdds installation folder.")
endif()

if("${ARCH}" STREQUAL "")
    message(FATAL_ERROR "ARCH variable not set. Please set it with the architecture specifier you want to use. i.e i86Linux3gcc5.4.0.")
endif()

if("${ARCH}" MATCHES "Win")
	set (WINDOWS TRUE)
elseif("${ARCH}" MATCHES "Linux")
	set (WINDOWS FALSE)
else()
	message(FATAL_ERROR "ARCH variable invalid value. Please set a correct architecture specifier. i.e i86Linux3gcc5.4.0.")
endif()

set(SOURCE_FILES
    SensorDataExample.cxx
    SensorDataExample.hpp
    SensorDataExampleImpl.cxx
    SensorDataExampleImpl.h
    SensorDataExampleImplPlugin.cxx
    SensorDataExampleImplPlugin.h
    SensorDataExamplePlugin.cxx
    SensorDataExamplePlugin.hpp
    SensorDataTransformation.cxx
    SensorDataTransformation.h
    SensorDataTransformationPlugin.cxx
    SensorDataTransformationPlugin.h
    TransformedSensorDataExample.cxx
    TransformedSensorDataExample.hpp
    TransformedSensorDataExampleImpl.cxx
    TransformedSensorDataExampleImpl.h
    TransformedSensorDataExampleImplPlugin.cxx
    TransformedSensorDataExampleImplPlugin.h
    TransformedSensorDataExamplePlugin.cxx
    TransformedSensorDataExamplePlugin.hpp)

set (LIBRARY_DEPENDENCIES
    "rtirsinfrastructure"
    "nddscppz"
    "nddscpp2z"
    "nddscz"
    "nddscorez")

set (WINDOWS_SPECIFIC_LIBRARIES
    "netapi32.lib"
    "advapi32.lib"
    "user32.lib"
    "WS2_32.lib"
    "odbc32.lib"
    "odbccp32.lib")

set (UNIX_SPECIFIC_LIBRARIES "")

#Lists used to put the libraries paths
set( RELEASE_LIBRARIES "")
set( DEBUG_LIBRARIES "")

#Finds the libraries for both Release and Debug configuration
foreach(LIBRARY ${LIBRARY_DEPENDENCIES})
    find_library( ${LIBRARY}_LIBRARY_FULL_PATH
        ${LIBRARY}
        PATHS "${NDDS_LIBS_PATH}")

    #Adds DEBUG_SUBFIX to the library name
    find_library( ${LIBRARY}_DEBUG_LIBRARY_FULL_PATH
        "${LIBRARY}${DEBUG_SUBFIX}"
        PATHS "${NDDS_LIBS_PATH}")

    #Appends retrieved paths to Release and Debug lists
    list(APPEND LIBRARIES ${${LIBRARY}_LIBRARY_FULL_PATH})
    list(APPEND DEBUG_LIBRARIES ${${LIBRARY}_DEBUG_LIBRARY_FULL_PATH})
endforeach(LIBRARY)

set (INCLUDE_FOLDERS
    "${NDDSHOME}/include/ndds/hpp"
    "${NDDSHOME}/include/ndds"
    "${NDDSHOME}/include")

#Main project
add_library(sensordatatransf SHARED ${SOURCE_FILES})
target_include_directories(sensordatatransf PRIVATE ${INCLUDE_FOLDERS})

#Adds Release libraries
foreach(LIBRARY_PATH ${LIBRARIES})
    target_link_libraries(sensordatatransf PRIVATE optimized ${LIBRARY_PATH})
endforeach(LIBRARY_PATH)

#Adds Debug libraries
foreach(DEBUG_LIBRARY_PATH ${DEBUG_LIBRARIES})
    target_link_libraries(sensordatatransf PRIVATE debug ${DEBUG_LIBRARY_PATH})
endforeach(DEBUG_LIBRARY_PATH)

#Architecture specific settings
if(${WINDOWS})
	target_link_libraries(sensordatatransf PRIVATE ${WINDOWS_SPECIFIC_LIBRARIES})
	target_compile_definitions(sensordatatransf PRIVATE RTI_WIN32 RTI_routingservice_DLL_EXPORT)
#Unix
else()
	target_link_libraries(sensordatatransf PRIVATE ${UNIX_SPECIFIC_LIBRARIES})
	target_compile_definitions(sensordatatransf PRIVATE RTI_UNIX)
endif()
# Author: Alex Raymond Renner
# Revision Date: 20191021


CMAKE_MINIMUM_REQUIRED (VERSION 2.8.12) 

project (Sorting) 

#This forces the app to be built in the path specified for "Where to build the binaries" in the CMake GUI 
if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set (CMAKE_INSTALL_PREFIX ${PROJECT_BINARY_DIR} CACHE STRING "Install path" FORCE)
endif (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	set(${CMAKE_GENERATOR} "Xcode")
	#set(exe_type "MACOSX_BUNDLE") #mac app bundle
	set(exe_type "") #terminal/bash style executable app
	message("Building for " ${CMAKE_GENERATOR})
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	set(${CMAKE_GENERATOR} "Visual Studio 15 2017") #choose which one you want to build a solution for
	#set(${CMAKE_GENERATOR} "Visual Studio 16 2019")
	set(exe_type "") #as of revision date - windows doesn't need this
endif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")


set(SOURCES ../src/Sorting.cpp)


add_executable(${PROJECT_NAME}	 ${exe_type}
				${SOURCES} 
)

target_link_libraries(${PROJECT_NAME} 
)
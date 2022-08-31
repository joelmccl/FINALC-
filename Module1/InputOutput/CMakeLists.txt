# Author: Alex Raymond Renner
# Revision Date: 20211007


CMAKE_MINIMUM_REQUIRED (VERSION 3.1.0) 

project (InputOutput) 


if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	set(${CMAKE_GENERATOR} "Xcode")
	set(exe_type "MACOSX_BUNDLE")
	message("Building for " ${CMAKE_GENERATOR})
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	if("${CMAKE_GENERATOR}" MATCHES "Visual Studio")
 	 message("CMake Generator =     ${CMAKE_GENERATOR}")
	endif("${CMAKE_GENERATOR}" MATCHES "Visual Studio")
	

endif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")


set(SOURCES ../src/cincout.cpp)




add_executable(${PROJECT_NAME}	 ${exe_type}
				${SOURCES} 
)

target_link_libraries(${PROJECT_NAME} 
)
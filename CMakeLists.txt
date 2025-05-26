cmake_minimum_required(VERSION 3.10)
project(gbemu)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)


include_directories(include)

file (GLOB sources CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/src/*.c")

if(SDL2_FOUND)
	include_directories(${SDL2_INCLUDE_DIRS})
	add_executable(${PROJECT_NAME} ${sources})
	target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
else()
	message(FATAL_ERROR "SDL2 not found. Fix it, try again.")
endif()

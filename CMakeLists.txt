cmake_minimum_required(VERSION 3.0.0)
project(vulkan VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

set(GLFW3_INCLUDE_DIR D:/opengl/glfw-3.3.8/include)
set(GLFW_LIB D:/opengl/glfw-3.3.8/build/src/Debug/glfw3.lib)
set(VULKAN_LIB D:/vulkan/Lib/vulkan-1.lib)
set(VULKAN_INCLUDE D:/vulkan/Include)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

include_directories(
    ${GLFW3_INCLUDE_DIR}
    ${GLAD_INCLUDE_DIR}
    ${GLW_INCLUDE_DIR}
    ${VULKAN_INCLUDE}
)

file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/src/*.hpp)

add_executable(
    ${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES}
)

target_link_libraries(
    ${PROJECT_NAME}
    ${GLFW_LIB}
    ${VULKAN_LIB}
)
cmake_minimum_required(VERSION 3.20)
project(vulkan VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

# set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BINARY_DIR)

set(THIRD_PARTY_DIR ${CMAKE_SOURCE_DIR}/3d-party)
set(Vulkan_LIBRARY ${THIRD_PARTY_DIR}/VulkanSDK/lib/Win32/vulkan-1.lib)
set(Vulkan_INCLUDE_DIRS ${THIRD_PARTY_DIR}/VulkanSDK/include)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

include_directories(
    ${Vulkan_INCLUDE_DIRS}
)

add_subdirectory(3d-party)

file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/src/*.hpp)

add_executable(
    ${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES}
)

target_link_libraries(
    ${PROJECT_NAME}
    glfw
    glm
    ${Vulkan_LIBRARY}
)

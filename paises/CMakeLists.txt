file (GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set (HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/)
set (LIBRARY_NAME paises)

add_library(${LIBRARY_NAME} ${SOURCES})
target_include_directories(${LIBRARY_NAME} PUBLIC ${HEADERS})

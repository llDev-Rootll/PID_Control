include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

add_library(pid_lib PID.cpp ${CMAKE_SOURCE_DIR}/include/PID.h)
target_include_directories(pid_lib PUBLIC ../include)
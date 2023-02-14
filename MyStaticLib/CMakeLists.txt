# 打印输出文件夹
message("lib dir: ${CMAKE_BINARY_DIR}/lib")

# 设置lib输出文件夹在二进制输出文件中 /out/build/x64-debug
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# 生成MyStaticLib.lib静态链接库
add_library(MyStaticLib STATIC "MyStaticLib.cpp" "MyStaticLib.h")

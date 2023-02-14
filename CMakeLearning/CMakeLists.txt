# CMakeList.txt: CMakeLearning1 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 添加链接库的文件路径
link_directories("${CMAKE_BINARY_DIR}/lib")

# 设置可执行文件生成文件夹
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
# 打印可执行文件生成文件夹
message("exe dir: ${CMAKE_BINARY_DIR}/bin")

# 将源代码添加到此项目的可执行文件。
add_executable (CMakeLearning "CMakeLearning.cpp" "CMakeLearning.h")

# 链接库，注意一定要跟在add_executable后，否则无法找到CMakeLearning1
target_link_libraries(CMakeLearning MyStaticLib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeLearning PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。

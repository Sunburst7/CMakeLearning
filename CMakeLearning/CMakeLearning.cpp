// CMakeLearning.cpp: 定义应用程序的入口点。
//

#include "CMakeLearning.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	cout << MathFunc::pow(2) << endl; // 引入静态链接库
	return 0;
}

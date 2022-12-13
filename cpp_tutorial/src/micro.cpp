#include <iostream>
//基本用法 https://zhuanlan.zhihu.com/p/556952800
//debug/release 设置  项目属性-> c/c++ -> 预处理
#ifdef DEBUG
#define Log(x) std::cout<< x << std::endl;
#elif defined(RELEASE)
#define Log(x)
#endif

void test_micro()
{
  Log("hello micro");
  std::cin.get();
}

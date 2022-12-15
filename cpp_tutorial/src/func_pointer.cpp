#include <iostream>
#include <vector>
//函数指针
//typedef int (*fun_ptr)(int,int); // 声明一个指向同样参数、返回值的函数指针类型
//函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。
//简单讲：回调函数是由别人的函数执行时调用你实现的函数。

void HelloFunc()
{
  std::cout << "Hello Function Pointer!" << std::endl;
}

void HelloFuncParam(int a)
{
  std::cout << "Hello Function Pointer! value:" << a << std::endl;
}

void Print(int a)
{
    std::cout << "value: " << a << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int)) 
{
    for (auto value : values) {
        func(value);
    }
}

void test_func_pointer()
{
    auto func = HelloFunc;  //获取函数指针， &HelloFunc
    func();   //void(*func)() 类型
  
    void(*func1)() = HelloFunc;  //不建议
    func1();
  
    typedef void(*HelloFuncPointer)();
    HelloFuncPointer func2 = HelloFunc;
    func2();
  
    typedef void(*HelloFuncPointerParam)(int);
    HelloFuncPointerParam func3 = HelloFuncParam;
    func3(8);
  
    std::vector<int> values = {1,2,3,4,5};
    ForEach(values, Print);
  
    ForEach(values, [](int a) {std::cout << "value:" << a << std::endl;});
}

#include <iostream>
/*
枚举类型(enumeration)是 C++ 中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
1. 枚举变量可以直接输出，但不能直接输入。如：cout >> color3;   //非法 
2. 不能直接将常量赋给枚举变量。如：  color1=1; //非法 
3. 不同类型的枚举变量之间不能相互赋值。如： color1=color3;  //非法 
4. 枚举变量的输入输出一般都采用switch语句将其转换为字符或字符串；
   枚举类型数据的其他处理也往往应用switch语句，以保证程序的合法性和可读性。 
*/
// enum 中可以指定数值，如A=2
enum Example 
{
	A, B , C
};

enum Example1 : char  // or int, unsigned char
{
	A1 = 0, 
	B1 = 1,
	C1 = 2
};

void test_enum()
{
	Example value = A;
	if (value == A) {
		std::cout << "enum do something" << std::endl;
	}
}
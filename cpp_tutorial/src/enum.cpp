#include <iostream>
/*
ö������(enumeration)�� C++ �е�һ�������������ͣ��������û����������ö�ٳ����ļ��ϡ�
1. ö�ٱ�������ֱ�������������ֱ�����롣�磺cout >> color3;   //�Ƿ� 
2. ����ֱ�ӽ���������ö�ٱ������磺  color1=1; //�Ƿ� 
3. ��ͬ���͵�ö�ٱ���֮�䲻���໥��ֵ���磺 color1=color3;  //�Ƿ� 
4. ö�ٱ������������һ�㶼����switch��佫��ת��Ϊ�ַ����ַ�����
   ö���������ݵ���������Ҳ����Ӧ��switch��䣬�Ա�֤����ĺϷ��ԺͿɶ��ԡ� 
*/
// enum �п���ָ����ֵ����A=2
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
#include <iostream>
//ָ�룺 �洢�ڴ��ַ������
void test_pointer()
{
	int var = 8;
	void *ptr = &var;
	//ptr�Ǳ����ĵ�ַ����һ������
	std::cout << "ptr address:" << ptr << std::endl;
	std::cout << "ptr value:" << *(int*)ptr << std::endl;
	int* ptr1 = &var;
	*ptr1 = 10;
	std::cout << "ptr value:" << *ptr1 << std::endl;

	int *buffer = new int[8];
	memset(buffer, 0, 8 * sizeof(int));  
	std::cout << "buffer 0: " << *buffer << std::endl;
	std::cout << "buffer 1: " << *(buffer+1) << std::endl;
	int **ptr2 = &buffer;
	std::cout << "buffer address:" << *ptr2 << std::endl;
	std::cout << "buffer 2:" << *(*ptr2+2) << std::endl;
	delete[] buffer; 
}
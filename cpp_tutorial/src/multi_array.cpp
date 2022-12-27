#include <iostream>

void test_multi_array()
{
    int* array = new int[5]; //
  
    int** array2 = new int*[5]; //
    for(int i = 0; i < 5; ++i) {
        array2[i] = new int[5];
    }
    array2[0][0] = 0;
    for(int i = 0; i < 5; ++i) {
        delete[] array2[i];
    }
    delete[][] array2;
  
    /*
    int*** array3 = new int**[5];
    for(int i = 0; i < 5; ++i) {
        array3[i] = new int*[5];
        for (int j = 0; j < 5; ++j) {
            int** ptr = array3[i];
            ptr[j] = new int[5];
        }
    }
    */
}

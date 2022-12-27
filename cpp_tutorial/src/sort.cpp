#include <iostream>
#include <vector>
#include <algorithm>
#incldue <functional>

void test_sort()
{
    std::vector<int> values = {2, 4, 6, 1, 9};
    //std::sort(values.begin(), values.end());
    //std::sort(values.begin(), values.end(), std::greater<int>());
    //std::sort(values.begin(), values.end(), [](int a, int b) {return a < b;});
    std::sort(values.begin(), values.end(), [](int a, int b) 
    {
      if (a == 1) return false;
      if (b == 1) return true;
      return a < b;
    });
}

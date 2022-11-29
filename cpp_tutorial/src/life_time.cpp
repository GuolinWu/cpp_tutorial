#include <iostream>
#include <string>

//heap and stack

class Entity
{
public:
    int x;
    Entity()
    {
        std::cout << "Create Entity!" << std::endl; 
    }
  
     ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl; 
    }
};

class ScopePtr
{
private：
    Entity* m_ptr;
public:
    ScopePtr(Entity* ptr) : m_ptr(ptr)
    {}
  
    ~ScopePtr()
    {
        delete m_ptr;
    }
      
}

int* CreateArray()  //useless
{
    int array[50];  // local stack
    int* array1 = new array[50]; //heap
    return array;
}

void test_life_time()
{
    {  //scope
        Entity e;   // stack  create and destroyed 
    }
    Entity e1 = new Entity();  // heap
    delete e1;  //need destroyed manual;
  
    ScopePtr e2 = new Entity();  //delete
}

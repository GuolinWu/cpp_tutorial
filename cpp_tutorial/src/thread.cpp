#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;
    std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;
  
    while(!s_Finished) {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(1s);
    }
}

void test_thread()
{
    std::thread worker(DoWork);  //传入函数指针
    std::cin.get();
    s_Finished = true;
    worker.join();  //当前线程等待 worker 线程执行完成
    std::cout << "Finished." << std:;endl;
    std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;
    std::cin.get();
}

#include "main.h"
#include <thread>

int main(int argc, char *argv[])
{
    for (int k=0;k<argc;++k) {
        std::cout<<argv[k]<<std::endl;
    }

    std::thread t {hi};

    t.join();

    std::cout << "This is the main thread." << std::endl;

    return 0;
}

void hi() {
    std::cout << "This is a concurrent thread." << std::endl;
}

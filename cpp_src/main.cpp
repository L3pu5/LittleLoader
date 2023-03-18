#include "progress.cpp"
#include <thread>
#include "iostream"


int main(){
    std::cout << make_progress_bar(120, 20.8f);
    return 0;
}


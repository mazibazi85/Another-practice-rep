#include <iostream>
#include <thread>

using namespace std;

void f(){
    this_thread::sleep_for(1s);
    cout << "f()\n";
}

int main()
{
    thread t(f);
    t.join();
    return 0;
}

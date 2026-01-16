#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    // using namespace std;
    using  std::cout;
    using namespace second;
    // int x = 0;

    cout << x;

    // std::cout << x; 0
    // std::cout << first::x; 1
    //std::cout << second::x; 2

    /*
    Namespace provides a solution for preventing name conflicts in large
    projects. Each entity needs a unique name.
    A namespace allows for identically named entities 
    as long as the namespace are different.
    */
    
    return 0;
}
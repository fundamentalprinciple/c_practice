#include <iostream>

namespace first{
    int x = 0;
}

namespace second{
    int x = 1;
}

int main() {
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    return 0;
}

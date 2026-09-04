#include <iostream>

std::string a = "Prince ";
std::string b = "Dixit\n";

std::string c = a + b;
std::string d = a.append(b);

int main() {
    std::cout << c;
    std::cout << d;
    return 1;
}

#include <iostream>

int main()
{
	for(int x : {1,2,3})
		std::cout << x << std::endl;

	std::string fruits[3] = {"Apple", "Banana"};
	fruits[2] = {"Cherry"};
	for(std::string x : fruits)
		std::cout << x << std::endl; 
	return 0;
}

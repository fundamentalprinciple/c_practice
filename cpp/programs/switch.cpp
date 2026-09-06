#include <iostream>

int main()
{
	int x;
	std::cin >> x;	

	switch(x) {
		case 123:
			std::cout << "Ok" << std::endl;
			break;
		case 321:
			std::cout << "Ok but less roles" << std::endl;
			break;
		default:
			std::cout << "No, leave me alone" << std::endl;
	}

	return 0;
}

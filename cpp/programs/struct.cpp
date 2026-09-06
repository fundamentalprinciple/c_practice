#include <iostream>

struct {
	int age;
	std::string name;
} employee, employer;

struct person {
	std::string name;
	int age;
	std::string hobby;
};

int main()
{
	employee.age = 25;
	employee.name = "Ram";

	employer.age = 30;
	employer.name = "Ravan";

	std::cout << employee.name << std::endl;	
	std::cout << employer.name << std::endl;


	std::cout << std::endl;	

	person me;
	me.name = "Prince";
	me.age = 20;
	me.hobby = "Listening essays";

	std::cout << "my name is " << me.name << " I'm " << me.age << " years old " << " I like " << me.hobby << std::endl;
	
	return 0;
}

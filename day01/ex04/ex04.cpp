#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string ref = *ptr;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}
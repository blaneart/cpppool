#include "iostream"
#include "string"
#include <unistd.h>

void memoryLeak()
{
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;

}

void resolvedMemoryLeak1()
{
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

void resolvedMemoryLeak2()
{
	std::string panther("String panther");
	std::cout << panther << std::endl;
}

int main()
{
	resolvedMemoryLeak1();
	sleep(20);
	resolvedMemoryLeak2();
	sleep(20);
	memoryLeak();
	sleep(50);
	return (0);
}

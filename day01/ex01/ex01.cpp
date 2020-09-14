#include "iostream"
#include "string"

void memoryLeak()
{
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
}

void resolvedmemoryLeak1()
{
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

void resolvedmemoryLeak2()
{
	std::string panther("String panther");
	std::cout << panther << std::endl;
}

int main()
{
	resolvedmemoryLeak2();
	return (0);
}

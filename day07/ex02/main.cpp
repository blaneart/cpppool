#include "Array.hpp"
#include "Array.tpp"
int main()
{
	int * a = new int();
	Array<int> intR;
	Array<int> * b = new Array<int>();
	Array<int> intRR(5);
	intR = intRR;
	for (size_t i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
 	std::cout << a;
 	std::cout << b;
}

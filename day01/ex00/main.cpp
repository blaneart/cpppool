#include "Pony.hpp"


void ponyOnTheHeap()
{
	Pony *ptr;

	ptr = new Pony("PonyOnTheHeap", 5);
	ptr->BirthDay();
	delete ptr;
	std::cout << "Now there is no PonyOnTheHeap anymore:("<< std::endl;
}

void ponyOnTheStack()
{
	Pony st("PonyOnTheStack", 2);
	st.SayMyName();

}
int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "Now there is no PonyOnTheStack anymore:("<< std::endl;
	return (0);
}

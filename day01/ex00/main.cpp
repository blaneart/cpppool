#include "Pony.hpp"


void ponyOnTheHeap()
{
	Pony *ptr;

	ptr = new Pony("lol", 5);
	ptr->BirthDay();
	delete ptr;
}

void ponyOnTheStack()
{
	Pony kek("kek", 2);
	kek.SayMyName();
}
int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	system("leaks a.out");
	return (0);
}

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
	Base b;
	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast err){}
	try
	{
		b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast err){}
	try
	{
		b = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast err){}
}

Base * generate(void)
{
	Base *res;
	int cs = std::rand() % 3;

	if (cs == 0)
		res = new A();
	else if (cs == 0)
		res = new B();
	else
		res = new C();
	return res;
}

int main()
{
	Base* p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	identify_from_pointer(p);
	delete p;
	return (0);
}

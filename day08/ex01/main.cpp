#include "span.hpp"

int main()
{
	span twelve(10);
	span random(10000);
	span just_one(1);

	just_one.addNumber(1);

	for (int i = 0; i < 10; i++)
		twelve.addNumber(i * 12);
	for (int i = 0; i < 10000; i++)
		random.addNumber(std::rand() % 42424242);
	std::cout << twelve.longestSpan() << std::endl;
	std::cout << twelve.shortestSpan() << std::endl;
	std::cout << random.longestSpan() << std::endl;
	std::cout << random.shortestSpan() << std::endl;
	try
	{
		just_one.longestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		just_one.addNumber(1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

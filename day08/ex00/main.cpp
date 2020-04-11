#include "easyfind.hpp"

int main()
{
	std::array<int, 3> array = {1, 2, 3};
	std::vector<int> vect(5,5);
	std::deque <int> gquiz;
	std::list<int> lint(10, 42);
 	std::map<int, int> gquiz1;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
	gquiz1.insert(std::pair<int, int>(1, 40));
    gquiz1.insert(std::pair<int, int>(2, 30));
    gquiz1.insert(std::pair<int, int>(3, 60));
    gquiz1.insert(std::pair<int, int>(4, 20));
    gquiz1.insert(std::pair<int, int>(5, 50));
    gquiz1.insert(std::pair<int, int>(6, 50));
    gquiz1.insert(std::pair<int, int>(7, 10));
	int position;
	try
	{
		position = easyfind(array, 2) - std::begin(array);
		std::cout << "Value's position is " << position << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Value was not found" << std::endl;
	}
	try
	{
		position = easyfind(vect, 4) - std::begin(vect);
		std::cout << "Value's position is " << position << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Value was not found" << std::endl;
	}
	try
	{
		position = easyfind(gquiz, 15) - std::begin(gquiz);
		std::cout << "Value's position is " << position << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Value was not found" << std::endl;
	}
	try
	{
		position = std::distance(lint.begin(), easyfind(lint, 42));
		std::cout << "Value's position is " << position << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Value was not found" << std::endl;
	}
	try
	{
		easyfind(gquiz1, 42);
		std::cout << "Value's position is " << position << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Value was not found" << std::endl;
	}

}

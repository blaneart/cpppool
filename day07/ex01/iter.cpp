#include <iostream>


template <class T>

void iter(T array[], unsigned int length, void (*f)(T &elem))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

void p_r_i_n_t(std::string &str)
{
	std::cout << str << "_";
}

void mult(double &d)
{
	d = d * 2;
}
int main()
{
	std::string str[] = {"abcdefg", "kek"};
	double d[] = {1, 1.5, 4.2};
	::iter(str, 2, &p_r_i_n_t);
	std::cout << std::endl;
	::iter(d, 3, &mult);
	for (int i = 0; i < 3; i++)
		std::cout << d[i] << std::endl;
}

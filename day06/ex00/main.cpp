#include  "Convert.hpp"

int ft_check_string(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff"
			|| str == "-inf" || str == "-inff" || str == "inf" || str == "inff")
		return (0);
	for (int i = str[0] == '-' || str[0] == '+' ? 1 : 0; i < str.size(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	return (0);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string s(av[1]);
		if (ft_check_string(s))
			std::cout << "Error: bad argument." << std::endl;
		else
		{
			Convert number(s);
			std::cout << number;
		}
	}
	else
		std::cout << "Error: too many arguments." << std::endl;
	return 0;
}

#include <fstream>
#include <iostream>

int ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	input(filename);
	std::ofstream	output(filename + ".replace");
	std::string	buf;
	size_t	position;
	size_t len2 = s2.size();
	size_t len1 = s1.size();

	if (len1 == 0 || len2 == 0)
	{
		std::cerr << "Line must not be empty." << std::endl;
		return (1);
	}
	if (input.fail())
	{
		std::cerr << "Couldn't open file" << filename << std::endl;
		return (1);
	}
	if (output.fail())
	{
		std::cerr << "Couldn't create replace file. Exit." << std::endl;
		return (1);
	}
	while (std::getline(input, buf))
	{
		position = buf.find(s1);
		while (position != std::string::npos)
		{
			buf.replace(position, len1, s2);
			position = buf.find(s1, position + len2);
		}
		output << buf;
		if (buf.size() > 0)
			output << std::endl;
	}
	input.close();
	output.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cerr << "Wrong number of arguments." << std::endl;
	else
		return (ft_replace(argv[1], argv[2], argv[3]));
	return (1);
}

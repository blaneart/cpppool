#include <iostream>

char *for_all(char *let)
{
	int i;

	i = 0;
	while (let[i])
	{
		let[i] = std::toupper(let[i]);
		i++;
	}
	return (let);
}

int main(int argc, char **argv)
{
	int i;
	std::string output("");

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			output.append(for_all(argv[i]));
			i++;
			if (argv[i] != NULL)
				output.append(" ");
		}
	}
	else
		output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout <<  output << std::endl;
	return (0);
}

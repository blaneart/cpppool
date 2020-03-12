#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
class Account
{
	public:
	int id;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string favorite_meal;
	std::string underwear;
	std::string secret;
	void CreateContact(int number)
	{
		id = number;
		std::cout << "Please, enter first name:" << std::endl;
		std::cin >> firstname;
		std::cout << "Please, enter last name:" << std::endl;
		std::cin >> lastname;
		std::cout << "Please, enter nickname:" << std::endl;
		std::cin >> nickname;
		std::cout << "Please, enter login:" << std::endl;
		std::cin >> login;
		std::cout << "Please, enter postal address:" << std::endl;
		std::cin >> postal_address;
		std::cout << "Please, enter email address:" << std::endl;
		std::cin >> email;
		std::cout << "Please, enter phone number:" << std::endl;
		std::cin >> phone;
		std::cout << "Please, enter birthday date:" << std::endl;
		std::cin >> birthday;
		std::cout << "Please, enter favorite meal:" << std::endl;
		std::cin >> favorite_meal;
		std::cout << "Please, enter underwear color:" << std::endl;
		std::cin >> underwear;
		std::cout << "Please, enter darkest secret:" << std::endl;
		std::cin >> secret;
		std::cout << "Contact has been added. Thank you!" << std::endl;
	}
	void print_out_new(std::string name)
	{
		char format[10];

		int len;

		len = name.size();
		if (len > 10)
		{
			std:: size_t length = name.copy(format, 9);
			format[length] = '.';
			format[length + 1] = '\0';
		}
		else
		{
			std:: size_t length = name.copy(format, len);
			format[length] = '\0';
		}
		std::cout << std::setw(10) << format;
	}
	void show_contacts()
	{
		std::cout << std::setw(10) << id + 1;
		std::cout << "|";
		Account::print_out_new(firstname);
		std::cout << "|";
		Account::print_out_new(lastname);
		std::cout << "|";
		Account::print_out_new(nickname);
	}
};

int add_contact(Account *obj)
{
	static int i = 0;

	if (i < 7)
	{
		obj[i].CreateContact(i);
		i++;
	}
	else
		std::cout << "Too many contacts" << std::endl;
	return (i);
}
void search(Account *obj, int i)
{
	int j;

	j = 0;
	while (j <= i)
	{
		obj[j].show_contacts();
		std::cout << std::endl;
		j++;
	}
}
int main()
{
	std::string command;
	Account obj[8];
	int num;

	num = -1;
	while (1)
	{
		std::cin >> command;
 		if (command == "ADD")
			num = add_contact(obj);
		else if (command == "SEARCH")
			search(obj, num - 1);
		else if (command == "EXIT")
			exit(0);
		else
		{
			std::cout << "This command is incorrect. The list of commands:" << std::endl;
			std::cout << "'ADD' to add new contact" << std::endl;
			std::cout << "'SEARCH' to show all current contacts" << std::endl;
			std::cout << "'EXIT' to quit the program" << std::endl;
		}
	}
}

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee attack on " << target << "!!!" << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
	std::cout << "Range attack on " << target << "!!!" << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating shout on " << target << "!!!" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string actionStr[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	typedef void (Human::*Actions)(std::string const & target);
	Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int i = 0;

	while (i < 3)
	{
		if (actionStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			break ;
		}
		i++;
	}
}

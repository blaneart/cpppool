#ifndef EASYFIND_HPP
#define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <vector>
# include <deque>
# include <array>
# include <list>
# include <map>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator t;
	t = std::find(std::begin(container), std::end(container), value);
	if (t != std::end(container))
		return (t);
	else
		throw std::exception();
}

#endif

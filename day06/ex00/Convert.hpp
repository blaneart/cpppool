#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
# include <cmath>
# include <iomanip>

class Convert
{
	private:
		Convert();
		std::string orig;
		char	c;
		int		i;
		float	f;
		double	d;
		int type;
		std::string char_mistake;
		std::string int_mistake;
	public:
		Convert(std::string &);
		Convert(const Convert&);
		Convert& operator=(const Convert&);
		~Convert();
		void fromChar(std::string &);
		void fromInt(std::string &);
		void fromFloat(std::string &);
		void fromDouble(std::string &);
		void fromOrig();
		int determine(std::string const &orig);
		int getInt() const;
		float getFloat() const;
		char getChar() const;
		int getType() const;
		double getDouble() const;
		std::string getCharMistake() const;
		std::string getIntMistake() const;
};

std::ostream &operator<<(std::ostream &os, const Convert &);
#endif

#include "Convert.hpp"

const int CHAR = 0;
const int INT = 1;
const int FLOAT = 2;
const int DOUBLE = 3;

Convert::Convert(std::string &orig)
{
	this->char_mistake = "OK";
	this->int_mistake = "OK";
	this->orig = orig;
	this->type = this->determine(orig);
	this->fromOrig();

}

Convert::Convert(const Convert& other)
{
	this->orig = other.orig;
}

Convert& Convert::operator=(const Convert& other)
{
	return *this;
}

Convert::~Convert()
{}

int Convert::determine(std::string const &orig)
{
	int flag = 0;
	if (orig == "nan" || orig == "inf" || orig == "-inf")
		return DOUBLE;
	if (orig == "nanf" || orig == "inff" || orig == "-inff")
		return FLOAT;
	if (orig.size() == 1)
	{
		if (orig[0] >= '0' && orig[0] <= '9')
			return INT;
		else
			return CHAR;
	}
	for (int i = orig[0] == '-' || orig[0] == '+' ? 1 : 0; i < orig.size(); i++)
	{
		if (orig[i] != '.' && (orig[i] > '9' || orig[i] < '0') && orig[i] != 'f')
			return -1;
		if (i == orig.size() - 1 && orig[i] == 'f')
			return FLOAT;
		if (orig[i] == '.')
			flag = 1;
	}
	if (flag == 1)
		return DOUBLE;
	else
		return INT;
}

void Convert::fromChar(std::string &orig)
{
	this->c = static_cast<char>(orig[0]);
	this->i = static_cast<int>(this->c);
	this->f = static_cast<float>(this->c);
	this->d = static_cast<double>(this->c);
}

void Convert::fromInt(std::string & orig)
{
	this->i = std::stoi(orig);
	if (this->i > 31 && this->i < 127)
		this->c = static_cast<char>(this->i);
	else if (this->i > 255 || this->i < 0)
		this->char_mistake = "impossible";
	else
		this->char_mistake = "Non displayable";
	this->f = static_cast<float>(this->i);
	this->d = static_cast<double>(this->i);
}

void Convert::fromFloat(std::string &orig)
{
	this->f = std::stof(orig);
	if (this->f > 31 && this->f < 127)
		this->c = static_cast<char>(this->f);
	else if (this->f > 255 || this->f < 0 || std::isnan(this->f))
		this->char_mistake = "impossible";
	else
		this->char_mistake = "Non displayable";
	if (this->f > INT_MAX || this->f < INT_MIN || std::isnan(this->f))
		this->int_mistake = "impossible";
	this->i = static_cast<int>(this->f);
	this->d = static_cast<double>(this->f);
}

void Convert::fromDouble(std:: string &orig)
{
	this->d = std::stod(orig);
	if (this->d > 31 && this->d < 127)
		this->c = static_cast<char>(this->d);
	else if (this->d > 255 || this->d < 0 || std::isnan(this->d))
		this->char_mistake = "impossible";
	else
		this->char_mistake = "Non displayable";
	if (this->d > INT_MAX || this->d < INT_MIN || std::isnan(this->d))
		this->int_mistake = "impossible";
	this->i = static_cast<int>(this->d);
	this->f = static_cast<double>(this->d);
}

void Convert::fromOrig()
{
	if (this->type == CHAR)
		this->fromChar(this->orig);
	else if (this->type == INT)
	{
		try
		{
			this->fromInt(this->orig);
		}
		catch (std::exception & e)
		{
			this->type = DOUBLE;
			this->fromDouble(this->orig);
		}
	}
	else if (this->type == FLOAT)
		this->fromFloat(this->orig);
	else if (this->type == DOUBLE)
		this->fromDouble(this->orig);
}

char Convert::getChar() const
{
	return this->c;
}

int Convert::getInt() const
{
	return this->i;
}

float Convert::getFloat() const
{
	return this->f;
}

double Convert::getDouble() const
{
	return this->d;
}

int Convert::getType() const
{
	return this->type;
}

std::string Convert::getCharMistake( void ) const
{
	return this->char_mistake;
}

std::string Convert::getIntMistake( void ) const
{
	return this->int_mistake;
}

std::ostream &operator<<(std::ostream &os, const Convert &conv)
{
	os << "char:	";
	if (conv.getCharMistake() != "OK")
		os << conv.getCharMistake() << std::endl;
	else
		os << "'" << conv.getChar() << "'" << std::endl;
	os << "int:	";
	if (conv.getIntMistake() != "OK")
		os << conv.getIntMistake() << std::endl;
	else
		os << conv.getInt() << std::endl;
	os << "float:	" << conv.getFloat();
	if (ceil(conv.getFloat())-floor(conv.getFloat()) ==0)
		os << ".0";
	os << "f" << std::endl;
	os << "double:	" << conv.getDouble();
	if (ceil(conv.getDouble())-floor(conv.getDouble()) ==0)
		os << ".0";
	os << std::endl;
	return os;
}

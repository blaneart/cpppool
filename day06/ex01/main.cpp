#include <iostream>

struct Data
{
  std::string s1;
  int         n;
  std::string s2;
};

void *serialize(void)
{
	std::string alphanum("abcdefghijklmnopqrstuvwxyz" \
		"0123456789" \
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	int length = alphanum.size();
	char *result = new char[16 + sizeof(int)];
	for (int i = 0; i < 8; i++)
		result[i] = alphanum[std::rand() % length];
	*reinterpret_cast<int*>(result + 8) = std::rand();
	for (int i = 8 + sizeof(int); i < 16 + sizeof(int); i++)
		result[i] = alphanum[std::rand() % length];
	return ((void *)result);
}

Data *deserialize(void *seria)
{
	Data *data = new Data;
	char *result = reinterpret_cast<char*>(seria);

	data->s1 = std::string(result, 8);
	data->s2 = std::string(result + 8 + sizeof(int), 8);
	data->n = *reinterpret_cast<int*>(result + 8);
	return data;
}
int main()
{
 	void *adr = serialize();
	Data *data = deserialize(adr);
	std::cout << data->s1 << std::endl;
	std::cout << data->s2;
	return (0);
}

#include <iostream>

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

int main()
{
	std::cout << serialize();
	return (0);
}

#include "serialization.h"

void *      serialize(void)
{
	Data *data = new Data;
	char	alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; i++)
		data->s1 += alphabet[rand() % 25];
	data->n = rand() % 20000;
	for (int i = 0; i < 8; i++)
		data->s2 += alphabet[rand() % 25];
	return (reinterpret_cast<void*>(data));
}

Data *      deserialize(void * raw)
{
	Data *rtn = new Data;

	rtn->s1 = std::string(reinterpret_cast<char *>(raw) + 1, 8);
	rtn->n = *(reinterpret_cast<int *>(raw) + 8);
	rtn->s2 = std::string(reinterpret_cast<char *>(raw) + 33, 8);
	return (rtn);
}

int main()
{
	srand(time(NULL));
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << "Str1    = " << data->s1 << std::endl;
	std::cout << "int     = " << data->n << std::endl;
	std::cout << "Str2    = " << data->s2 << std::endl;

	delete reinterpret_cast<Data *>(raw);
	delete data;
}


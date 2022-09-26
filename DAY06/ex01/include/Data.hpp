# include <iostream>
# include <stdint.h>

typedef	struct Data
{
	int i;
} Data;

uintptr_t serialize(Data* ptr);
Data	*deserialize(uintptr_t raw);
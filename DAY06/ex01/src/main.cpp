# include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

int main()
{
	Data *data_ptr = new Data;
	uintptr_t serialized = 0;

	data_ptr->i = 5;
	std::cout << sizeof(serialized) << std::endl;
	std::cout << data_ptr << std::endl;
	std::cout << data_ptr->i << std::endl;
	serialized = serialize(data_ptr);
	std::cout << serialized << std::endl;
	data_ptr = deserialize(serialized);
	std::cout << sizeof(data_ptr) << std::endl;
	std::cout << data_ptr << std::endl;
	std::cout << data_ptr->i << std::endl;

	return (0); 
}
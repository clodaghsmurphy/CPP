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
	Data data;
	Data *data_ptr = &data;
	uintptr_t serialized = 0;

	data_ptr->i = 5;
	std::cout << "DATA PTR BEFORE 🥣" << std::endl;
	std::cout << "DATA ADDRESS : " << &data << std::endl;
	std::cout << "ADDRESS POINTED TO : " << data_ptr << std::endl;
	std::cout << "DATA i VALUE : " << data_ptr->i << std::endl;
	std::cout << "🥣 CEREAL TIME🥣 " << std::endl;
	std::cout << "CEREAL POINTS TO BEFORE : " << serialized << std::endl;
	serialized = serialize(data_ptr);
	std::cout << "CEREAL POINTS TO AFTER : " << serialized << std::endl;
	data_ptr = deserialize(serialized);
	std::cout << "DATA_PTR AFTER CEREAL 🥣" << std::endl;
	std::cout << data_ptr << std::endl;
	std::cout << data_ptr->i << std::endl;

	return (0); 
}
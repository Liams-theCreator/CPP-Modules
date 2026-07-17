#include "easyfind.hpp"

int main()
{
	// --- vector ---
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	try
	{
		std::vector<int>::iterator it = easyfind(v, 1);
		std::cout << "vector: found " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "vector: " << e.what();
	}

	// --- list ---
	std::list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);

	try
	{
		std::list<int>::iterator it = easyfind(l, 30);
		std::cout << "list: found " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "list: " << e.what();
	}

	return 0;
}
#include <iostream>
#include <class.hpp>
#include <vector>

int main()
{
	std::vector<kr::Equipment*> data;

	kr::Equipment* equipment = new kr::Equipment("SPT963", 1);
	data.push_back(equipment);

	equipment = new kr::Equipment("MKTS", 2);
	data.push_back(equipment);

	for (auto& d : data)
	{
		d->poll();
		d->print();
	}

	for (int i = 0; i < data.size(); i++)
	{
		delete data[i];
	}
	return 0;
}

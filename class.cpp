#include <class.hpp>
#include <ctime>

namespace kr
{
	Equipment::Equipment(std::string name, int address)
	{
		n_name = name;
		n_address = address;
	}

	Equipment::~Equipment() {};


	void Equipment::poll()
	{
		srand(time(NULL));
		if (n_address == 1)
		{
			n_energy = 12368, 4;;
			n_temperature = 64;
		}
		else if (n_address == 2)
		{
			n_energy = 38961;
			n_temperature = 117;
		}
	}


	void Equipment::print()
	{
		std::cout << "Name: " << n_name << std::endl;
		std::cout << "Address:  " << n_address << std::endl;
		std::cout << "Energy: " << n_energy << "Gkal" << std::endl;
		std::cout << "Temperature:  " << n_temperature  << std::endl;
	}
}


#pragma once
#include <iostream>

namespace kr
{
    class Equipment
    {
    public:
        Equipment(std::string name, int address);
        ~Equipment();
        void poll();
        void print();
    private:
        std::string n_name;
        int n_address;
        float n_energy, n_temperature;
    };
}


#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);

	private:
		std::string name;
};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
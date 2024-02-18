#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int				N = 5;
	std::string		name = "Bobs";
	Zombie*			horde = zombieHorde(N, name);
	
	if (!horde)
	{
		std::cout << "Horde is NULL" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}
	for (int i = 0; i < N; ++i)
	{
		horde[i].~Zombie();
	}
	operator delete[](horde);
	return (0);
}
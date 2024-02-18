#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = static_cast<Zombie*>(operator new[](N * sizeof(Zombie)));

	if (!horde)
	{
		std::cout << "Failed allocation" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; ++i)
	{
		new(&horde[i]) Zombie(name);
	}
	return (horde);	
}

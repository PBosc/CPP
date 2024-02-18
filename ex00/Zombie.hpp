#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string desired_name);
		void announce(void);
		~Zombie(void);
};
#endif
#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string& getType(void) const;
		void setType(const std::string& weapon_type);
		~Weapon(void);
};
#endif
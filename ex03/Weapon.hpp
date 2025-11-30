#ifndef WOPEN_HPP
#define WOPEN_HPP

#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string type);
		void setType(std::string type);
		const std::string &getType();
};

#endif
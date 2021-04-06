
#ifndef CPP_ENEMY_HPP
#define CPP_ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int _hp;
	std::string _type;
	Enemy();

public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy &copy);
	Enemy &operator=(const Enemy &rhs);
	std::string const getType() const;
	int getHP() const;
	virtual void	takeDamage(int);
};


#endif //CPP_ENEMY_HPP

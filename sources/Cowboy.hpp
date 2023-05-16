#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"

namespace ariel
{

    class Cowboy : public Character
    {
    private:
        int bullets;

    public:
        Cowboy(const std::string &name, const Point &position)
            : Character(name, 110, position), bullets(6) {}

        void attack(Character *target) { shoot(target); }

        void shoot(Character *target)
        {
            if (isAlive() && hasboolets())
            {
                target->hit(10);
                bullets = bullets - 1;
            }
        }
        bool hasboolets() { return (bullets > 0) ? true : false; }

        void reload() { bullets = 6; }
    };

}

#endif

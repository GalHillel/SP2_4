#ifndef OLDNINJA_HPP
#define OLDNINJA_HPP

#include "Character.hpp"
#include "Point.hpp"

namespace ariel
{

    class OldNinja : public Character
    {
    private:
        int velocity;

    public:
        OldNinja(const std::string &name, const Point &position)
            : Character(name, 150, position), velocity(8) {}

        void attack(Character *target) { slash(target); }

        void slash(Character *target) { target->hit((isAlive() && distance(*target) <= 1) ? 31 : 0); }

        void move(Character *target)
        {
            if (distance(*target) < velocity)
            {
                Point newPoint = getLocation();
                newPoint = newPoint.moveTowards(newPoint, target->getLocation(), velocity);
                setPosition(newPoint);
            }
            else
            {
                setPosition(target->getLocation());
            }
        }
    };

}

#endif

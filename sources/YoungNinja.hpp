#ifndef YOUNGNINJA_HPP
#define YOUNGNINJA_HPP

#include "Character.hpp"

using namespace std;

namespace ariel
{

    class YoungNinja : public Character
    {
    private:
        int velocity;

    public:
        YoungNinja(const string &name, const Point &position)
            : Character(name, 100, position), velocity(14) {}

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

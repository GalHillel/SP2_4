#ifndef TRAINEDNINJA_HPP
#define TRAINEDNINJA_HPP

#include "Character.hpp"

using namespace std;

namespace ariel
{

    class TrainedNinja : public Character
    {
    private:
        int velocity;

    public:
        TrainedNinja(const string &name, const Point &position)
            : Character(name, 120, position), velocity(12) {}

        // void attack(Character *target) override { slash(target); }

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

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp"

using namespace std;

namespace ariel
{

    class Character
    {
    private:
        string name;
        Point position;
        int hits;

    public:
        Character(const string &name, int hits, const Point &position)
            : name(name), hits(hits), position(position) {}

        virtual ~Character() = default;

        virtual std::string print() const
        {
            return "Name: " + name + ", Hits: " + to_string(hits) + ", Position: " + position.toString();
        }

        virtual Point getLocation() const { return position; }

        virtual string getName() const { return name; }

        virtual void hit(int hit) { hits = (hit > 0 && hit <= hits) ? hits - hit : 0; }

        virtual bool isAlive() { return (hits > 0) ? true : false; };

        virtual double distance(Character &other) const { return position.distance(other.position); }

        virtual void setPosition(Point location) { position = location; }

        // virtual void attack(Character *target);
    };

}

#endif

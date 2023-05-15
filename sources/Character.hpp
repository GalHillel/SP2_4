#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp" // Assuming Point class is defined here

namespace ariel
{

    class Character
    {
    protected:
        std::string name;
        Point position;

    public:
        Character(const std::string &name, const Point &position)
            : name(name), position(position) {}

        virtual ~Character() = default;

        virtual void move(const Point &destination)
        {
            position = destination;
        }

        virtual std::string print() const
        {
            return "Name: " + name + ", Position: " + position.toString();
        }

        virtual void attack(Character *target) = 0;
    };

} // namespace ariel

#endif // CHARACTER_HPP

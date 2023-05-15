#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"

namespace ariel
{

    class Cowboy : public Character
    {
    public:
        Cowboy(const std::string &name, const Point &position)
            : Character(name, position) {}

        void shoot(Character *target)
        {
            // Implement the shoot logic for the Cowboy character
        }

        void attack(Character *target) override
        {
            // Implement the attack logic for the Cowboy character
            shoot(target);
        }
    };

} // namespace ariel

#endif // COWBOY_HPP

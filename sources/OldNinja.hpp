#ifndef OLDNINJA_HPP
#define OLDNINJA_HPP

#include "Character.hpp"

namespace ariel
{

    class OldNinja : public Character
    {
    public:
        OldNinja(const std::string &name, const Point &position)
            : Character(name, position) {}

        void attack(Character *target) override
        {
            // Implement the attack logic for the OldNinja character
        }

        void slash(Character *target)
        {
            // Implement the slash logic for the Cowboy character
        }

        void move(Character *target)
        {
            // Implement the slash logic for the Cowboy character
        }
    };

} // namespace ariel

#endif // OLDNINJA_HPP

#ifndef YOUNTNINJA_HPP
#define YOUNTNINJA_HPP

#include "Character.hpp"

namespace ariel
{

    class YountNinja : public Character
    {
    public:
        YountNinja(const std::string &name, const Point &position)
            : Character(name, position) {}

        void attack(Character *target) override
        {
            // Implement the attack logic for the YountNinja character
        }
    };

} // namespace ariel

#endif // YOUNTNINJA_HPP

#ifndef TRAINEDNINJA_HPP
#define TRAINEDNINJA_HPP

#include "Character.hpp"

namespace ariel
{

    class TrainedNinja : public Character
    {
    public:
        TrainedNinja(const std::string &name, const Point &position)
            : Character(name, position) {}

        void attack(Character *target) override
        {
            // Implement the attack logic for the TrainedNinja character
        }
    };

} // namespace ariel

#endif // TRAINEDNINJA_HPP

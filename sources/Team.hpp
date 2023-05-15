#ifndef TEAM_HPP
#define TEAM_HPP

#include <vector>
#include <iostream>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"

namespace ariel
{

    class Team
    {
    private:
        std::vector<Character *> members;

    public:
        Team(Character *leader)
        {
            members.push_back(leader);
        }

        void add(Character *member)
        {
            members.push_back(member);
        }

        int stillAlive() const
        {
            int count = 0;
            for (const auto &member : members)
            {
                // Check if member is still alive
                // Increment count if alive
            }
            return count;
        }

        void attack(Team *enemyTeam)
        {
            for (const auto &member : members)
            {
                // Perform attack logic for each member
                // on the enemy team
                // Use member->attack(enemyCharacter) to attack individual characters
            }
        }

        void print() const
        {
            for (const auto &member : members)
            {
                std::cout << member->print() << std::endl;
            }
        }

        ~Team()
        {
            for (const auto &member : members)
            {
                delete member;
            }
            members.clear();
        }
    };

} // namespace ariel

#endif
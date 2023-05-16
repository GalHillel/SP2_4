#ifndef TEAM_HPP
#define TEAM_HPP

#include <vector>
#include <iostream>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"

using namespace std;

namespace ariel
{

    class Team
    {
    private:
        vector<Character *> members;
        Character leader;

    public:
        Team(Character *leader) : leader(*leader)
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
                count += (member->isAlive()) ? 1 : 0;
            }
            return count;
        }

        void attack(Team *enemyTeam)
        {
            if (!enemyTeam->members.empty())
            {
                enemyTeam->members.pop_back();
            }
            /*Character *target = nullptr;
            for (const auto &member : members)
            {
                if (!enemyTeam->members.empty())
                {
                    target = enemyTeam->members.back();
                }
                member->attack(target);
                if (!target->isAlive())
                {
                    enemyTeam->members.pop_back();
                }
            }*/
        }

        void print() const
        {
            for (const auto &member : members)
            {
                cout << member->print() << endl;
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

}

#endif
#ifndef TEAM2_HPP
#define TEAM2_HPP

#include <vector>
#include <algorithm>
#include "Character.hpp"

namespace ariel
{
    class Team2
    {
    private:
        std::vector<Character *> members;

    public:
        Team2(Character *leader)
        {
            members.push_back(leader);
        }

        void add(Character *member)
        {
            members.push_back(member);
        }

        void attack(Team2 *enemyTeam)
        {
            Character *closestCharacter = nullptr;
            double closestDistance = std::numeric_limits<double>::max();
            for (const auto &member : members)
            {
                if (member->isAlive())
                {
                    double distance = member->getLocation().distance(enemyTeam->getLeader()->getLocation());
                    if (distance < closestDistance)
                    {
                        closestCharacter = member;
                        closestDistance = distance;
                    }
                }
            }

                Character *victim = nullptr;
            closestDistance = std::numeric_limits<double>::max();
            for (const auto &enemy : enemyTeam->members)
            {
                if (enemy->isAlive())
                {
                    double distance = closestCharacter->getLocation().distance(enemy->getLocation());
                    if (distance < closestDistance)
                    {
                        victim = enemy;
                        closestDistance = distance;
                    }
                }
            }

            for (const auto &member : members)
            {
                if (member->isAlive())
                {
                    member->attack(victim);
                    if (!victim->isAlive())
                    {
                        closestDistance = std::numeric_limits<double>::max();
                        for (const auto &enemy : enemyTeam->members)
                        {
                            if (enemy->isAlive())
                            {
                                double distance = closestCharacter->getLocation().distance(enemy->getLocation());
                                if (distance < closestDistance)
                                {
                                    victim = enemy;
                                    closestDistance = distance;
                                }
                            }
                        }
                    }
                }
            }
        }

        int stillAlive() const
        {
            int count = 0;
            for (const auto &member : members)
            {
                if (member->isAlive())
                {
                    count++;
                }
            }
            return count;
        }

        void print() const
        {
            for (const auto &member : members)
            {
                std::cout << member->print() << std::endl;
            }
        }

        Character *getLeader() const
        {
            return members.front();
        }

        ~Team2()
        {
            for (const auto &member : members)
            {
                delete member;
            }
            members.clear();
        }
    };

} // namespace ariel

#endif // TEAM2_HPP
#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
#include <string>

namespace ariel
{

    class Point
    {
    private:
        double x;
        double y;

    public:
        Point(double x = 0, double y = 0)
            : x(x), y(y) {}

        double distance(const Point &other) const
        {
            double dx = x - other.x;
            double dy = y - other.y;
            return std::sqrt(dx * dx + dy * dy);
        }

        std::string toString() const
        {
            return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
        }
    };

} // namespace ariel

#endif // POINT_HPP

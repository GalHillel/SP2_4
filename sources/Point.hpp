#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
#include <string>

using namespace std;

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
            return sqrt(dx * dx + dy * dy);
        }

        string toString() const
        {
            return "(" + to_string(x) + ", " + to_string(y) + ")";
        }

        Point moveTowards(Point pos, Point dest, int distance) { return pos; }
    };

}

#endif

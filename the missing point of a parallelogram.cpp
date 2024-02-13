#include <bits/stdc++.h>
using namespace std;
struct Point {
    float x, y;
    Point()
    {
        x = y = 0;
    }
    Point(float a, float b)
    {
        x = a, y = b;
    }
};
pair<Point, Point> findPoints(Point source,
                              float m, float l)
{
    Point a, b;
    if (m == 0) {
        a.x = source.x + l;
        a.y = source.y;

        b.x = source.x - l;
        b.y = source.y;
    }
    else if (m == std::numeric_limits<float>::max()) {
        a.x = source.x;
        a.y = source.y + l;

        b.x = source.x;
        b.y = source.y - l;
    }
    else {
        float dx = (l / sqrt(1 + (m * m)));
        float dy = m * dx;
        a.x = source.x + dx, a.y = source.y + dy;
        b.x = source.x - dx, b.y = source.y - dy;
    }

    return pair<Point, Point>(a, b);
}
float findSlope(Point p, Point q)
{
    if (p.y == q.y)
        return 0;
    if (p.x == q.x)
        return std::numeric_limits<float>::max();
    return (q.y - p.y) / (q.x - p.x);
}
float findDistance(Point p, Point q)
{
    return sqrt(pow((q.x - p.x), 2) + pow((q.y - p.y), 2));
}
void findMissingPoint(Point a, Point b, Point c)
{
    pair<Point, Point> d = findPoints(a, findSlope(b, c));
    if (findDistance(d.first, c) == findDistance(a, b))
        cout << d.first.x << ", " << d.first.y << endl;
    else
        cout << d.second.x << ", " << d.second.y << endl;
}
int main()
{
    findMissingPoint(Point(1, 0), Point(1, 1), Point(0, 1));
    findMissingPoint(Point(5, 0), Point(1, 1), Point(2, 5));
    return 0;
}

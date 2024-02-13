#include<bits/stdc++.h>
using namespace std;
float areaTrapezium(float a,float b,float h)
{
    return (1.0/2*(a+b)*h);
}
float perimeterTrapezium(float a,float b,float c,float d)
{
    return (a+b+c+d);
}
int main()
{
    float a = 5, b = 15, c = 11, d = 4, h = 20;
    cout << "Area of Trapezium = " <<
                areaTrapezium(a, b, h) << endl;
    cout << "Perimeter of Trapezium = " <<
                perimeterTrapezium(a, b, c, d);
    return 0;
}

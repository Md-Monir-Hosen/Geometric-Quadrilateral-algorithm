#include<bits/stdc++.h>
using namespace std;
double maxArea(double a,double b,double c,double d)
{
    double semiperimeter=(a+b+c+d)/2;
    return sqrt((semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c)*(semiperimeter-d));
}
int main()
{
     double a = 1, b = 2, c= 1, d = 2;
   cout <<maxArea(a, b, c, d);
    return 0;
}

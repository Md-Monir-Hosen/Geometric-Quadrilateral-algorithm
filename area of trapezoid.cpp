#include<bits/stdc++.h>
using namespace std;
double Area(int a,int b,int h)
{
    return ((a+b)/2)*h;
}
int main()
{
    int base1 = 8, base2 = 10,
                height = 6;
    double area = Area(base1, base2,
                            height);
    cout << "Area is: " << area;
    return 0;
}

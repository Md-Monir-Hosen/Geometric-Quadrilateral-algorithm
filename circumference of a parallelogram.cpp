#include<bits/stdc++.h>
using namespace std;
float circumferenceparallelogram(float a,float b)
{
    return ((2*a)+(2*b));
}
int main()
{
     float a = 10, b = 8;
    cout<<"Circumference of a given Parallelogram is : "
           <<circumferenceparallelogram(a, b);
    return 0;
}

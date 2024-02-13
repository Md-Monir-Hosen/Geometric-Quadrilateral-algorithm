#include<bits/stdc++.h>
using namespace std;
int main()
{
      int ax = 5, ay = 0;
   int bx = 1, by = 1;
   int cx = 2, cy = 5;
    cout << ax + bx - cx << ", "
         << ay + by - cy <<endl;
    cout << ax + cx - bx << ", "
         << ay + cy - by <<endl;
    cout << cx + bx - ax << ", "
         << cy + by - ay <<endl;
    return 0;
}


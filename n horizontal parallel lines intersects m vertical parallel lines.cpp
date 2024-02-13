#include<bits/stdc++.h>
#define Max 10
using namespace std;
int binomialCoeff(int C[][Max],int n,int k)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,k);j++)
        {
            if(j==0 || j==i)
            {
                C[i][j]=1;
            }
            else
            {
                C[i][j]=C[i-1][j-1]+C[i-1][j];
            }
        }
    }
}
int countParallelogram(int n,int m)
{
    int C[Max][Max]={0};
    binomialCoeff(C,max(n,m),2);
    return C[n][2]*C[m][2];
}
int main()
{
    int n = 5, m = 5;
    cout << countParallelogram(n, m) << endl;
    return 0;
}

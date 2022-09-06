#include<iostream>
using namespace std;
int main()
{
    float a[]= { 10 , 1081 , 95.7 , 02 , 189 , 20 , 19754 , 0298.835 , 738 , 999 };
    float max=a[0] ;
    int n = sizeof(a) / sizeof(a[0]);
    for(int i=1; i<=n; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<"Max : "<<max;
    return 0;
}
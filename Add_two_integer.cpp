#include<iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        int s=num1+num2;
        return s;
    }
};

int main()
{
    Solution s;
    int sum1=s.sum(10,20);
    cout<<"Sum is : "<<sum1;
    return 0;
}


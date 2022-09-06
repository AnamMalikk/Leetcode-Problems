#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=0;
        int sum;
        for(int i=0 ; i<accounts.size() ; i++)
        {
            sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum += accounts[i][j];
            }
            maxSum = max(sum,maxSum);
        }
        return maxSum;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> accounts= { { 111, 4, 5, 8, 19} ,
                                    { 25, 28, 1, 0, 23} ,
                                    { 2, 45, 10, 98, 2} ,
                                    {100, 13, 78, 23, 5}
                                  };
    int maxSum = s.maximumWealth(accounts);
    cout<<"Customer with Richest Wealth is : "<<maxSum;
    return 0;
}
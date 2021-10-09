#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int maxProfit(vector<int>& prices) {
        int ans=0,profit=0;
        int valley,peak;
        for(int i=0;i<prices.size();i++)
        {
            while(i<prices.size()-1 && prices[i]>=prices[i+1])i++;
            valley = prices[i];
            while(i<prices.size()-1 && prices[i]<=prices[i+1])i++;
            peak = prices[i];
            profit += peak-valley;
        }
        return profit;
    }
};
int main() {
        int n,i,j,ans;
        cout<<"No of elements";
        cin>>n;
        vector<int>prices;
        cout<<"Enter numbers";
        for(i=0;i<n;i++)
        {
            cin>>j;
            prices.push_back(j);
        }
        Solution obj1;
        ans=obj1.maxProfit(prices);
        //ans=maxProfit(prices);
        cout<<ans;

        return 0;
}

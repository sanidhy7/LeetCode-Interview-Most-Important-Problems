#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    //vextor<int>prices;
    int maxProfit(vector<int>& prices) {

        int profit=0;
        int minvalue=INT_MAX;

        for(int i=0;i<prices.size();i++)
        {
            minvalue=min(minvalue,prices[i]);
            profit=max(profit,prices[i]-minvalue);
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

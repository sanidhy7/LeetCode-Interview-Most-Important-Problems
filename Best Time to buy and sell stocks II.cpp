#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto n = prices.size();
        if (n == 0) {
            return 0;
        }
        int f = -prices[0], g = 0;
        for (int i = 1; i < n; ++i) {
            int nextf, nextg;
            nextf = max(f, g - prices[i]);
            nextg = max(g, f + prices[i]);
            f = nextf;
            g = nextg;
        }
        return g;
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

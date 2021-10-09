#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int trap(vector<int>& height) {
        int n = height.size(), ans = 0;
        if(n == 0) return ans;

        int lo = 0, hi = n - 1, lft_mx = -1, rgt_mx = -1;

        while(lo < hi) {
            lft_mx = max(lft_mx, height[lo]), rgt_mx = max(rgt_mx, height[hi]);
            ans += min(lft_mx, rgt_mx) - (height[lo] < height[hi] ? height[lo++] : height[hi--]);
        }

        return ans;
    }
};
int main() {
        int n,i,j,ans;
        cout<<"No of elements";
        cin>>n;
        vector<int>water;
        cout<<"Enter numbers";
        for(i=0;i<n;i++)
        {
            cin>>j;
            water.push_back(j);
        }
        Solution obj1;
        ans=obj1.trap(water);
        cout<<ans;

        return 0;
}

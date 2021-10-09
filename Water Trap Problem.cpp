#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int trap(vector<int>& height)
{
	int ret=0;
	for(int i=0;i<height.size();++i)
	{
		int elevation=0;
		for(int after=i+1;after<height.size();++after)
			if(height[after]>elevation)
			{
				ret+=(after-i-1)*(min(height[i],height[after])-elevation);
				elevation=min(height[i],height[after]);
			}
	}
	return ret;
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

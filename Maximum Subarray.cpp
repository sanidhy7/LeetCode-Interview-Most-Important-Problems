#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int max;
public int maxSubArray(int[] nums) {
	if (nums.length == 0) {
		return 0;
	}
	max = nums[0];
	maxSum(nums, 0);
	return max;
}
public int maxSum(int[] nums, int i) {
	if (i == nums.length) {
		return 0;
	}
	int res = Math.max(nums[i], nums[i] + maxSum(nums, i + 1));
	max = Math.max(max, res);
	return res;
}
};
int main() {
        int n,i,j,ans;
        cout<<"No of elements";
        cin>>n;
        int nums[n];
        cout<<"Enter numbers";
        for(i=0;i<n;i++)
        {
            cin>>j;
            nums[i]=j;
        }
        Solution obj1;
        ans=obj1.maxSubArray(nums);
        cout<<ans;

        return 0;
}

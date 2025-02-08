#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int j =0;
        vector <int> num2;
        for(int i = k+1; i< n; i++)
        {
            num2.push_back(nums[i]);
        }
        // for (auto z: num2)
        // {
        //     cout << z << " ";
        // }
        // for(int i = k; i< n; i++)
        // {
        //     nums[i] = nums[j];
        //     j++;
        // }
        for (int i = 0; i <= k; i++)
        {
            nums[n-i-1] = nums[n-k-i-1] ;
        }
        nums.pop_back
        
        for(int i = 0; i< k; i++)
        {
            nums[i] = num2[i];

        }
        for (auto z: nums)
        {
            cout << z << " ";
        }
}

int main(int argc, char const *argv[])
{
    // vector <int> nums = {1,2,3,4,5,6,7};
    vector <int> nums = {-1,-100,3,99};
    int k = 2;
    rotate(nums,k);
    return 0;
}

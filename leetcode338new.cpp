#include <bits/stdc++.h>
using namespace std;





vector<int> countBits(int n) {
        
    }


int decimaltoBinary(int num)
{
    int sum=0;
    if (num == 0)
    {
        sum = 0;
    }
    else
    {
        int temp = num;
        int digit;
        for (int i = 0; temp > 0; i++)
        {
            digit = temp%2;
            sum += digit;
            temp/=2;
            
        }
    }
    return sum;
    
}


int main(int argc, char const *argv[])
{
    
    
    // cout <<"The sum is  " << decimaltoBinary(15) <<"  ";
    // cout << endl;
    int num;
    cin>>num;
    vector <int> nums;
    // for (int i = 0; i <= num; i++)
    // {
    //     cout <<"The sum is  " << decimaltoBinary(i) <<"  ";
    //     cout << endl;
        
    // }
    for (int i = 0; i <= num; i++)
    {
        nums.push_back(decimaltoBinary(i));
    }
    for (auto i : nums)
    {
        cout << i<< " ";
    }
    
    






    return 0;
}




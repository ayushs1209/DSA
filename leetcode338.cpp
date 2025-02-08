#include <bits/stdc++.h>

using namespace std;


void printDecimalToBinary2(int num)
    {
        vector <int> bin;
        int temp = num;
        int index =0;
        int sum =0;
        if(num ==0)
        {
            sum =0;
        }
        else
        {
            int temp = num;

            while (temp>0)
            {
                bin.push_back(temp%2);
                temp = temp/2;
                index++;
            }
            for (int i = bin.size(); i>=0;i--)
            {
                sum += bin[i];
            }
        }
        // return sum;
        cout << sum << " ";
        cout << endl;
    }
    vector<int> countBits(int n) {
        
        vector <int> sum;
        for (int i =0; i<= n; i++)
        {
            // sum [i] = printDecimalToBinary2(n);
            printDecimalToBinary2(n);
        }

        return sum;
    }
    int main()
    {

        vector <int> jj;

        jj = countBits(4);
        for (auto i : jj)
        {
            cout << i << " ";
        }
        



        return 0;
    }
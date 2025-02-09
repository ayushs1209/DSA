
// int main() {
//     // int a = 0b11111111111111111111111111111011; // Binary representation
//     // std::cout << a << std::endl; // Output: -5 (interpreted as signed 32-bit)
//     // return 0;
    
// }
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>         // pow, sqrt
#include <string>       // startswith
#include <string_view> // startswith
#include <limits.h> // for int_max int_min
#include <iomanip> // for setprecision
#define CGIIN 76
#define pi 3.14159265
using namespace std;


bool numberIsPrime(int num)
    {
        int isPrime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num%i ==0)
            {
                isPrime = 0;
                break;


            }
        }
        if (isPrime ==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

int sumOfThreeNumbers(int a, int b, int c)
    {
        return a+b+c;
    }
int maxOfThreeNumbers(int a, int b, int c)
    {
        int max=0;
        if (a>b&&a>c)
        {
            max=a;
        }
        else if (b>a&&b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
        return max;
    };
void countingNumber(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<< i+1<<" ";
        }
        

    }
int primeNumber(int n)
    {
        int prime =1,divisibledBy=0;
        for (int i = 2; i < n; i++)
        {
            if (n%i ==0)
            {
                prime =0;
                divisibledBy = i;
                break;

            }
            


        }
        if (prime == 1)
        {
            return 1;
        }
        return divisibledBy;
    }

int checkEvenOdd(int num)
    {
        if (num%2==0)
        return true;
        return false;
    }
int sumOfNNumbers(int num)
    {
        // int sum =0;
        // for (int i = 1; i <= num; i++)
        // {
        //     sum+=i;
        // }
        // return sum;

        int sum = (num*(num+1))/2;
        return sum;
        
    }

int sumOfNEvenNumbers(int num)
    {
        int sum =0;
        for (int i = 0; i <= num; i++)
        {
            if (i%2==0)
            {
                sum+=i;
            }
            
        }
        return sum;
        

    }
float areaOfCircle(int num)
    {

        return M_PI * pow(num,2);

    }
long long int factorial( int num)
    {
        long long int factorial =1;
        if( num==0)
        cout <<"The Factorial of 0 is 1  " << endl;

        for (int i = 1; i <= num; i++)
        {
            factorial*= i;
        }
        return factorial;

        
    }

void printPrimeNumbersInARange( int num )
    {
        int isPrime =1;
        for (int i = 1; i <= num; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if (i%j==0)
                {
                    isPrime = 0;
                    break;
                }
                isPrime = 1;
                
            }
            if (isPrime!=0)
            {
                cout <<i <<" ";
            }
            isPrime = 1;
        }
    }
    void printDigits( int num)
    {
        int digit;
        // while (num>0)
        // {
        //     digit = num%10;
        //     cout <<digit<<"   ";
        //     num/= 10;

        // }
        for (int i = 0; num>0; i++)
        {
            digit = num%10;
            cout <<digit<< "  ";
            num/=10;
        }
        
        
        
    }

    void findMaximumNumber(int arr[], int size)
    {
        
        cout << endl;
        int max = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (arr[i]>max)
            {
                max = arr[i];

            }
            
        }
        cout <<endl<< "The maximum number of the array ";
        for (int i = 0; i < size; i++)
        {
            cout <<arr[i]<< "  ";
        }
        cout <<"is  " << max<< endl;
    }
    void arrayReversal(int arr[], int rev[], int num)
    {
        for (int i = 0; i < num; i++)
        {
            rev[num-i-1] = arr[i];

        }
        cout <<"Done Reversing " << endl;
        cout <<"Now Printing the reversed Array " << endl<< "The reversed Array from Proper Method"<<endl;
        for (int i = 0; i < num; i++)
        {
            cout << rev[i] << "  " ;
        }
        
        
    }
    void shiftByKBits( int arr[], int n )
    {
    int num;
    num = arr[n-1];

    for (int i = n-1; i > 0 ; i--)
    {
        arr[i] = arr[i-1];
        
    }
    arr[0] = num;

    }

    void printDecimalToBinary(int num)
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
                sum+=bin[i];
            }
        }
        cout << sum;
        cout <<" ";
    }

    int printDecimalToBinary2(int num)
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
            return sum;
        }
    vector<int> countBits(int n) {
        
        vector <int> sum;
        for (int i =0; i<= n; i++)
        {
            sum [i] = printDecimalToBinary2(n);
        }

        return sum;
    }
    
    int returnNumber(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        
        default:
            return 0;
            break;
        }
    }


    string convertdecimaltobase(int num ,int n)
    {
        int temp = num;
        int digit = 0;
        int ans = 0,reversed = 0;
        int i = 0;
        while(temp!=0)
        {
            digit = temp%n;
            // ans = ans*10 + digit;
            ans = digit*pow(10,i) + ans;
            reversed = reversed*10+digit;
            temp/=n;
            i++;

        }
        // bool decision = ans == reversed ? true : false;
        return (ans == reversed ? "true" : "false" ) ;
        // return ans == num;

    }

    int binarySearch(vector <int> nums, int target)
    {
        int n = nums.size();
        int low = 0; int high  = n-1;
        int mid  = (low+high)/2;

        while (low <= high)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid+1;
            }
            else if (nums[mid] > target )
            {
                high = mid-1;
            }
            mid = (low+high)/2;
        }
        return -1;
        
    }


    int findFirstOccurence ( vector <int> nums , int target)
    {
        int n =  nums.size();
        int low =0; int high = n - 1;
        int mid = (low+high) / 2;
        int firstIndex = -1;

        while (low <= high)
        {
            if (nums[mid] == target)
            {
                firstIndex = mid;
                cout << firstIndex << endl;
                high = mid - 1;

            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;  
            }
            mid = (low+high)/2;
            
        }
        
        return firstIndex;

    }
    int findLastOccurence ( vector <int> nums , int target)
    {
        int n =  nums.size();
        int low =0; int high = n - 1;
        int mid = (low+high) / 2;
        int lastIndex = -1;

        while (low <= high)
        {
            if (nums[mid] == target)
            {
                lastIndex = mid;
                cout << lastIndex << endl;
                // high = mid - 1;
                low = mid + 1;

            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;  
            }
            
            mid = (low+high)/2;
            
        }
        
        return lastIndex;

    }

    int pivotInteger(int n)
    {
        int rightsum = (n*(n+1))/2;
        int leftsum = 0;
        for (int i = 1; i <= n; i++)
        {
            rightsum -= i;
            if (leftsum == rightsum)
            {
                return i;
            }
            else
            {
                leftsum += i;
            }
        }
        return -1;
        
    }
    int binarySearchWithIndex(vector <int> nums, int start, int end, int target)
    {
        int found = -1;
        int s = start;
        int e = end;
        int mid = s+(e-s)/2;
        while (s<=e)
        {
            if(target == nums[mid])
            {
                found = mid;
                break;
            }
            if(target > nums[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }

            mid = s+(e-s)/2;

        }
        return found;
        
    }

    int pivotIndex(vector <int> nums)
    {
        int n = nums.size()-1;
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;

        while (s <= e)
        {
            if (s==e)
            return s;
            else if (nums[mid] > nums[mid+1])
            return mid;
            else if(nums[mid-1] > nums[mid])
            return mid-1;
            


        
        }
        return 1;
        
    }

    int binerySearch(vector <int> nums,int start, int end, int target)
    {
        // int start =0, end = nums.size()-1;
        int mid = start + (end-mid)/2;
        int found = -1;

        while (start <= end)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
            mid = start + (end-start)/2;
            
        }
        return found;
    }

    int pivotindex(vector<int> nums)
    {
        int n = nums.size()-1;
        int start = 0, end = n;
        int mid = start + (end-start)/2;

        int index = -1;

        // nums ={4,5,6,7,0,1,2};
        while (start <= end)
        {
            if(start == end)
            {
                index = start;
                break;
            }
            else if (nums[mid] < nums[mid-1])
            {
                index = mid-1;
                break;
            }
            else if (nums[mid] > nums[mid+1])
            {
                index = mid;
                break;
            }
            else if (nums[mid] < nums[start])
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            
            mid = start+(end-start)/2;
        }
        return index;
    }
    int binarysurch(vector <int> nums, int start, int end, int target)
    {
        int found = -1;
        int mid = start + (end-start)/2;
        // nums ={4,5,6,7,0,1,2};
        while (start <= end)
        {
            if(nums[mid] == target)
            {
                found = mid;
                break;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }

        return found;
    }
    void reversed(vector <int> &nums, int left, int right)
    {
        while (left<right)
        {
            // swap(nums[left], nums[right]);
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }

    int digitSquare(int num)
    {
        int temp = num;
        int sum = 0;

        while(temp != 0)
        {
            sum += (temp%10)*(temp%10);
            temp /= 10;
        }
        return sum;
    }


int main() {
    // Binary representation
    // int signedNumber = 0b11111111111111111111111111111011; // Signed 32-bit integer
    // unsigned int unsignedNumber = 0b11111111111111111111111111111011; // Unsigned 32-bit integer

    // // Print the signed and unsigned values
    // std::cout << "Signed interpretation: " << signedNumber << std::endl;   // Outputs -5
    // std::cout << "Unsigned interpretation: " << unsignedNumber << std::endl; // Outputs 4294967291



    // string a;
    // cout <<"Enter the number you want to print " << endl;
    // cin >> a;
    // int b;
    // b = stoi(a,2);
    // cout << b;

    // string name;
    // cout <<"Enter your name " << endl;
    // getline(cin,name);
    // cout <<"Hi, " << name <<" How are you " <<endl;
    // cout <<"I hope you have a wonderful day " << endl;

    // signed char c = 118;
    // cout <<c << endl;f
    // //Decimal to Binary Number conversion
    // int num, binaryNumber=0,i=0;
    // cout <<"Enter the number you want to convert into binary " << endl;
    // cin>>num;
    // while (num>0){
    //     binaryNumber = (num%2)*pow(10,i) + binaryNumber;
    //     num /= 2;
    //     i++;
    // }
    // cout <<"The Binary Number for the above integer is "<<binaryNumber << endl;

    // cout << (5&1) << endl;

    // // Binary to Decimal


    // int  binaryNum, num = 0,i=0;
    // cout <<"Enter the Binary Number which you want to convert into Decimal Number " << endl;
    // cin>> binaryNum;
    // while (binaryNum>0)
    // {
    //     num = (binaryNum%10) *pow(2,i) + num;
    //     binaryNum = binaryNum/10;
    //     i+= 1;

    // }
    // cout <<"Decimal Number =  " << num << endl;


    // int num;
    // cout <<"Enter the number " << endl;
    // cin>>num;
    // if (num ==0)
    // {
    //     cout <<"The Number is Zero " << endl;
    // }
    // else
    // {
    //     if (num>0)
    //     {
    //         cout <<"The number is positive " << endl;       

    //     }
    //     else
    //         cout <<"The number is negative " << endl;
        
    // }


    // int num;
    // cout <<"Enter the number you want to check " << endl;
    // cin>>num;

    // if (num%2 ==0)
    //     cout <<"The number " << num <<  " is even " << endl;
    // else
    // {
    //     cout <<"The number " << num << " is odd " << endl;

    // }





    // //// Prime Number check 
    // int num;
    // int isPrime = 1;
    // int divisibleBy;
    // cout <<"Enter the number you want to check if it is Prime or not " << endl;
    // cin>>num;
    // if (num == 1)
    // {
    //     cout <<"1 is a Prime Number " << endl;

    // }
    // else
    // {
    //     for (int i = 2; i < num; i++)
    //     {
    //         if (num%i == 0)
    //         {
    //             divisibleBy = i;
    //             isPrime = 0;
    //             break;
    //         }
    //     }
    //     if (isPrime == 1)
    //         cout <<"The number " << num<< " is Prime" << endl;
    //     else
    //     {
    //         cout <<"The number " << num<< " is not Prime and is divisible by "<< divisibleBy<< endl;

    //     }
        
    // }
    
    

    
    // //// Factorial of a number

    // int num;
    // cout <<"Enter the number you want to take the factorial of " << endl;
    // cin>>num;
    // long long int fact=1;

    // if (num ==0)
    // {
    //     cout <<"The factorial of 0 is 1 by the rules of Mathematics " << endl;
        
    // }
    // else if (num ==1)
    // {
    //     cout <<"The factorial of 1 " << endl;
        
    // }
    // else
    // {
    //     for (int i = 1; i <= num; i++)
    //     {
    //         fact*= i;
    //     }
    //     cout <<"The Factorial of the number "<< num <<" is "<< fact << endl;
        
    // }

    ///////// Star Pattern simple right angled triangle

    // int num;
    // cout <<"Enter the lines of Stars you want to print ";
    // cin>> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout <<" * ";
    //     }
    //     cout << endl;
        
    // }
    
    ///////Multiplication Table 
    // int num;

    // int maxTableValue;
    // cout <<"Enter the number for which you want to print the multiplication table of " << endl;
    // cin>>num;
    // cout <<"Upto  " << endl;
    // cin>>maxTableValue;
    // for (int i = 1; i <= maxTableValue; i++)
    // {
    //     cout << num <<" X  "<< i <<" = " << num*i << endl;
    // }
    

    ////// Even number print in a following series

    // int startNum,endNum;
    // cout <<"Enter the number from which you wanna print Even number upto " << endl; 
    // cin>> startNum;
    // cout <<"Enter the number till which you wanna print Even number upto " << endl; 
    // cin>> endNum;
    // for (int i = startNum; i <= endNum; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
        
    // }

    // //////// Pattern print in a square format number of stars in a square format


    // int num;
    // cout <<"Enter the size of the square " << endl;
    // cin>> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int i = 1; i <= num; i++)
    //     {
    //         cout <<" * ";
            
    //     }
    //     cout << endl;
        
    // }


    // //////// Pattern print in a rectangle format number of stars in a square format



    // int len,bre;
    // cout <<"Enter the length of the rectangle " << endl;
    // cin>>len;
    // cout <<"Enter the breadth of the rectangle " << endl;
    // cin>>bre;

    // for (int i = 0; i < len; i++)
    // {
    //     for (int i = 0; i < bre; i++)
    //     {
    //         cout <<" * ";
    //     }

    //     cout << endl;
        
    // }
    
    ////// Print Hollow Rectangle

    // * * * * * * 
    // *         *
    // *         *
    // *         *
    // * * * * * * 

    // int len,bre;
    // cout <<"Enter the length for the Hollow rectangle " << endl;
    // cin>>len;
    // cout <<"Enter the breadth for the Hollow rectangle " << endl;
    // cin>>bre;
    // for (int i = 0; i < len; i++)
    // {
    //     if (i == 0 || i ==  len-1)
    //     {
    //         for (int j = 0; j < bre; j++)
    //         {
    //             cout <<" * ";
    //         }
    //         cout << endl;
            
    //     }
    //     else
    //     {
    //         cout <<" * ";
    //         for (int j = 1; j < bre-1; j++)
    //         {
    //             cout <<"   ";

    //         }
            
    //         cout <<" * ";
    //         cout << endl;



    //     }
    // }
     


///////////////Pyramid pattern
        // n = 5                    
        //     *
        //    ***
        //   *****
        //  *******
        // *********


    // int num;
    // cout <<"Enter the number of rows of the Pyramid " << endl;
    // cin>> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 0; j < (num - i); j++)
    //     {
    //         cout <<"   ";

    //     }
    //     for (int j = 0; j < 2*i -1 ; j++)
    //     {
    //         cout <<" * ";

    //     }
    //     for (int j = 0; j < num - i; j++)
    //     {
    //         cout <<"   ";

    //     }
    //     cout << endl;
        
        
    // }
    
////////// Hollow Triangle
        //     *
        //    *  *
        //   *    

    ///// Number Pyramid
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // int num;
    // cout <<"Enter the number of the rows of the number Pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << j+1 << " ";
    //     }
    //     cout << endl;
        
    // }

    // ///// Inverted Number Pyramid
    // // 1 2 3 4 5 
    // // 1 2 3 4
    // // 1 2 3
    // // 1 2 
    // // 1 
    
    // int num;
    // cout <<"Enter the number of the rows of the Inverted Pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num-i ;j++)
    //     {
    //         cout << j+1;
            
    //     }
    //     cout << endl;
        
    // }



    // //////// Pyramid Pattern
    // int num;
    // cout <<"Enter the number of the rows of the Pyramid Pattern " << endl;
    // cin>>num;
    // for (int  i = 0; i < num; i++)
    // {
        
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout << endl;
        
    // }



    // int num;
    // cout <<"Enter the number of the rows of the pyramid " << endl;
    // cin>>num;

    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<"   ";
            
    //     }
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         cout <<" * ";
            
    //     }
    //     cout << endl;
        
        
        
    // }



    // // inverted Pyramid

    // int num;
    // cout <<"Enter the number of the rows of the Pyramid " << endl;
    // cin>> num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
            
    //     }
    //     for (int j = 0; j < num -i; j++)
    //     {
    //         cout <<"* ";
            
    //     }
    //     cout << endl;
        
    // }

    // int n, num;
    // cout <<"Enter the number of the rows of the diamond pattern " << endl;
    // cin>>n;
    // num = n/2;
    // for (int  i = 0; i < num; i++)
    // {
        
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout << endl;
        
    // }


    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
            
    //     }
    //     for (int j = 0; j < num -i; j++)
    //     {
    //         cout <<"* ";
            
    //     }
    //     cout << endl;
        
    // }
    
    // //////// Hollow Pyramid

    // int num;
    // cout <<"Enter the number of the rows for the Hollow Pyramid " << endl;
    // cin>> num;

    // for (int row = 0; row < num; row++)
    // {
    //     //space
    //     for (int col = 0; col < 2*num -1; col++)
    //     {
    //         if (col+row == num)
    //         {
    //             cout <<" * ";
    //         }
    //         else
    //         {
    //             cout <<"  ";
    //         }
            
            
    //     }
    //     cout << endl;
        
        
    // }
    


    //////// full Pyramid   
    // int num;
    // cout <<"Enter the number of the rows of the pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
            
    //     }

    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         cout <<"*";
    //     }
        
        


    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
            
    //     }
    //     cout << endl;
        
    // }


    // ???????/////// Inverted Full Pyramid

    // int num;
    // cout <<"Enter the number of the rows of the inverted pyramid " << endl;
    // cin>>num;

    // for (int i = 0; i < num; i++)
    // {
    //     //before space
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     //stars
    //     for (int j = 0; j < num-i; j++)
    //     {
    //         cout <<"* ";

    //     }
    //     //after space
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     cout << endl;
        
    // }


    ////?????/////Reversed Full Pyramid
    // int num;
    // cout <<"Enter the number of the rows of the reversed full pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for (int j = 0; j <2*(num-i)-1; j++)
    //     {
    //         cout <<"*";
    //     }
        
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     cout << endl;
        
    // }
    

    // full full pyramid

    // int num;
    // cout <<"Enter the number of the rows of the Full full Pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
        
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
            
    //     }
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         cout <<"*";
    //     }
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
    //     }
    //     cout << endl;
        
    // }



    // ????????/////// Hollow Rectangle

    // int len,bre;
    // cout <<"Enter the length of the hollow square " << endl;
    // cin>>len;
    // cout <<"Enter the breadth of the hollow square " << endl;
    // cin>>bre;
    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = 0; j < bre; j++)
    //     {
    //         if (i ==0||i ==len-1||j ==0||j ==bre-1)
    //         {
    //             cout <<" * ";
    //         }
    //         else
    //         {
    //             cout <<"   ";
    //         }
            
            
    //     }
    //     cout << endl;
    //     }
        
    
    
    
////////////////Hollow Pyramid

    // int num;
    // cout <<"Enter the number of the rows you want to print in the Hollow Pyramid " << endl;
    // cin>>num;

    // for (int i = 0; i < num; i++)
    // {
    //     if (i ==0 || i == num-1)
    //     {
    //         for (int j = 0; j < num-i-1 &&i!=num-1; j++)
    //         {
    //             cout <<"   ";
    //         }
            
    //         for (int j = 0; j < 2*i-1||i!=0; j++)
    //         {
    //             cout <<" * ";
    //         }
            
    //     }
    //     else
    //     {
    //         for (int j = 0; j ; j++)
    //         {
    //             /* code */
    //         }
            
            
    //     }
    //     cout << endl;
        
        
        
    // }


    // ?///// tinga punga pyramid
    // ***** *****
    // ****   ****
    // ***     ***
    // **       **
    // *         *
    // *         *
    // **       **
    // ***     ***
    // ****   ****
    // ***** *****

    // int n,num;
    // cout <<"Enter the number of rows of the pyramid " << endl;
    // cin>>n;
    // num = n/2;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num-i; j++)
    //     {
    //         cout <<"*";   
    //     }
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for (int j = 0; j < num-i; j++)
    //     {
    //         cout <<"*";   
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout <<"*";
    //     }
    //     for (int j = 0; j < 2*(num-i)-1; j++)
    //     {
    //         cout <<" ";
    //     }
        

    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout <<"*";
    //     }
    //     cout << endl;
        
        
        
    // }


    /////////////Hollow Pyramid    
    // int n;
    // cout <<"Enter the number of the rows of the pyramid " << endl;
    // cin>>n;


    // for(int i =0;i<n;i++)
    // {
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<j+1<<" ";
    //     }
    //     for(int j =0;j<2*(n-i)-2;j++)
    //     {
    //         cout<<"  ";
    //     }
        
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<(i-j)+1<<" ";
    //     }
    //     cout<<endl;

    // }


    // int num;
    // cout <<"Enter the number of rows " << endl;
    // cin>> num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j <= 2*i; j++)
    //     {
    //         if (j%2==0)
    //         {
    //             cout << i+1;
    //         }
    //         else
    //         {
    //             cout <<" * ";
    //         }
            
            
    //     }
    //     cout << endl;
        
    // }


    //////// Hollow Pyramid
//                       * 
//                      * *
//                     *   *
//                    *     *
//                   *       *
//                  *         *
//                 *           *
//                *             *
//               *               *
//              *                 *
//             *                   *
//            *                     *
//           *                       *
//          *                         *
//         *                           *
//        *                             *
//       *                               *
//      *                                 *
//     *                                   *
//    *                                     *
//   *                                       *
//  *                                         *
// * * * * * * * * * * * * * * * * * * * * * * *

    // int num;
    // cout <<"Enter the number of the rows of the Hollow Pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
    //     }
    //     if (i ==0||i==num-1)
    //     {
    //         for (int j = 0; j < i+1; j++)
    //         {
    //             cout <<"* ";
    //         }
            
    //     }
    //     else
    //     {
    //         for (int j = 0; j < 2*i+1; j++)
    //         {
    //             if (j ==0||j==2*i)
    //             {
    //                 cout <<"*";
    //             }
    //             else
    //             {
    //                 cout <<" ";
    //             }
    //         }
            
    //     }
    //     cout << endl;
    // }
    // int num;
    // cout <<"Enter the number of rows of the Hollow Pyramid " << endl;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num-i-1; j++)
    //     {
    //         cout <<" ";
    //     }
        
    //     if (i==0||i==num-1)
    //     {
    //         for (int j = 0; j < i+1; j++)
    //         {
    //             cout <<"* ";
    //         }
            
    //     }
    //     else
    //     {
    //         for (int j = 0; j < 2*i+1; j++)
    //         {
    //             if (j==0||j==2*i)
    //             {
    //                 cout <<"*";
    //             }
    //             else
    //             {
    //                 cout <<" ";
    //             }
                
    //         }
            
            
            
    //     }
    //     cout << endl;
        
        
    // }


    // int num;
    // cout <<"Enter the number of the rows of the Hollow Pyramid " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row == num-1)
    //     {
    //         for (int col = 0; col < row+1; col++)
    //         {
    //             cout <<"* ";
    //         }
            
            
    //     }
    //     else
    //     {
    //         for (int col = 0; col < num-row-1; col++)
    //         {
    //             cout <<" ";
    //         }
    //         for (int col = 0; col < 2*row+1; col++)
    //         {
    //             if (col ==0||col==2*row)
    //             {
    //                 cout <<"*";
    //             }
    //             else
    //             {
    //                 cout <<" ";
    //             }
                
                
    //         }
    //     }
        
        
    //     cout << endl;
        
        
    // }



/////////Whatever this is
    // 1
    // 1-2
    // 1--3
    // 1---4
    // 1----5
    // 1 
    // ~~~~
    // 1 2 
    // 1   3 
    // 1     4 
    // 1       5 
    // 1         6 
    // 1 2 3 4 5 6 7
    
    // int num;
    // cout <<"Enter the number of the rows of wahtever that was " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row == num-1||row ==0)
    //     {
    //         for (int col = 0; col < row+1; col++)
    //         {
    //             cout<<col+1<<" ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 0; col < row+1; col++)
    //         {
    //             if (col ==0||col==row)
    //             {
    //                 cout<<col+1<<" ";
    //             }
    //             else
    //             {
    //                 cout <<"  " ;
                    
    //             }
                
                
    //         }
            
    //     }
        
        
    //     cout << endl;
    // }


    //////
    /*
    A
    ABA
    ABCBA
    ABCDCBA
    ABCDEDCBA
    
    
    */
//    int num;
//    cout <<"Enter the number of the rows of the Alphabet Pyramid " << endl;
//    cin>>num;
//    char c = 'A';
//    for (int row = 0; row < num; row++)
//    {
//         for (int col = 0; col < 2*row+1; col++)
//         {
//             if (col >=round((2*row+1)/2))
//             {
//                 cout <<c;
//                 c--;
                
//             }

//             else
//             {
//                 cout << c;
//                 c++;
//             }
            
            
//         }
//         c='A';
//         cout << endl;
        
//    }
   
//    1 2 3 4 5 
//    2     5
//    3   5
//    4 5
//    5

    // int num;
    // cout <<"Enter the number of rows of the triangle " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row ==0||row==num-1)
    //     {
    //         for (int col = 0; col < num-row; col++)
    //         {
    //             cout<<col+row+1<<" ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 0; col < num-row; col++)
    //         {
    //             if (col==0||col==num-row-1)
    //             {
    //                 cout <<row+col+1<<" ";
    //             }
    //             else
    //             {
    //                 cout <<"  ";
                    
    //             }
                
    //         }
            
    //     }
    //     cout << endl;
        
    // }
    


    // Numeric Palindrome Equilateral
    //         1
    //       1 2 1
    //     1 2 3 2 1 
    //   1 2 3 4 3 2 1 
    // 1 2 3 4 5 4 3 2 1
    //                   1 
    //                 1 2 1 
    //               1 2 3 2 1 
    //             1 2 3 4 3 2 1 
    //           1 2 3 4 5 4 3 2 1 
    //        1 2 3 4 5 6 5 4 3 2 1 
    //      1 2 3 4 5 6 7 6 5 4 3 2 1






    // int num;
    // cout <<"Enter the number of rows of the Numeric Palindrome Equilateral " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < num-row-1; col++)
    //     {
    //         cout <<"  ";
    //     }
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout << col+1<<" ";
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout <<col<<" ";
    //     }
        
    //     cout << endl;
    // }
                  
// // Display Area of Circle
//     int radius;
//     cout <<"Enter the radius of the circle " << endl;
//     cin>>radius;
//     float area;
//     area = M_PI*pow(radius,2);

//     cout <<"The area of the circle with the radius "<<radius<< " is " << area << endl;



    // factorial of a number

    // int num;
    // long long int factorial =1; 
    // cout <<"Enter the number of which you want to calculate the Factorial of " << endl; 
    // cin>>num;
    // if (num==0)
    // {
    //     cout <<"The Factorial of Zero is 1 by the rules " << endl;

    // }
    // else
    // {
    //     for (int i = 1; i <= num; i++)
    //     {
    //         factorial*=i;

    //     }
        
    // }
    // cout <<"The Factorial of "<< num<<" is "<< factorial << endl;

    // /// ALl primes from 1 toN

    
    // int  start,end;
    // cout <<"Enter the starting and ending number seperated by a space " << endl;
    // cin>>start>>end;
    // int isPrime=1,num =0;
    // cout <<"The List of Prime Numbers between "<<start<<" and "<< end<< " is " <<endl;
    // for (int i = start; i <= end; i++)
    // {
    //     if (numberIsPrime(i) == true)
    //     {
    //         cout <<i<<" ";
    //     }
        
    // }

    
    // ///// solid square pattern

    // int num;
    // cout <<"Enter the side of the square " << endl;
    // cin>> num;
    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < num; col++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout << endl;
        
    // }
    ///// Hollow  square pattern

    // int num;
    // cout <<"Enter the side of the square " << endl;
    // cin>> num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row ==0|| row ==num-1)
    //     {
    //         for (int col = 0; col < num; col++)
    //         {
    //             cout <<"* ";
    //         }
            
    //     }
    //     else
    //     {
    //         for (int col = 0; col < num; col++)
    //         {
    //             if (col ==0|| col ==num-1)
    //             {
    //                 cout <<"* ";
    //             }
    //             else
    //             {
    //                 cout <<"  ";
    //             }
                
                
    //         }
            
    //     }
    //     cout << endl;
        
        
    // }
    
    
    // /////  Inverted half Pyramid

    // int num;
    // cout <<"Enter the number of rows of the Pyramid " << endl;
    // cin>> num;
    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < num-row; col++)
    //     {
    //         cout <<"* ";
    //     }

    //     cout << endl;
        
    // }


    /////  hollow Inverted half Pyramid

    // int num;
    // cout <<"Enter the number of rows of the Pyramid " << endl;
    // cin>> num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row == 0|| row == num-1)
    //     {
    //         for (int col = 0; col < num-row; col++)
    //         {
    //             cout <<"* ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 0; col < num -row; col++)
    //         {
    //             if (col == 0|| col == num -row-1)
    //             {
    //                 cout <<"* ";
    //             }
    //             else
    //             {
    //                 cout <<"  ";
    //             }
                
                
    //         }
            
    //     }
    //     cout << endl;
        
    // }
    

    // // Hollow Full Pyramid

    // int num;
    // cout <<"Enter the number of rows of the Full Pyramid " << endl;
    // cin>>num;
    
    // for (int rows = 0; rows < num; rows++)
    // {
    //     for (int col = 0; col < num-rows-1; col++)
    //     {
    //         cout <<" ";
    //     }
    //     for (int col = 0; col <rows+1; col++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }

    // // hollow Full Pyramid

    // int num;
    // cout <<"Enter the number of rows of the Full Pyramid " << endl;
    // cin>>num;
    
    // for (int rows = 0; rows < num; rows++)
    // {
    //     for (int col = 0; col < num-rows-1; col++)
    //     {
    //         cout <<" ";
    //     }
    //     if (rows == 0||rows ==num-1)
    //     {
    //         for (int col = 0; col <rows+1; col++)
    //         {
    //             cout <<"* ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 0; col < rows+1; col++)
    //         {
    //             if (col ==0 || col == rows)
    //             {
    //                 cout <<"* " ;
    //             }
    //             else
    //             {
    //                 cout <<"  ";
    //             }
                
                
    //         }
            
    //     }
        
        
    //     cout << endl;
    // }
    
    // //////////Numeric  Half Pyramid
            // 1 
            // 1 2 
            // 1 2 3 
            // 1 2 3 4 
            // 1 2 3 4 5
    // int num;
    // cout <<"Enter the number of rows of the pyramid " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout<< col+1<<" ";
    //     }
    //     cout << endl;
    // }
    
    // //////////Numeric  Hollow Half Pyramid
    // 1 
    // 1 2 
    // 1   3 
    // 1     4 
    // 1 2 3 4 5
    // int num;
    // cout <<"Enter the number of rows of the pyramid " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row ==0|| row==num-1)
    //     {
    //         for (int col = 0; col < row+1; col++)
    //         {
    //             cout << col+1<<" ";
    //         }
    //     }

    //     else
    //     {
    //         for (int col = 0; col < row+1; col++)
    //         {
    //             if (col ==0||col == row)
    //             {
    //                 cout <<col+1<<" ";
    //             }
    //             else
    //             {
    //                 cout <<"  ";
    //             }
                
                
    //         }
            
    //     }
        
        
    //     cout << endl;
    // }
    

    // //////////Numeric  Hollow Inverted Half Pyramid
    // 1 2 3 4 5 
    // 1     4 
    // 1   3 
    // 1 2 
    // 1

    // int num;
    // cout <<"Enter the number of rows " << endl;
    // cin>>num;
    // for (int row = 0; row < num; row++)
    // {
    //     if (row == 0 || row == num-1)
    //     {
    //         for (int col = 0; col < num-row; col++)
    //         {
    //             cout <<col+1<< " ";
    //         }
            
    //     }
    //     else
    //     {
    //         for (int col = 0; col < num-row; col++)
    //         {
    //             if (col==0||col==num-row-1)
    //             {
    //                 cout << col+1<<" ";
    //             }
    //             else
    //             {
    //                 cout <<"  ";
    //             }
                
                
    //         }
            
    //     }


    //     cout << endl;
    // }
    
    
    
    
//     ////// Numeric Palindrome Equilateral Triangle
// //         1 
// //       1 2 1 
// //     1 2 3 2 1 
// //   1 2 3 4 3 2 1 
// // 1 2 3 4 5 4 3 2 1
//     int num;
//     cout <<"Enter the number of rows " << endl;
//     cin>> num;
//     for (int row = 0; row < num; row++)
//     {
//         for (int col = 0; col < num-row-1; col++)
//         { 
//             cout <<"  ";
//         }
//         for (int col = 0; col < row+1; col++)
//         { 
//             cout <<col+1<<" ";
//         }
//         for (int col = 0; col < row; col++)
//         {
//             cout<<row-col<<" ";
//         }
        
//         cout << endl;
//     }


// ///////////// Solid Half Diamond
//     // * 
//     // * * 
//     // * * * 
//     // * * * * 
//     // * * * * * 
//     // * * * * 
//     // * * * 
//     // * * 
//     // * 
//     int num;
//     cout <<"Enter the number of rows " << endl;
//     cin>>num;
//     for (int row = 0; row < num; row++)
//     {
//         for (int col = 0; col < row+1; col++)
//         {
//             cout <<"* ";
//         }
        
//         cout << endl;
//     }
//     for (int row = 0; row < num; row++)
//     {
//         for (int col = 0; col < num -row-1; col++)
//         {
//             cout <<"* ";
//         }
        
//         cout << endl;
//     }



    //////////////Fancy Pattern
    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ****5*5*5*5*5****

    
    
    
    // int num;
    // cout <<"Enter the number of rows " << endl;
    // cin>> num;
    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < 2*num-row-2; col++)
    //     {
    //         cout <<"*";
    //     }
    //     for (int col = 0; col < 2*row+1; col++)
    //     {
    //         if (col%2==0)
    //         {
    //             cout <<row+1;
    //         }
    //         else
    //         {
    //             cout <<"*";
    //         }
    //     }
    //     for (int col = 0; col < 2*num-row-2; col++)
    //     {
    //         cout <<"*";
    //     }
        
    //     cout << endl;
        
    // }
    
    // int num1, num2, num3;
    // cout <<"Enter the three numbers seperated by a space " << endl; 
    // cin>>num1>>num2>>num3;
    // cout <<"The sum of the numbers " << num1 <<" "<<num2<< " " <<num3<<" "<< sumOfThreeNumbers(num1,num2,num3) <<endl;


    // int num1, num2, num3;
    // cout <<"Enter the three Numbers " << endl;
    // cin>>num1>>num2>>num3;
    // cout <<"The maximum of the numbers " <<num1 <<" "<<num2 <<" "<<num3 <<" " <<" is "<<maxOfThreeNumbers(num1,num2,num3)<< endl;

    // int num;
    // cout <<"Enter the number up until you want to print from 1 to " << endl;
    // cin>> num;

    // countingNumber(num);

    // int num;
    // cout <<"Enter the number you want to check if is prime or not " << endl;
    // cin>>num;
    // if (primeNumber(num) == 1)
    // {
    //     cout <<"The number "<< num<< " is Prime"  << endl;
    // }
    // else
    // {
    //     cout <<"The number "<< num<< " is not Prime and is divisible by "<< primeNumber(num)<<" " << endl;
        
    // }

    // int num;
    // cout <<"Enter the number you want to check for even odd " << endl;
    // cin>> num;
    // if(checkEvenOdd(num))
    // {
    //     cout <<"The number "<<num<<" is Even" << endl;
    // }
    // else
    // {
    //     cout <<"The number "<<num<<" is Odd" << endl;
    // }

    // // summ of all num upto 1 to n
    // int num,sum=0;
    // cout <<"Enter the last number " << endl;
    // cin>> num;
    // cout <<"The sum of numbers upto  " << num<<" from 1 is " << sumOfNNumbers(num)<<endl;

    // ???????////////// Sum of even numbers from 1 to n
    // int num;
    // cout <<"Enter the last Number " << endl;
    // cin>> num;

    // cout <<"The sum of the first even Numbers from 1 to "<<num << " is " << sumOfNEvenNumbers(num)<< endl;
    

    // int radius;
    // cout <<"Enter the radius of the circle you want to print " << endl;
    // cin>>radius;

    // cout <<"The Area of the circle with the radius "<< radius<< " is " << areaOfCircle(radius)<< endl;





    // int num;
    // cout <<"Enter the number you wanna calculate the Factorial of  " << endl;
    // cin>> num;

    // cout <<"The Factorial of  "<< num << " is "<< factorial(num) << endl;


    // int num;
    // cout <<"Enter the Last Number " << endl;
    // cin>>num;
    
    // cout << "The list of Prime Numbers from 1 to "<< num << " is " <<endl;
    // printPrimeNumbersInARange(num);

    //////////////// Print digits of a number in reverse order
    // int num;
    // cout <<"Enter the number for which you want to print the digits for " << endl;
    // cin>>num;
    // printDigits(num);

    // //////////////Double up array
    // int num = 10;
    // int arr[num];
    // cout <<"Enter the elements for the array " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << "Element "<< i << " ";
    //     cin>> arr[i];
    // }
    // cout << endl;
    // cout <<"Printing the array before doubling the values of the elements " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << arr[i]<<"  ";
    // }
    // cout << endl;
    // cout <<"Updating Elements " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     arr[i]*=2;
    // }
    // cout <<"Done " << endl;
    // cout <<"Printing the array after doubling the values of the elements " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << arr[i]<<"  ";
    // }
    
    // int num = 5,sum=0;
    // int arr[num];
    // cout <<"Enter the values for the array of size "<<num<<" " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter element  "<<i<<" " ;
    //     cin>>arr[i];
    // }
    // cout <<"Adding the Values of the Array " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     sum+= arr[i];
    //     cout <<"Sum till index "<< i<< " "<<sum << endl<<endl;

    // }
    // cout <<"Total Sum = " <<sum<<" " << endl;
    

    // int num =6,searchNumber,searchIndex,numberFound=0;
    // int arr[num];
    // cout <<"Taking Input " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Element "<< i<<"  " ;
    //     cin>>arr[i];
    // }
    // cout <<"Enter the element you want to search in the Array " << endl;
    // cin>>searchNumber;
    // for (int i = 0; i < num; i++)
    // {
    //     if (arr[i] == searchNumber)
    //     {

    //         searchIndex = i;
    //         numberFound = 1;
    //         break;
            
    //     }
        
    // }
    // if (numberFound == 1)
    // {
    // cout <<"Element "<< searchNumber<<" found at index "<<searchIndex<<" " << endl;
        
    // }
    // else
    // {
    //     cout <<"The Search Item you requested does not exist in the array " << endl;
    // }
    
    
    // int num = 7;
    // int zeroCount=0,oneCount=0;
    // int arr[num];
    // cout <<"Enter the elements for the array " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Element  "<< i<<" " << endl;
    //     cin>>arr[i];

    // }
    // cout <<"Checking for both counts " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     if (arr[i]==0)
    //     {
    //         zeroCount++;
    //     }
    //     else if (arr[i] ==1)
    //     {
    //         oneCount++;
    //     }
        
        
    // }
    // cout <<"Done Checking Now Printing the array and Values " << endl;
    // cout <<"The Values of Zeroes and Ones in the array  " << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout << endl;
    // cout <<"Zeros =  "<< zeroCount << endl;
    // cout <<"Ones =  "<< oneCount << endl;
    

    // int num =7;
    // int arr[num];
    // int min = INT_MAX;
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Element  "<< i<<" " << endl;
    //     cin>>arr[i];

    // }
    // for (int i = 0; i < num; i++)
    // {
    //     if (arr[i]< min )
    //     {
    //         min = arr[i];
    //     }
        
    // }
    // cout <<"The minimum number for the array " << endl;
    // for (int  i = 0; i < num; i++)
    // {
    //     cout << arr[i] <<"  ";
    // }
    // cout <<" is "<< min << endl;
    
    // int num = 7;
    // int arr[num];
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Element "<<i<<"  " << endl;
    //     cin>> arr[i];

    // }
    // findMaximumNumber(arr,num);
    
    

    // int num =6;
    // int array[num],reversedArray[num];

    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Element " << i<< " " <<endl;
    //     cin>> array[i];

    // }
    // cout <<"Printing array in default order " << endl;

    // for (int i = 0; i < num; i++)
    // {
    //     cout << array[i]<< "  ";
    // }
    // cout << endl;
    // cout <<"Printing array in reversed order not actually reversing the array but invertinf the for loop " << endl;
    // for (int i = num - 1; i >= 0; i--)
    // {
    //     cout << array[i] << "  ";
    // }
    // cout << endl;
    // cout << endl;
    // cout <<"Printing array in reversed order not actually reversing the array not by inverting the for loop but by using n-i-1 " << endl;
    // for (int i = 0; i< num; i++)
    // {
    //     cout << array[num-i-1] << "  ";
    // }
    // cout << endl;
    // cout <<"Now Reversring array by Using Proper method " << endl;
    // arrayReversal(array,reversedArray,num);
    

    
    // int num = 6;
    // int arr[num];
    // int left =0, right = num-1;
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Elements "<< i<<" " << endl;
    //     cin>>arr[i];
    // }
    // cout << endl;
    // cout << endl;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << arr[i]<<"  ";
    // }
    // cout << endl;
    // cout << endl;
    // cout << endl;
    // cout << endl;


    // while (left<=right)
    // {
    //     int temp;
    //     temp =arr[left];
    //     arr[left] = arr[right];
    //     arr[right] = temp;
    //     left++;
    //     right--;

    // }
    // left =0,right = num-1;
    // for (int i = 0; i < num; i++)
    // {
    //     cout << arr[i]<<"  ";
    // }
    // cout << endl;
    // cout << endl;
    // cout << endl;
    // for(int left =0; left<right;left++)
    // {
    //     int temp;
    //     temp =arr[left];
    //     arr[left] = arr[right];
    //     arr[right] = temp;
    //     right--;

    // }

    
    

    // for (int i = 0; i < num; i++)
    // {
    //     cout << arr[i]<<"  ";
    // }

    // // //////////////Extreme Print
    // int num = 5;
    // int arr[num],extreme[num];
    // int left =0, right = num-1;
    // for (int i = 0; i < num; i++)
    // {
    //     cout <<"Enter Element " << i <<" ";
    //     cin>>arr[i];
    // }
    // cout <<"The Extremist Array is  " << endl;
    // cout << endl;
    // cout << endl;
    // cout << endl;

    // while (left <= right)
    // {
    //     if (left == right)
    //     {      
    //       cout <<arr[left]<<" ";
    //       break;

    //     }
    //     cout <<arr[left]<<" ";
    //     cout <<arr[right]<<" ";
    //     left++;
    //     right--;

    // }


    // // for (int left = 0; left <= right; left++)
    // // {
    // //     if (left == right)
    // //     {
    // //         cout << arr[left] << "  ";
    // //     }
    // //     else
    // //     {
    // //         cout << arr[left] << "  ";
    // //         cout << arr[right] << "  ";
            
    // //     }
    // //     right-- ;
        
    // // }


    //////////////////////////

    // int num;
    // cin>> num;
    // int arr[num];
    // cout <<sizeof(arr) << endl;;

    // int nums[] = {1,3,5,6};
    // //target = 5;
    // int target =4;
    // int flag =0;
    // int foundIndex =0;
    // for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++)
    // {
    //     // cout <<sizeof(nums[0]);
    //     if (nums[i] == target)
    //     {
    //         flag == 1;
    //         foundIndex = i;
    //         break;
    //     }
    //     if (target < nums[i])
    //     {   

            
    //     }
        

    //     // foundIndex = sizeof(nums)/sizeof(nums[0]) +1;
    // }
    // cout << foundIndex << "  ";

    // cout << endl;
    
    // int arr[] = { 1,2, 3, 7, 4, 2,1, 4,3};
    // int unique = 0;
    // int sum =0;
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < n; i++)
    // {
    //     unique = unique^arr[i];
    //     cout <<unique<<  endl;
            
        
    // }
    // cout << endl<<unique<< " " << endl;
    
    
    
    // int arr[] = { 0,0,0,1,0,1,1,1,1,1,0,0,0};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int zeroCount =0;
    // int oneCount=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] ==0)
    //         zeroCount++;
    //     else 
    //         oneCount++;
    // }
    // cout <<"The numbers of zeroes in the array is  "<< zeroCount<< " and the number of ones in the array is "<< oneCount<< " " << endl;
    // for (int i = 0; i < zeroCount; i++)
    // {
    //     arr[i] =0;
    // }
    // for (int i = zeroCount; i < n; i++)
    // {
    //     arr[i] = 1;
    // }
    // cout<< "Array : { ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" , ";
    // }
    // cout<< "} ";
    

    // int num, digit;
    // cout <<"Enter the number you want to print the digits of " << endl;
    // cin>> num;
    // int temp = num;
    // cout <<"The digits of the number "<< temp << " are : " << endl;
    // for (int i = 0; temp>0; i++)
    // {
    //     digit = temp%10;
    //     cout << digit << " ";
    //     temp /=10;
        
    // }

	// int n;
	// int a,b,c;
	// float average = a+b/2;
	// cin >>n;
	// for (int i = 0; i < n; i++)
    // {
    //     float a,b,c;
    //     cin >>a>>b>>c;
    //     float average = (a+b)/2;
    //     if (average > c)
    //     {
    //         cout <<"YES" << endl;
    //     }
    //     else
    //     {
    //         cout <<"NO"<<endl;
    //     }
        
    // }
    
//     A group of 
// N
// N friends in Chefland want to buy Chef-TV subscriptions. We know that 
// 6
// 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is 
// X
// X rupees. Determine the minimum total cost that the group of 
// N
// N friends will incur so that everyone in the group is able to use Chef-TV.



    // int num;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     int people, price;
    //     cin>>people>>price;
    //     float times;
    //     times = ceil(people/float(6));
    //     if (times == 0){
    //     cout<< price<<endl;}
    //     else
    //     {
    //         cout<<ceil(times)*price;
    //         cout << endl;
    //     }
        
    // }
    
    // int num;
    // int digit;
    // int temp;
    // cout <<"Enter the number you want to print the digits for " << endl;

    // cin>> num;
    // temp = num;
    // cout <<"The Digits of the number  "<< num<< " are ";
    // for (int i = 0; temp > 0; i++)
    // {
    //     digit = temp%10;
    //     cout <<digit<<" ";
    //     temp/=10;
    // }
    
    // // int arr[] = {0,1,1,1,1,1,0,0,0,0,1,1,0};
    // int arr[] = {0,1,1,9,6,3,8,3,77,2,5,2355,2,5,122};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout <<"The Array is  " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //    cout <<arr[i] << "  ";
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int  j = i+1; j < n; j++)
    //     {
    //         if(arr[i]>arr[j])
    //         {
    //             swap(arr[i],arr[j]);
    //         }
    //     }
        
    // }
    // cout << endl;
    // cout <<"After " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //    cout <<arr[i] << "  ";
    // }
    // // ???? SHIFT ARRAY BY K BITS
    // // ????? ROTATE array by k bits
    
    // int num;
    // int arr[] = {1,212,554,112,1212,41,23};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // num = arr[n-1];

    // // for (int i = n-1; i > 0 ; i--)
    // // {
    // //     arr[i] = arr[i-1];
        
    // // }
    // // cout << endl;
    // // cout << endl;
    // arr[0] = num;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";

    // }
    // shiftByKBits(arr,n);
    // shiftByKBits(arr,n);
    // cout << endl;
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";

    // }
    
    // int n = 5;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>> arr[i];
        
    // }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout<< arr[i]<< " ";

    // }
    // cout <<" " << endl;
    // cout <<"After " << endl;
    // for (int  i = 0; i <= n+10; i++)
    // {
    //     arr[n+i] = i*77;
    // }
    
    // for (int i = 0; i <= n+10; i++)
    // {
    //     cout<< arr[i]<< " ";

    // }



    // int num;
    // cin >>num;
    // int temp = num;
    // int digit;
    // int newno=0;
    // while (temp>0)
    // for (int i = 0; temp>0; i++)
    // {
    //     digit = temp%10;
    //     cout <<digit << "  ";
    //     newno = newno*10 + digit;
    //     temp/=10;

        

    // }
    // cout << endl;
    // cout << endl;
    // cout << newno<<" ";



    // int arr[] = {10,20,30,40,50,60,70,80,90};
    // int index = 0;
    // for(auto z:arr)
    // {
    //     cout << z <<"  ";
    // }

    // vector <int> jigga;
    // int jan = 0;
    // while (jan<20)
    // {
    //     int n;
    //     cin >>n;
    //     jigga.push_back(n);
    //     cout << "Capacity: "<< jigga.capacity()<<"  Size " << jigga.size() <<" ";
    //     cout << endl;
    //     jan++;
    // }
    // for ( auto z:jigga)
    // {
    //     cout << z << "  ";
    // }




    // vector <int> name({1,2,3,4,5,6});
    // vector <int> name{1,2,3,4,5,6};
    // vector <int> name = {1,2,3,4,5,6};

    // for (auto z:name)
    // {
    //     cout << z<< " ";
    // }

    // int num;
    // cout <<"Enter the number till you want to print the binary for " << endl;
    // cin>> num;
    // for (int i = 0; i <= num; i++)
    // {

    //     printDecimalToBinary(i);
        
    // }


    // string s = "Pucho";

    // for( auto it: s)
    // {
    //     cout << it << " ";
    // }


    // int arr[3][4]  = { {1,2,3,4}, { 5,6,7,8}, {9,10,11,12}};
    // int rows = 3;
    // int cols = 4;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << arr[i][j]<< " ";
            
    //     }
    //     cout << endl;
        
    // }
    // for (int i = 0; i < cols; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         cout << arr[j][i]<< " ";
            
    //     }
    //     cout << endl;
        
    // 
    // }




    // int max = INT_MIN;
    // int row =3, col =3;
    // int arr[row][col];
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "Enter the element number: " << i << " " <<  j << " : ";
    //         cin>> arr[i][j];
    //     }
        
    // }
    // cout << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[i][j]<< " ";

    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (arr[i][j] > max)
    //         {
    //             max = arr[i][j];
    //         }
            
    //     }
        
    // }
    // cout <<"The maximum element of the Matrix is  " << max << " " << endl;
    

    // int rows = 3, cols =3;
    // int nums[rows][cols];

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> nums[i][j];

    //     }
        
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     int sum =0;
        
    //     for (int j = 0; j < cols; j++)
    //     {
    //         // cout << nums[i][j] << " ";
    //         sum+= nums[i][j];

    //     }
    //     cout << endl;
    //     cout << "Sum for row " << i << " is " << sum<< " ";
    // }

    

    // int row =3, cols = 4;

    // int arr[row][cols];
    // int sum =0;

    // for( int i = 0; i < row ; i++)
    // {
    //     for(int j = 0; j< cols; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for( int i = 0; i < row ; i++)
    // {
    //     for(int j = 0; j< cols; j++)
    //     {
    //         // cout << arr[j][i]<< " ";
    //         cout << arr[i][j]<< " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for( int i = 0; i < cols ; i++)
    // {
    //     sum =0;
    //     for(int j = 0; j< row; j++)
    //     {
    //         sum += arr[j][i];
    //     }
    //     cout << sum << " ";
    //     cout << endl;
    // }
    

    
    
    // int row = 3, cols = 4;
    // int arr[row][cols];
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
        
    // }
    // cout <<"Before Transpose " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j  = i; j < cols; j++)
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
        
    // }



    // cout << endl;
    // cout <<"After Transpose " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int arr[3][3];
    // // int arr[3][3] = { 
    // //     {1, 2, 3},
    // //     {4, 5, 6},
    // //     {7, 8, 9},
    // // };

    // vector < vector <int> > nums;
    // cout << nums.size() << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> nums[i][j];
    //     }
        
    // }
    
    // vector <int > arr  = { 43 ,23 , 112, 3, 1,  22 ,-1, -211,-21,-12,42,};



    // for (int i = 0; i < arr.size()-1; i++)
    // {   
    //     cout << arr[i] << "  ";
        
        

    // }
    // cout << endl;
    // for (int i = 0; i < arr.size()-1; i++)
    // {   
    //     for (int j = i+1; j < arr.size()-1; j++)
    //     {
    //         if(arr[i]> arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
        
        
    // }

    // for (int i = 0; i < arr.size()-1; i++)
    // {   
    //     cout << arr[i] << "  ";
        
        
    // }
    
    
    // vector <int > arr  = { 43 ,23 , 112, 3, 1,  22 ,-1, -211,-21,-12,42,};

    // int check = 0;
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < arr.size()-1; i++)
    // {
    //     if(arr[i] < 0)
    //     {
    //         swap(arr[i],arr[check]);
    //         check++;
    //     }
    // }
    // cout <<"After " << endl;
    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }


    // vector <int > arr  = { 43 ,23 , 112, 3, 1,  22 ,-1, -211,-21,-12,42,};
    // for(auto i:arr)
    // {
    //     cout << i<< " ";
    // }

    // for (int i = 0; i < arr.size()-1; i++)
    // {
    //     for (int j = i+1; j < arr.size()-1; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             swap(arr[i],arr[j]);
    //         }
            
    //     }
        
    // }
    // cout <<"after " << endl;
    // for(auto i:arr)
    // {
    //     cout << i<< " ";
    // }

    // vector <int> nums;

    // nums = {1,2,-23,-54,134,1,0,-45,-532,-543,34};


//     Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

    // vector <int> nums;
    // nums = {1 , 2, 3, 4, -1, 22,-31 ,-543, -2 ,3, 234, -2};
    // int j = 0;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i]<0)
    //     {
    //         swap(nums[j],nums[i]);
    //         j++;
    //     }
        
    // }
    
    // for (auto i : nums)
    // {
    //     cout << i<<" ";
    // }

    // vector <int> nums;
    // nums = {1, 1, 0, 0, 0, 1, 0, 2 , 1, 2, 2, 0, 1, 1 ,0 , 2, 1, 0};
    // int left = 0, right = nums.size()-1;
    // for (auto i : nums)
    // {
    //     cout << i << " ";
    // }
    
    
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] == 0)
    //     {
    //         swap(nums[left],nums[i]);
    //         left++;
    //     }
    //     else if (nums[i] == 2)
    //     {
    //         swap(nums[right],nums[i]);
    //         right--;
    //         --i;

    //     }
        
        
    // }

    // vector <int> nums;
    // nums = {1, 1, 0, 0, 0, 1, 0, 2 , 1, 2, 2, 0, 1, 1 ,0 , 2, 1, 0};
    // int i = 0;
    // int left = 0, right = nums.size()-1;
    // for (auto it : nums)
    // {
    //     cout << it << " ";
    // }
    // while (i <= right)
    // {
    //     if (nums[i] == 0)
    //     {
    //         swap(nums[i],nums[left]);
    //         left++; 

    //     }
    //     else if (nums[i] == 2)
    //     {
    //         swap(nums[i],nums[right]);
    //         right--;
    //         i--;
    //     }
    //     i++;
        
    // }
    
    // cout << endl;
    // for (auto i : nums)
    // {
    //     cout << i << " ";
    // }


    // vector <int> nums;
    // nums = {1, 1, 0, 0, 0, 1, 0, 2 , 1, 2, 2, 0, 1, 1 ,0 , 2, 1, 0};
    // int n = nums.size();
    // int left = 0, right =  n-1;
    
    // for (auto i : nums)
    // {
    //     cout << i<< " ";
    // }
    // cout << endl;

    // for (int i = 0; i <= right; i++)
    // {
    //     if (nums[i] == 0)
    //     {
    //         swap(nums[i], nums[left]);
    //         left++;
    //     }
    //     else if (nums[i] == 2)
    //     {
    //         swap(nums[i], nums[right]);
    //         right--;
    //         i--;
    //     }
        
    // }
    // cout << endl;
    // for (auto i : nums)
    // {
    //     cout << i<< " ";
    // }

    // vector <int> nums;
    // // nums = { 3, 0, 1};
    // // nums = {0,1};
    // nums = {9,6,4,2,3,5,7,0,1};
    // int n = nums.size();
    // int notFound;
    
    // int sumShouldBe = (n*(n+1))/2;
    // int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     sum += nums[i];
    // }
    // cout << sumShouldBe << "  " << sum << "  ";
    // cout << endl<< sumShouldBe - sum<< " "; 
    

    // vector <int> nums;

    // nums = {3,1,-2,-5,2,-4};
    // int n = nums.size();
    // int left  = 0;
    // int neg = n-1;

    // for (auto i : nums)
    // {
    //     cout << i << "  ";
    // }
    // cout << endl;
    // int i =0;
    // while (i<= neg)
    // {
    //     if (nums[i] > 0)
    //     {
    //         swap(nums[i],nums[left]);
    //         left+=2;
    //     }
        
    // }
    
    // vector <vector <int >> nums;
    // vector <int> nums2;
    // nums = {
    //     {0,0,0},
    //     {1,1,1},
    //     {0,1,1}
    // };
    // int m = nums.size();
    // int n = nums[0].size();
    // int maxind = 0, maxnum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int rowscount  = 0;

    //     for (int j = 0; j < nums[i].size(); j++)
    //     {
    //         rowscount = rowscount + nums[i][j];
    //     }
    //     if (rowscount > maxnum)
    //     {
    //         maxnum = rowscount;
    //         maxind = i;
    //     }
        
    // }
    // cout <<  maxind  << "  " << maxnum << "  ";
    
    
    // int reversedNumber = 0;
    // int x = -123;
    // int temp =x,digit=0;
    // // if (x<0)
    // // {
    // //     temp = -x;
    // // }
    // while (temp != 0)
    // {
    //     digit = temp%10;

    //     reversedNumber = reversedNumber*10 + digit;
    //     temp/=10;
    // }

    // cout << reversedNumber<< "  ";
    

    // vector<vector<int>> nums;

    // nums = {
    //     {1,0,1,0,1},
    //     {1,1,1,0,0},
    //     {1,0,0,0,0},
    //     {1,1,1,1,1},
    //     {1,0,1,0,1}
    // };
    // int rows = nums.size();
    // int cols = nums[0].size();
    
    // int counter = 0;
    // int ans;
    // int max = -1, maxInd = -1;
    // for (int i = 0; i < rows; i++)
    // {
    //     counter = 0;
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (nums[i][j] == 1)
    //         {
    //             counter++; 
    //         }


            
    //     }
    //     if (max < counter)
    //     {
    //         max = counter;
    //         maxInd = i;
    //     }
        
        
        
    // }
    // cout << "The maximum number of 1's in the matrix were at row number " << maxInd << " with the value of " << max << " 1's";

    
    // vector < vector < int >> nums;
    // vector < vector < int >> nums2;
    // nums = {

    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}

    // };
    // int n = nums.size();
    // nums2 = {
    //     {0,0,0},
    //     {0,0,0},
    //     {0,0,0}
    // };
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << nums[i][j]<< " ";
    //     }
    //     cout << endl;
        
    // }

    // cout << endl;


    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < nums[i].size(); j++)
    //     {
    //         nums2[j][n-i-1] = nums[i][j];
            
    //     }
        
    // }

    // nums = nums2;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << nums[i][j]<< " ";
    //     }
    //     cout << endl;
        
    // }
    




    // vector < vector < int >> nums;
    // nums = {

    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}

    // };
    // nums = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    // int rows = nums.size();
    // int cols = rows;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << nums[i][j]<< "  ";
    //     }
    //     cout << endl;
        
    // }
    // cout << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = i; j < cols; j++)
    //     {
    //         swap(nums[i][j], nums[j][i]);
    //     }
        
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     swap(nums[i][0], nums[i][rows-1]);
        
    // }
    






    // cout << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << nums[i][j]<< "  ";
    //     }
    //     cout << endl;
        
    // }
    
    

    // string s = "((){))}";
    // vector<char> stack;

    // for (auto i : s)
    // {
    //     if (i == '{' || i == '(')
    //     {
    //         stack.push_back(i);
    //     }
    //     if (!stack.empty())
    //     {
    //         if (i == ')' || i == '}')
    //         {
    //             stack.pop_back();
    //         }
            
    //     }
        
    // }
    // cout << endl;
    // for (auto i : stack)
    // {
    //     cout << i << "   ";
    // }
    
    
    // int num;
    // cin >> num;
    // int count = 0;
    // int i = 0;
    // while (num!=0)
    // {
        
    //     int bit = num%2;
    //     if (bit == 1)
    //     {
    //         count++;
    //     }
        
    //     num/= 2;
    //     i++;

    // }
    // cout << count<< " ";
    

    // int arr[] = { 9001,34, 12, 56, 2, 5,193,0};
    // int n = sizeof(arr)/ sizeof(arr[0]);

    // int left =0,right  = (n-1);
    // int target = 7;
    // sort(arr, arr+n);
    // // for (auto &&i : arr)
    // // {
    // //     cout << i << " ";
    // // }
    // // 0 2 5 12 34 56 193 9001
    
    
    // while (left < right)
    // {
    //     int su =  arr[left] + arr[right];
    //     if (su == target)
    //     {
    //         cout << arr[left] << " " << arr[right] << " ";
    //         break;
    //     }
    //     else if (su > target)
    //     {
    //         right-- ;
            
    //     }
    //     else if (su < target)
    //     {
    //         left++ ;

    //     }
        
    // }
    

    // vector <int> nums;
    // nums = {1,7,3,6,5,6};

    // int rightSum=0,leftSum=0;

    // for (auto &&i : nums)
    // {
    //     rightSum += i;
    // }
    // for (int i = 0; i < nums.size() ;i++)
    // {
    //     rightSum-= nums[i];
    //     if (rightSum == leftSum)
    //     {
    //         cout << i << " ";
    //         break;
    //     }
    //     leftSum += nums[i];
    // }

    // double num = 2;
    // double temp = 1;
    // double n;
    // cin >>n;
    // if(n >0)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         temp *= num;
    //         cout << temp << endl;
            
    //     }
        
    // }
    // if(n < 0)
    // {
    //     n = -n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         temp /= num;
    //         cout << temp << endl;
    //     }
        
        
    // }
    // cout << temp << " ";
    
    // vector < int> nums ;
    // // nums  = {2,1,3,5,6};
    // nums  = {1,2};
    // // int k = 5, multiplier = 2;;
    // int k = 3, multiplier = 4;;
    // int min = INT_MAX,minInd = -1;
    // //op == { 8,4,6,5,6};
    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //         if(nums[j] < min)
    //         { 
    //             min = nums[j];
    //             minInd = j;

    //         }
    //     }
    //     // cout << minInd;
    //     nums[minInd] = nums[minInd]*multiplier;
    //     min = INT_MAX;
    // }
    // cout << endl;
    // for (auto &&i : nums)
    // {
    //     cout << i << ' ';
    // }
    
    // vector <int> nums;
    // // nums = {1};
    // nums = {10,4,8,3};
    // vector <int> answer;
    // int leftsum = 0, rightsum = 0;
    // for(auto i :nums)
    // {
    //     rightsum += i;
    // }
    // for(int i = 0; i< nums.size();i++)
    // {
    //     rightsum -= nums[i];
    //     leftsum += nums[i-1];
    //     int difference = abs(leftsum - rightsum);
    //     answer.push_back(difference);

    // // }




    // vector<int> answer;
    //     int leftsum = 0, rightsum = 0;
    //     for(auto i :nums)
    //     {
    //         rightsum += i;
    //     }
    //     for(int i = 0; i< nums.size();i++)
    //     {
    //         rightsum -= nums[i];
    //         if (i > 0) {
    //             leftsum += nums[i - 1];
    //         }
    //         int difference = abs(leftsum - rightsum);
    //         answer.push_back(difference);
    //         // answer[i] = difference;

    //     }
    // cout << endl;
    // for (auto i : answer)
    // {
    //     cout << i<< " ";
    // }
        
    // vector <int> height;
    // vector <int> ans;
    // // height = {10,1,10,1,10};
    // height = {1,2,3,4,5};
    // // int threshold = 10;
    // int threshold = 2;


    // for (int i = 1; i < height.size(); i++)
    // {
    //     if(height[i-1] > threshold)
    //     {
    //         ans.push_back(i);
    //     }

    // }
    // for (auto &&i : ans)
    // {
    //     cout << i << " ";
    // // }

    // vector <int> nums;
    // vector <int> ans;
    // nums = {8,1,2,2,3};
    
    // int min = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     min = 0;
    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //         if( nums[j] < nums[i] && j!= i)
    //         {
    //             min++;
    //         }
    //     }
    //     ans.push_back(min);

        
    // }
    // for (auto &&i : ans)
    // {
    //     cout << i << "  ";
    // }
    

    // vector <int> nums;
    // nums = {1,2,3,4};
    // int sum = 0;
    // vector <int> runningsum;
    // for(int i = 0; i< nums.size(); i++)
    // {
    //     sum += nums[i];
    //     runningsum.push_back(sum);

    // }
    // for (auto &&i : runningsum)
    // {
    //     cout << i << " ";
    // }
    

    
    // vector <int> nums;
    // int n = 5, start=0;
    // int num = 0;

    // for(int i = 0; i < n; i++)
    // {
    //     nums.push_back(start + 2*i);
    // }
    // for(auto i : nums)
    // {
    //     num = num^i;
    // }
    // cout << num << " ";

    // vector <string> sentences;
    // sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    // int maxCount = INT_MIN;


    // for (int i = 0; i < sentences.size(); i++)
    // {
    //     int count  = 1;
    //     for (char z : sentences[i])
    //     {
    //         if( z == ' ')
    //         {
    //             count ++;
    //         }
            
    //     }
    //     maxCount = max(count,maxCount);
        
    // }
    // cout << maxCount<< "  ";
    

    // vector <int> nums;
    // // nums = { 1,0,0,1,0,1,2,2,2,2,1,0,2,1,2,1,0,0};
    // nums = {2, 0, 1};
    // int left = 0, right = nums.size()-1;

    // for (auto &&i : nums)
    // {
    //     cout << i << "  ";
    // }
    // cout << endl;

    // for (int i = 0; i <= right; i++)
    // {
    //     if(nums[i] == 0)
    //     {
    //         swap(nums[left],nums[i]);
    //         left++;
    //     }
    //     if(nums[i] == 2)
    //     {
    //         swap(nums[right],nums[i]);
    //         right--;
    //         i--;
            
    //     }
    // }

    // cout << endl;
    // for (auto &&i : nums)
    // {
    //     cout << i << "  ";
    // }

    // vector<int> original;
    // // int m = 2,n = 2;
    // int m = 1,n = 1;
    // // original = {1,2,3,4};
    // original = {1,2};
    // vector<vector<int>> newmat(m, vector<int>(n));
    // int index = 0;

    // if (original.size() == m*n)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             newmat[i][j] = original[index];
    //             index++;
    //         }
            
    //     }

    // }
    
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << newmat[i] [j] << "  " ;
    //     }
    //     cout << endl;
        
    // }
    

    // vector <int > nums;
    // nums = {0,1,0,3,12};
    // // nums = {0};
    // int left =0;;
    
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] !=0)
    //     {
    //         swap(nums[i],nums[left]);
    //         left++;
    //     }
    // }
    // for (auto &&i : nums)
    // {
    //     cout << i<< " ";
    // }

    // int num = 4;
    // int count =0;

    // for (int i = 1; i <= num; i++)
    // {
    //     int sum  = 0;
    //     int temp = i;
    //     int digit = 0;
    //     while (temp!= 0)
    //     {
    //         digit = temp%10;
    //         sum += digit;
    //         temp/=10;
    //     }

    //     if (sum %2 == 0)
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;
    

    // vector <int> nums;
    // nums = {-1,43,34,24,-5,-2,2,-53,-13,34,-13,32};
    // // nums = {1,2,-3,4,-5,6};
    // int left = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i]< 0)
    //     {
    //         swap (nums[i] ,nums[left]);
    //         left++;

    //     }
    // }
    
    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }

    // vector <int> nums;
    // // nums = {1,3,4,2,2};
    // nums = {3,3,3,3,3};
    // int n = nums.size() -1;
    // int sum = (n*(n+1))/2;

    // int csum =0;

    // for (auto &&i : nums)
    // {
    //     csum += i;
    // }
    // cout << csum - sum << " ";
    
    // vector <int> arr;
    // arr = {1, 5, 3, 4, 3, 5, 6};

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i+1; j < arr.size(); j++)
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             cout << i+1;
    //             break;

    //         }
    //     }
        
    // }

    // string c = "hello";
    // int sum = 0;

    // // cout << abs((int) 'h' - 'e')<< " ";
    // // cout << abs((int) 'e' - 'l')<< " ";
    // // cout << abs((int) 'l' - 'l')<< " ";
    // // cout << abs((int) 'l' - 'o')<< " ";
    
    
    // for (int i = 0; i < c.length()-1; i++)
    // {
    //     int difference = abs(c[i] - c[i+1]);
    //     sum += difference;
    // }
    // cout << sum << endl;

    // vector <int> nums;
    // nums = {0,2,1,5,3,4};
    // vector <int> ans(nums.size());

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     ans[i] = nums[nums[i]];
    // }
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }

        // vector <int> nums;
        // nums = {1,2,1};
        // vector <int> ans;
        // for(int i: nums)
        // {
        //     ans.push_back(i);
        // }
        // for(int i: nums)
        // {
        //     ans.push_back(i);
        // }
        // for (auto &&i : ans)
        // {
        //     cout << i << " ";
        // }


    // string s = "1.1.1.1";
    // string k;

    // for (auto &&i : s)
    // {
    //     if (i == '.') 
    //     {
    //         k+= "[.]";
    //     }
    //     else
    //     {
    //         k+=i;
    //     }
        

        
    // }
    // cout << k << " ";

    // vector <int> nums;
    // vector <int> num2;
    // nums = {2,5,1,3,4,7};
    // // Output: [2,3,5,4,1,7]
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     num2.push_back(nums[i]);
    //     num2.push_back(nums[i+n]);

    // }
    // for (auto &&i : num2)
    // {
    //     cout << i << " ";
    // }

    // vector<string> words;

    // // words = {"leet","code"};
    // words = {"abc","bcd","aaaa","cbc"};
    // // char x = 'e';
    // char x = 'a';
    // vector <int> arr;
    // for (int i = 0; i < words.size(); i++)
    // {
    //     for (int j = 0; j < words[i].length(); j++)
    //     {
    //         if (words[i][j] == x)
    //         {
    //             arr.push_back(i);
    //             break;
    //         }
    //     }
    // }
    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }

    // int n = 9;

    // for (int i = 2; i <= n-2; i++)
    // {
    //     // cout << convertdecimaltobase(n,i) << " ";
    //     string c = convertdecimaltobase(n,i);
    //     if(c == "false")
    //     {
    //         cout << "false";
    //         break;
    //     }
        
    // }
    
    // vector <string> words = {"abc","car","ada","racecar","cool"};
    // for (auto i : words)
    // {
        
    //     string k;
    //     k = i;
    //     reverse(k.begin(),k.end());
    //     if (k ==i) 
    //     {
    //         cout <<  k;
    //         break;
    //     }
        
    //     cout << endl;;
    // }


    // vector <int> nums;
    // // nums = {1,2,2,1};
    // nums = {1,3};
    // int k = 3;
    // // int k = 1;
    // int count = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i+1; j < nums.size(); j++)
    //     {
    //         int difference = abs(nums[i] - nums[j]);
    //         if(difference == k)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout << count << " ";

    // string s = "113";
    // int sum=0;
    // for (auto i : s)
    // {
    //     // sum += ((int) i)-48;
    //     sum += i-48;
    // }
    // cout <<sum;
    // int num = 56;
    // string dwa;
    // dwa = to_string(num);
    // cout << dwa;


    
    // vector <int> nums;
    // // nums = {10,12,13,14};
    // nums = {999, 19, 199};

    // for(int i = 0; i < nums.size(); i++)
    // {
    //     int sum = 0;
    //     string s = to_string(nums[i]);
    //     for(auto j : s)
    //     {
    //         sum += j -48;
    //     }
    //     nums[i] = sum;
    // }
    // int min = *min_element(nums.begin(), nums.end());
    // cout << min;

    // string s = "Hello";

    // // for (auto i : s)
    // // {
    // //     if (i < 97)
    // //     {
    // //         i += 32;
    // //     }
    // //     cout << i;

    // // }
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] < 97) s[i] += 32;
    // }
    // cout << s;

    // vector <int> nums;
    // nums = {1,2,3,4,5,6,7,8,9};
    // int target = 10;

    // int foundIndex = -1;
    // int low = 0, high = nums.size()-1;
    // int mid = (low+high)/2;

    // for (int i = 0; low <= high; i++)
    // {
    //     if (nums[mid] == target)
    //     {
    //         foundIndex = mid;
    //         break;

    //     }
    //     else if (nums[mid]<target)
    //     {
    //         low = mid+1;

    //     }
    //     else if (nums[mid]>target)
    //     {
    //         high = mid-1;
    //     }

    //     mid = (low+high)/2;
    // }
    // // while (low <= high)
    // // {
    // //     if (nums[mid] == target)
    // //     {
    // //         foundIndex = mid;
    // //         break;
    // //     }
    // //     else if (nums[mid]<target)
    // //     {
    // //         low = mid+1;

    // //     }
    // //     else if (nums[mid]>target)
    // //     {
    // //         high = mid-1;
    // //     }

    // //     mid = (low+high)/2;
    // // }
    
    // if (foundIndex != -1) 
    // {
    //     cout << "Element : " << target << " found at index : " << foundIndex;
    // }
    // else 
    // {
    //     cout << "Element : "<< target << " not found in the sorted Array nums "<< endl;;
    // }


    // vector <int> nums;

    // nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int target = 9;
    // int found = binarySearch(nums,target);

    // if (found == -1 ) cout << "Element " << target << " not found in the array"<< endl;
    // else cout << "Element " << target << " is found at the index " << found<< endl;



    // vector <int> nums;

    // // nums = {1, 2, 3, 3, 3, 3, 7, 8, 9};
    // nums = {3, 3, 3, 3, 3, 3, 3, 3, 3};
    // int target = 3;
    // int found = findFirstOccurence(nums,target);

    // if (found == -1 ) cout << "Element " << target << " not found in the array"<< endl;
    // else cout << "The first occurence of the element " << target << " is at the index " << found<< endl;



    // vector <int> nums;

    // nums = {1, 2, 3, 3, 3, 3, 7, 8, 9};
    // // nums = {3, 3, 3, 3, 3, 3, 3, 3, 3};
    // int target = 3;
    // int found = findLastOccurence(nums,target);

    // if (found == -1 ) cout << "Element " << target << " not found in the array"<< endl;
    // else cout << "The last occurence of the element " << target << " is at the index " << found<< endl;


    // int n = 8;
    // // int n = 4;

    // int num = pivotInteger(n);
    // cout << num;
    


    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         int k = 1;
    //         if (j== 0 || j ==i)
    //         {
    //             cout << k<< " ";
    //         }
    //         else
    //         {
    //             cout << k + (j-1)<< " ";
    //         }
            
    //     }
    //     cout << endl;
    // }

    // vector <int> arr;

    // // arr = {0,2,1,0};
    // // arr = {0,10,5,2};
    // arr = {1,2, 3,4,5, 100, 30,21,20,12};

    // int n = arr.size();
    // int low = 0, high = n-1;

    // int mid = (low + high)/2;

    // while (low <= high)
    // {
    //     if(arr[mid] < arr[mid+1])
    //     {
    //         low = mid+1;
    //     } 
    //     else
    //     {
    //         if (arr[mid-1] < arr[mid])
    //         {
    //             cout << arr[mid]<< " ";
    //             break;

    //         }
    //         else
    //         {
    //             high = mid-1;
    //         }
            
    //     }
    //     mid = (low+high)/2;
        
    // }


    // vector <int> arr;
    // arr = {1,2, 3,4,5, 100, 30,21,20,12};
    // int start = 0 , end = arr.size() -1;

    // int mid = start + (end-start)/2;

    // while (left <= right)
    // {
    //     if (arr[mid] < arr[mid+1])
    //     {
    //         start = mid+1;

    //     }
    //     else
    //     {
    //         if (arr[mid] > arr[mid-1])
    //         {
    //             cout << arr[mid];
    //             break;
    //         }
    //         else
    //         {
    //             end = mid -1;
    //         }
            
    //     }
        
    // }


    // vector<vector <int>> matrix(4,vector <int> (4));
    // int matrix[30][30];

    // for (int i = 0; i < 4; i++)
    // {
    //     for ( int j = 0; j <= i; j++)
    //     {
    //         matrix[i][j] = j+i;
            
    //     }
        
    // }
    // for (auto &&i : matrix)
    // {
    //     for (auto &&j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
        
    // }


    // vector <int> nums;
    // // nums = {10, 20, 30, 40, 50, 500, 250, 200, 199, 190, 188, 150, 112, 110, 100, 99, 95, 90, 88};
    // nums = {10, 20, 30, 40, 50, 60 , 70 , 80, 90, 100, 110, 120, 140, 500, 250};
    // int n = nums.size();
    // int start = 0, end = n-1;
    // int mid = start + (end - start)/2;
    // cout << " start = " << start << " mid = " << mid << " and end = " << end << "  " <<endl;
    // while (start < end)
    // {
    //     if (nums[mid] < nums[mid+1])
    //     {
    //         start = mid +1;
    //     }
    //     else
    //     {
    //         end = mid;
    //     }

    //     mid = start + (end - start)/2;
    //     cout << " start = " << start << " mid = " << mid << " and end = " << end << "  " <<endl;
        
    // }
    // cout << endl;
    // cout << endl;

    // cout << "The peak element of the mountain is " << nums[start] << " and the index is  " << start << endl;
    


    // vector <int> nums;
    // // nums = {1,3,4,2,2};
    // nums = {1,3,3,3,};

    // int n = nums.size();

    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(nums[i]);

    //     if(nums[index] > 0)
    //     {
    //         nums[index] = -nums[index];
    //     }           
    //     else
    //     {
    //         cout << index <<endl;
    //         break;
    //     }
        

    // }


    // int a  = 2;

    // cout << (a ^ a ^ a);
    
    

    // vector <int> nums;
    // nums = {-5,1,5,0,-7};
    // int maxA =0;

    // int sum = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     sum += nums[i];
    //     maxA = max(sum,maxA);
        
    // }
    
    // if (maxA < 0)
    // {
    //     cout << "no";
    // }
    // cout << maxA;

    
    
    // int n = 7;
    // int matches = 0;
    // int teams = n;

    // while (n > 1)
    // {
    //     if (n % 2 == 0)
    //     {
    //         matches += n/2;
    //         n = n/2;
    //     }
    //     else
    //     {
    //         matches += (n-1)/2;
    //         n = ((n-1) / 2) +1;
    //     }
         
    // }
    
    // cout << matches << endl;
    

    //nums1 = [2,1,3], nums2 = [10,2,5,0]

    // vector <int> nums1;
    // vector <int> nums2;
    // int num1, num2;
    // num1 = num2 =0;
    // nums1 = {1,2};
    // nums2 = {3,4};
    // // nums1 = {2,1,3};
    // // nums2 = {10,2,5,0};

    // for(auto i: nums1)
    // {
    //     num1 = (num1^i);
    // }
    // for(auto i: nums2)
    // {
    //     num2 = (num2^i);
    // }
    // int jinga = num1^num2;
    // cout << jinga;


    // string s = "string";
    // string s1;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if ( s[i] != 'i')
    //     {
    //         s1+= s[i];
    //     }
    //     else
    //     {
    //         reverse(s1.begin(),s1.end());
    //     }
    // }
    // cout << s1 << endl;
    // string num;
    // num = "1234";
    // int evenIndicesSum =0;
    // int oddIndicesSum =0;

    // for(int i =0 ; i< num.length(); i++)
    // {
    //     if (i%2 ==0)
    //     {
    //         evenIndicesSum += (int)num[i] -48 ;
    //     }
    //     else
    //     {
    //         oddIndicesSum += (int)num[i] -48; 
    //     }
    // }
    // cout << evenIndicesSum << "  " <<  oddIndicesSum <<  "  "; 
    
    // string sentence = "abcdefghijklmnopqrstuvwxyz   ";
    // string sentence = "uwqohxamknblecdtzpisgvyfjr   ";
    // int sum = 0;

    // for (auto &&i : sentence)
    // {
    //     sum += i -98;
    // }
    // cout << sum;

    // vector < vector < int>> matrix;

    // // matrix = {
    //     // {1,1,0,0},
    //     // {1,0,0,1},
    //     // {0,1,1,1},
    //     // {1,0,1,0}
    // // };
    // matrix = {
    //     {1,1,0},
    //     {1,0,1},
    //     {0,0,0}
    // };

    // int n = matrix[0].size();
    
    // int left = 0, right = n-1;
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     left = 0;
    //     right = n-1;
    //     while (left<right)
    //     {
    //         swap(matrix[i][left], matrix[i][right]);
    //         left++;
    //         right--;
    //     }

    //     for (int j = 0; j < matrix[i].size(); j++)
    //     {
    //         if (matrix[i][j] == 1)
    //         {
    //             matrix[i][j] =0;
    //         }
    //         else 
    //         {
    //             matrix[i][j] =1;
    //         }

    //     }
        
        
    // }
    // for (auto &&i : matrix)
    // {
    //     for (auto &&j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout <<endl;
        
    // }
    
    // // string str ="yo|uar|e**|b|e***au|tifu|l";
    // string str ="xdfghjyuijyhtgrfd";
    // int count=0;
    // int counter =0;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == '|')
    //     {
    //         count++;
    //     }

    //     if (count %2 == 0)
    //     {
    //         if (str[i] == '*')
    //         {
    //             counter++;
    //         }
            
    //     }
        
    // }
    // cout << counter;
    

    // vector <int> nums;
    // nums = {1,2,3,4,5,14};

    // int singlesum =0, doublesum = 0;    

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] /10 >0)
    //     {
    //         singlesum += nums[i];
    //     }
    //     else
    //     {
    //         doublesum += nums[i];
    //     }
    // }

    // cout <<singlesum << "   " << doublesum << "  " << endl;
    
    // vector<int> nums1;
    // vector<int> nums2;
    // nums1 = {2,6,4};
    // nums2 = {9,7,5};
    // sort(nums1.begin(),nums1.end());
    // sort(nums2.begin(),nums2.end());
    // int min = *min_element(nums1.begin(),nums1.end());

    // cout << min;

    // string s = "a1c1e1";
    // // string s = "a1b2c3d4e";

    // for (int i = 0; i < s.length(); i+=2)
    // {
    //     s[i+1] = s[i] + (s[i+1]-48);
    // }
    

    // cout <<s;
    
    // string details = "7868190130M7522";

    // // cout << (str[11] + str[12]);

    // int age = ((int)details[11] - 48)*10 + ((int)details[12] - 48);
    // int count =0;
    // if (age>60) count++;

    // Input: nums = [1,2,1]
    // Output: 15
    // Explanation: Six possible subarrays are:
    // [1]: 1 distinct value
    // [2]: 1 distinct value
    // [1]: 1 distinct value
    // [1,2]: 2 distinct values
    // [2,1]: 2 distinct values
    // [1,2,1]: 2 distinct values
    // The sum of the squares of the distinct counts in all subarrays is equal to 12 + 12 + 12 + 22 + 22 + 22 = 15.



    // vector<int> nums;
    // nums = {1,2,1};
    // sum + 
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums.size()-i; j++)
    //     {
            
    //     }
    //     cout << endl;
        
    // }

    // vector <int> nums;
    // nums = {5,5,5};
    // int k = 2;
    // // nums = {1,2,3,4,5};
    // // int k = 3;
    
    // int max = *max_element(nums.begin(), nums.end());
    // int sum = max;
    // for(int i = 1; i < k; i++)
    // {
    //     sum += max+i;

    // }
    // return sum;


    // string s = "adwndwkd";
    // sort(s.begin(),s.end());
    // cout << s;
    
    // vector <int> nums;
    // vector <int> answer;
    // nums = {13,25,83,77};
    // string s ;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     s += to_string(nums[i]);
    // }
    // cout <<s;
    // int j = stoi(s);
    // int k = 0;
    // while (j>0)
    // {
    //     answer.push_back(j%10);
    //     j/=10;
    //     k++;
    // }
    // reverse(answer.begin(),answer.end());
    // for (auto &&i : answer)
    // {
    //     cout << i << " ";
    // }
    

    // vector <int> nums;
    // // nums = {4,3,1,6};
    // nums = {2,1,4};
    // bool istrue = false;

    // int n = nums.size();
    // for (int i = 0; i < n-1; i++)
    // {
    //     if (nums[i] & 1 == 1)
    //     {
    //         if(nums [i+1] & 1 == 0)
    //         {
    //             istrue = true;
    //         }
    //         else istrue = false;
            
    //     }
    //     else
    //     {
    //         if(nums[i+1] & 1 == 1)
    //         {
    //             istrue = true;
    //         }
    //         else istrue = false;
    //     }
        
    // }
    // cout << istrue << " ";

    // int num = -7;
    // int ans =0;
    // string s;
    // int i = 0;
    // while (num != 0)
    // {
    //     int digit = num%7;
    //     ans = digit*pow(10,i) +ans;
    //     num /= 7;
    //     i++;
    // }
    // s = to_string(ans);
    // cout << s;
    // return ans;

    // int num = 38;
    
    // int sum = 0;

    // vector <int> nums;
    // // nums = {12, 14, 15, 16, 2, 4, 6, 8, 10};
    // nums = {4,5,6,7,0,1,2};

    // int s = 0, e = nums.size() -1;

    // int mid = s + (e-s) / 2;
    // int target = 3;

    // int pivotIndex = -1;
    // int founded;

    // while (s <= e)
    // {
    //     if (s==e)
    //         pivotIndex = e;
    //     else if (nums[mid] < nums[mid-1])
    //     {
    //         pivotIndex = mid-1;
    //         break;
    //     }
    //     else if (nums[mid] > nums[mid+1])
    //     {
    //         pivotIndex = mid;
    //         break;
    //     }
    //     else if (nums[s] > nums[mid])
    //     {
    //         s = mid+1;
    //     }
    //     else
    //     {
    //         e = mid-1;
    //     }
    //     mid = s + (e-s)/2;
    // }


    // cout << nums[pivotIndex] << endl;

    // if (target <= nums[pivotIndex] && target >= nums[0])
    // {
    //     founded = binarySearchWithIndex(nums,0, pivotIndex,target);
        
    // }
    // else if(target >= nums[pivotIndex+1] && target <= nums[nums.size()-1])
    // {
    //     founded = binarySearchWithIndex(nums,pivotIndex+1,e,target);
    // }
    // else
    // {
    //     cout << -1;
    // }
    
    // if(founded != -1)
    //     {cout <<"found";}
    // else
    //    { cout <<"notisfound";}


    // vector <int> nums;

    // nums = {10, 20, 30,45, 23, 13, 34, 3445};

    // int n = nums.size();
    // for (auto &&i : nums)
    // {
    //     cout << i<< " " ;
    // }
    
    // cout << endl;

    // for (int i = 0; i < n/2; i++)
    // {
    //     swap(nums[i], nums[n-1-i]);
    // }

    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }

    // vector <string> arr;
    // // arr = {"dad", "dawd", "awdd", "dmwkdow", "awjdawj", "wjdodjaowd"};

    // arr = {"Apple", "Banana", "Orange"};
    // int n = arr.size();

    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    

    // for (int i = 0; i < n/2; i++)
    // {
    //     swap(arr[i], arr[n-i-1]);

    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int k = arr[i].length();

    //     for (int j = 0; j < k/2; j++)
    //     {
    //         swap(arr[i][j], arr[i][k -j -1]);

    //     }
    //     cout << endl;
        
    // }
    
    // for (auto &&i : arr)
    // {
    //     cout << i << "  ";
    // }

    // vector <int> nums;
    // nums = {1,2,3,4,5,6,7,8,9};

    // int n = nums.size();
    
    // int s = 0, e = n-1;

    // int mid = s+ (e-s)/2;
    // int target = 1,flag=-1;

    // while (s<=e)
    // {
    //     if (nums[mid] == target)
    //     {
    //         flag = mid;
    //         break;

    //     }
    //     else if (nums[mid] < target)
    //     {
    //         s = mid+1;
    //     }
    //     else if (nums[mid] > target)
    //     {
    //         e = mid -1;
    //     }
    //     mid = s + (e-s)/2;
    // }

    // if (flag == -1)
    // cout << "notound";
    // else
    // cout << "found";


    // vector <int> nums;

    // // nums = {12, 14, 15, 16, 19, 20, 10, 13, 21, 25};
    // // nums = {19, 20, 21, 25, 10, 12, 13, 14, 15, 16};
    // nums = {19,12};
    
    // int start = 0, end = nums.size() -1;

    // int mid = start + (end-start)/2;

    // while (start <= end)
    // {
    //     if (start == end)
    //     {
    //         cout << nums[start] << " ";
    //         break;
    //     }
    //     else if (mid-1 > 0 && nums[mid] < nums[mid-1])
    //     {
    //         cout << nums[mid-1]<< " ";
    //         break; 
    //     }
    //     else if (mid + 1 <  nums.size()-1 && nums[mid] > nums[mid+1] )
    //     {
    //         cout << nums[mid]<< " ";
    //     }
    //     else if (nums[mid] < nums[start])
    //     {
    //         end = mid -1;
    //     }
    //     else
    //     {
    //         start = mid+1;
    //     }
    //     mid = start + (end - start)/2;
        
    // }







    // vector <int> nums;

    // nums = {4,5,6,7,0,1,2};

    // int n =nums.size() -1;
    // int s = 0, e = n;
    // int target = 0;

    // int mid = s + (e-s)/2;
    // int pivotIndex = -1;
    // int found = -1;
    // while(s<=e)
    // {
    //     if (s == e)
    //     {
    //         // cout << nums[s];
    //         pivotIndex = s;
    //         break;
    //     }
    //     else if (nums[mid] < nums[mid-1] && mid-1 >= 0)
    //     {
    //         // cout << nums[mid-1] << " ";
    //         pivotIndex = nums[mid-1];
    //         break;
    //     }
    //     else if (nums[mid] > nums[mid+1] && mid+1 <= n)
    //     {
    //         // cout << nums[mid] << " ";
    //         pivotIndex = mid;
    //         break;
    //     }
    //     else if (nums[s] > nums[mid] )
    //     {
    //         e = mid+1;
    //     }
    //     else
    //     {
    //         s = mid -1;
    //     }

    //     mid = s + (e-s)/2;
    // }
    // cout << nums[pivotIndex];

    // if(target >= nums[0] && target <= nums[pivotIndex])
    // {
    //     found = binerySearch(nums,0, pivotIndex,target);
        

    // }
    // else
    // {
    //     found = binerySearch(nums,pivotIndex + 1, nums.size() -1,target);
    // }
    // cout << endl << found;


    // vector <int> nums;
    // // nums ={4,5,6,7,0,1,2};
    // nums ={1};
    // int target = 0;
    // int isFound = -1;

    // int pivotIndex = pivotindex(nums);



    // if (target >= nums[0] && target <= nums[pivotIndex])
    // {
    //     isFound = binarysurch(nums,0, pivotIndex, target);
    // }
    // else
    // {
    //     isFound = binarysurch(nums,pivotIndex +1, nums.size()-1, target);
    // }

    // cout << isFound;



    // vector <vector<int>> matrix;

    // matrix = {
    //     {1,3,5,7},
    //     {10,11,16,20},
    //     {23,30,34,60}
    // };
     
    // int rows = matrix.size();
    // int cols = matrix[0].size();

    // int n = rows*cols;
    // int target = 34;
    // int start = 0;
    // int end = n - 1;
    // int mid = start + (end-start)/2;
    // int founded = -1;

    // while (start <= end)
    // {
    //     int rowIndex = mid / cols;
    //     int colIndex = mid % cols;
    //     int current = matrix[rowIndex][colIndex];

    //     if(current == target)
    //     {
    //         cout << "found";
    //         break;
    //     }

    //     else if(target > current)
    //     {
    //         start = mid+1;
    //     }

    //     else
    //     {
    //         end = mid - 1 ;
    //     }

    //     mid = start +(end-start)/2;
        
    // }


    // vector <int> nums;
    // nums = {1,3,5,6};
    // int target = 5;
    // // int target = 2;
    // // int target = 7;
    // int n = nums.size() -1;
    // int start = 0;
    // int end = n;
    // int keepCount = -1;
    // int mid = start + (end-start)/2;
    // int flag = -1;

    // while (start<=end)
    // {
    //     if (nums[mid] == target)
    //     {

    //         keepCount = mid;
    //         flag = 1;
    //         break;
    //     }
    //     else if (nums[mid] < target)
    //     {
    //         start = mid+1;
    //         keepCount = mid;
    //     }
    //     else
    //     {
    //         end = mid-1;
    //     }
    //     mid = start + (end-start)/2;
        
    // }
    
    // if (flag == -1)
    // {
    //     cout << keepCount+1;
    // }
    // else
    // {
    //     cout << keepCount;
    // }
    


    // vector <int> nums;
    // nums = {5,7,7,8,10};

    // int n = nums.size();

    // int start = 0;
    // int end = n - 1;
    // int mid = start +  (end-start)/2;
    // int firstOccurence = -1;
    // int lastOccurence = -1;
    // int target = 22;
    // while (start <= end)
    // {
    //     if (nums[mid] == target)
    //     {
    //         firstOccurence = mid;
    //         end = mid-1;
    //     }
    //     else if(nums[mid] > target)
    //     {
    //         end = mid -1;

    //     }
    //     else
    //     {
    //         start = mid +1 ;
    //     }
    //     mid = start +(end-start)/2;

        
    // }
    // start =0, end = nums.size() -1;

    // mid = start + (end-start)/2;
    // while (start <= end)
    // {
    //     if (nums[mid] == target)
    //     {
    //         lastOccurence = mid;
    //         start = mid+1;
    //     }
    //     else if(nums[mid] > target)
    //     {
    //         end = mid -1;

    //     }
    //     else
    //     {
    //         start = mid +1 ;
    //     }
    //     mid = start +(end-start)/2;

        
    // }
    // cout << firstOccurence<< " "<<endl;
    // cout << lastOccurence<< " "<<endl;
    

    // vector <int> nums;
    // nums = {1,23,421,12,11,24,25,9};

    // sort(nums.begin(),nums.end());

    // for (auto &&i : nums)
    // {
    //     cout << i << ' ';
    // }
    

    // vector <int> nums;
    // nums = {3,1,-2,-5,2,-4};
    // int positive = 0;
    // int negated = 1;

    // // for (int i = 0; i < nums.size(); i++)
    // // {
    // //     if(nums[i] > 0 && positive < nums.size())
    // //     {
    // //         swap(nums[i],nums[positive]);
    // //         positive += 2;

    // //     }
    // //     else if(nums[i] < 0 && negated < nums.size())
    // //     {
    // //         swap(nums[i], nums[negated]);
    // //         negated += 2;
    // //         i--;
    // //     }
    // //     cout << endl;
    // //     for (auto &&i : nums)
    // //     {
    // //         cout << i << " ";
    // //     }
    // // }
    // int i = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] > 0)
    //     {
    //         /* code */
    //     }
        
    // }
    
    




    // cout << endl;
    // cout << endl;
    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }
    



    // vector<vector<int>> nums;
    // nums = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    //     };

    // int rows = nums.size();
    // int cols = nums[0].size();

    // int n = rows*cols;

    // for (auto &&i : nums)
    // {
    //     for (auto &&j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
        
    // }
    
    // cout << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = i+1; j < cols; j++)
    //     {
    //         swap(nums[i][j], nums[j][i]);
    //     }
        
    // }
    // cout << endl;
    // for (auto &&i : nums)
    // {
    //     for (auto &&j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
        
    // }
    


    // int num = 6;
    // for (int rows = 0; rows < num; rows++)
    // {
    //     if (rows == 0 || rows == num-1)
    //     {
    //         for (int col = 0; col < num; col++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         for (int col = 0; col < num; col++)
    //         {
    //             if(col == 0 || col == num-1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
                
    //         }
            
    //     }
        
        
    //     cout << endl;
    // }
    // for (int row = 0; row < num; row++)
    // {
    //     cout << "* "<< endl;
    // }
    

    // vector <int> nums;
    // // nums = {3,1,4,2};
    // // nums = {4,0,5,7};
    // nums = {2,0,3,4,1,3};

    // int even = 0;
    // int odd = 1;
    // int n = nums.size();
    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // while (even < n && odd < n)
    // {
    //     if (nums[even] % 2 == 0)
    //         even += 2;
    //     else if (nums[odd] % 2 == 1)
    //         odd += 2;
    //     else
    //     {
    //         swap(nums[odd], nums[even]);
    //         odd +=2;
    //         even +=2;
    //     }

        
    // }
    // cout << endl;
    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }

    // vector <int> nums;

    // nums = { 1,2,3, 4,5,11,23,1,2,31,1,3,1331,22};

    // int even = 0;

    // int n = nums.size();

    // for (int i = 0; i < n && even < n; i++)
    // {
    //     if (nums[i] %2 == 0)
    //     {
    //         swap(nums[i],nums[even]);
    //         even++;
    //     }
        
    // }
    
    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }
    

    // vector<int> nums;
    // nums = {3,1,-2,-5,2,-4};

    // int n = nums.size();
    // int positive = 0;
    // int negative = 1;
    // for (auto &&i : nums)
    // {
    //     cout << i << "  ";
    // }
    // while (positive < n && negative < n)
    // {
    //     if (nums[positive] > 0)
    //     {
    //         positive +=2;
    //     }
    //     else if (nums[negative] < 0)
    //     {
    //         negative += 2;
    //     }
    //     else
    //     {
    //         swap(nums[negative], nums[positive]);
    //     }
    // }
    // cout << endl;
    // for (auto &&i : nums)
    // {
    //     cout << i << "  ";
    // }

    // vector <int> nums;

    // nums = {1,2,3,4,5,6,7};

    // int k = 1;

    //     for (int i = 0; i < k; i++)
    // {
    //     swap(nums[i], nums[i+k%k]);
    // }
    // for (auto &&i : nums)
    // {
    //     cout << i<< " ";
    // }
    
    
    
    // vector <int> nums;
    
    // nums = {1,2,3,4,5,6,7};
    // int n = nums.size();
    // int k = 3;
    // k = k % n;


    // reversed(nums,0, n-1);

    // reversed(nums,0,k-1);
    // reversed(nums,k,n-1);

    // for (auto &&i : nums)
    // {
    //     cout << i << " ";
    // }

    // vector <int> nums;

    // nums = {3,1,-2,-5,2,-4};
    // int n = nums.size();
    // int positive = 0, negative = 1;
    // vector <int> temp(n);
    
    // for (int i = 0; i < n; i++)
    // {
    //     if(nums[i] > 0 )
    //     {
    //         temp[positive] = nums[i];
    //         positive += 2;
    //     }
    //     else if(nums[i] < 0 )
    //     {
    //         temp[negative] = nums[i];
    //         negative += 2;
    //     }
    // }
    // nums = temp;
    // for (auto &&i : temp)
    // {
    //     cout << i << ' ';
    // }

    // vector <int> nums;
    // nums = {1,2};

    // int n = nums.size();
    // int start = 0;
    // int end = n-1;
    // int index =-1;

    // while(start <= end)
    // {
    //     int mid = start + (end-start)/2;

    //     if (start == end)
    //     {
    //         index = start;
    //         break;
    //     }
    //     else if(mid+1 < n && nums[mid] > nums[mid+1])
    //     {
    //         index =  mid;
    //         break;
    //     }
    //     else if (nums[mid] < nums[mid-1] && mid-1 >= 0)
    //     {
    //         index = mid-1;
    //         break;
    //     }
    //     else if(nums[start] > nums[mid])
    //     {
    //         end = mid - 1;
    //     }
    //     else 
    //     {
    //         start = mid +1;
    //     }

    // }
    // cout << index << " ";


    // vector <int> nums,nums2;

    // nums = {1,2};
    // nums2 = {3};
    // int n = nums.size();
    // int m = nums2.size();
    // int k = n+m;
    // vector <int> nums3(k);


    // int num = 5;
    // int count  = 1;

    // int start = 1;
    // int end = num;
    // int rows = 0;

    // while (start <= end)
    // {
    //     int mid = start + (end-start)/2;
    //     int ans = mid*(mid+1)/2;
        
    //     if (ans == num)
    //     {
    //         rows = mid;
    //     }
    //     else if (ans < num)
    //     {
            
    //     }
        
        
    // }
    

    // int num = 3;

    // int sum = digitSquare(num);
    // while(num != 1)
    // {
    //     int sum = digitSquare(num);
    //     cout << sum << "   ";
    //     num = sum;
    // }


    // int n = 3;

    // while (n)
    // {
    //     if (n % 2 == 0)
    //     {
    //         n /= 2;
    //     }
    //     else
    //     {
    //         break;
    //     }
        
    // }
    // cout << n ;
    
    // int n = 1234;
    // int i = 2;
    // int sum = 0;
    // while(n != 0)
    // {
    //     int digit = n%10;
    //     if(i % 2 == 0)
    //     {
    //         sum += digit;
    //     }
    //     else if(i%2 == 1)
    //     {
            
    //         sum += -digit;
    //     }
    //     i++;
    //     n/= 10;

    //     // cout << digit << "   ";
    //     // cout << sum << "   ";
    // }
    // cout << sum;


    // vector <int> nums;
    // nums = {0,1,1};
    // int num = 0;
    // vector <bool> ans;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     num = num*2 + nums[i];
    //     cout << num << endl;


    //     if (num%5==0)
    //         ans.push_back(true);
    //     else
    //         ans.push_back(false);
    // }
    // for (auto &&i : ans)
    // {
    //     cout << i << "  ";
    // }


    // vector <vector<int>> nums;

    // // nums = {
    // //     {1,3},
    // //     {2,2}
    // // };

    // nums = {
    //     {9,1,7},
    //     {8,9,2},
    //     {3,4,6}
    // };
    // int nsq = nums.size();
    // int n = nsq*nsq;
    // int sum = n*(n+1)/2;

    // int cSum = 0;

    // for (auto &&i : nums)
    // {
    //     for (auto &&j : i)
    //     {
    //         cSum += j; 
    //     }
        
    // }
    // cout << sum - cSum;


    // int rowCount = 15;
    // vector<vector <int>> nums(rowCount);

    // for (int rows = 0; rows < rowCount; rows++)
    // {
    //     for (int cols = 0; cols < rows+1; cols++)
    //     {
    //         if (rows == 0)
    //         {
    //             nums[rows].push_back(1);
    //         }
    //         else if (cols == 0 || cols == rows)
    //         {
    //             nums[rows].push_back(1);
    //         }
    //         else
    //         {
    //             nums[rows].push_back( nums[rows-1][cols-1] + nums[rows-1][cols]  );
                
    //         }
    //     }
    // }

    // for (auto &&i : nums)
    // {
    //     for (auto &&j : i)
    //     {
    //         cout << j << "   ";
    //     }
    //     cout << endl;
        
    // }

    // int rowCount = 5;

    // vector<vector<int>> nums(rowCount+1);
    
    // for (int rows = 0; rows < rowCount+1; rows++)
    // {
    //     for (int cols = 0; cols < rows+1; cols++)
    //     {
    //         if (rows == 0)
    //         {
    //             nums[rows].push_back(1);
    //         }
    //         else if (cols == 0 || cols == rows)
    //         {
    //             nums[rows].push_back(1);
    //         }
    //         else
    //         {
    //             nums[rows].push_back(nums[rows-1][cols-1]+ nums[rows-1][cols]);
    //         }
    //     }
    // }

    // for (auto &&i : nums)
    // {
    //     for (auto &&j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
        
    // }
    
    // string s1 = "kelb", s2 = "kelb";
    // string s1 = "bank", s2 = "kanb";

    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // cout << (s1 == s2) ;
    
    // vector<int> nums;

    // // nums = {2,0,2,1,1,0,2,2,2,2,2,1,1,1,1,1,1,1,1,2,2,0,0,0,0,0,0,0,0,0,0,0,1,2,1,1,1,1,1,0,0,0,0,0,0,0,0,0,2,2,2,2,1,2,1,2};
    // // nums = {2,0,2,1,0,1};
    // nums = {2,0,1};

    // int n = nums.size();

    // int left = 0; int right = n-1;
    // int i = 0;
    // while (i < right)
    // {
    //     if (nums[i] == 0)
    //     {
    //         swap(nums[i],nums[left]);
    //         left++;
    //         i++;

    //     }
    //     else if (nums[i] == 2)
    //     {
    //         swap(nums[i], nums[right]);
    //         right--;
    //     }
    //     else
    //     {
    //         i++;
    //     }
        
    // }
    

    // for (auto &&i : nums)
    // {
    //     cout << i << "  ";
    // }


    // vector<int> nums;
    // nums = {3,0,1};
    // int n = nums.size();
    // int sum = n*(n+1)/2;
    // int summ=0;
    // for (auto &&i : nums)
    // {
    //     summ+=i;
    // }
    // cout << sum - summ;



    // vector<int> nums;

    // // nums = {3,0,1};
    // // nums = {9,5,3,4,2,1,6,7,0};
    // nums = {0,1};
    // sort(nums.begin(),nums.end());
    // int xo = 0;

    // for (int i = 0; i <= nums.size(); i++)
    // {
    //     xo = xo^i;
    // }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     xo = xo^nums[i];
    // }
    // cout << xo;

    // vector <int> nums;
    // nums= {1,2,3,4,-1,-2,-3,-6,8,65,654,6,-6,-3,-765};

    // int n = nums.size();
    // int left = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (nums[i] < 0)
    //     {
    //         swap(nums[left], nums[i]);
    //         left++;
    //     }
        
    // }
    
    // for (auto &&i : nums)
    // {
    //     cout << i << "  ";
    // }
    


    // vector <int> nums;
    // nums = {13};
    // // Output: [5,7,2,3,2]
    // int n = nums.size();
    // vector <int> original(n);
    
    // for (int i = 0; i < n; i++)
    // {
    //     original[i] = nums[i]^nums[i-1];
    // }

    // for (auto &&i : original)
    // {
    //     cout << i << "  ";
    // }

//     vector <int> nums;
//     // nums = {[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]};
//     // nums = {5,20,66,1314};
//     nums = {-1};
//     // nums = {-2,-1,-1,1,2,3};
//     // nums = {-3,-2,-1,0,0,1,2};

//     int n = nums.size();

//     int start = 0; int end = n-1;
//     int neg = -1;
//     int pos = -1;
//     int totalneg= 0,totalpos = 0;

//     while (start<=end)
//     {
//         int mid = start + (end-start) /2;
//         if (nums[mid] < 0)
//         {
//             neg = mid;
//             start = mid +1;
//         }
//         else
//             end = mid - 1;
        
//     }
//     start = 0,  end = n-1;
//     while (start<=end)
//     {
//         int mid = start + (end-start) /2;
//         if (nums[mid] > 0)
//         {
//             pos = mid;
//             end = mid-1;
//         }
//         else
//             start = mid + 1;
        
//     }

//    totalneg = neg +1;
//    if (pos != -1) totalpos = n - pos;

//    cout << neg << "   " << pos << "   "; 
//    cout << totalneg << "   " << totalpos << "   "; 
    


    // // cout << ((1^2^3^4^5^6^7^8^9)^(9^1^7^8^9^2^3^4^6));
    // cout << ((1^2^3^4)^(1^2^3^3));

    // vector <int> nums;

    // // nums = {0,1,1,1,1,1,0,0,0,0,1,1,1,0};
    // nums = {0,0,1,1,1};
    // int n = nums.size();
    // int zero = 0;
    // int one = n -1;
    
    // while (zero < one)
    // {
    //     if (nums[zero] == 0)
    //     {
    //         zero++;
    //     }
    //     else if (nums[one] == 1)
    //     {
    //         one--;
    //     }
    //     else
    //     {
    //         swap(nums[zero],nums[one]);
    //     }
    // }
    // for (auto &&i : nums)
    // {
    //     cout << i << "   ";
    // }
    
    // vector <int> nums;
    // nums = {2,1,4,3,3};

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int index = abs(nums[i]);
    //     if (nums[index] < 0)
    //     {
    //         cout << index << " is the duplicate ";
    //         break;
    //     }
    //     else
    //     {
    //         nums[index] *= -1;
    //     }
        
        
    // }
    // while (nums[0] != nums[nums[0]])    
    // {
    //     swap(nums[nums[0]],nums[0]);
    // }
    // cout << nums[0];

    // vector<int> nums;
    // nums = {1,2,3,4,5,5,5,55,5,6,7};

    // unordered_map<int,int> map;

    // for (auto &&i : nums)
    // {
    //     map[i]++;
    // }
    // for (auto &&i : nums)
    // {
    //    cout << map[i] << "   ";
    // }

    // vector <int>nums;
    // nums = {1,2,3,4,5};
    // // nums = {1,2,3,4,5,6,7,8};
    // // nums = {5};
    // vector <int>nums2(nums.size());
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums.size()-1; j++)
    //     {
    //         nums2[j] = nums[j+1] + nums[j];
    //     }
    //     for (auto &&i : nums2)
    //     {
    //         cout << i << "  ";
    //     }
    //     cout << endl;
    //     nums = nums2;
    //     nums2.clear();
    // }
    // int n, val;
    //  vector<int>temp, arr = nums; 

    // while(arr.size() > 1)
    //     {
    //         n = arr.size();
    //         for(int i=0;i<n-1;i++)
    //         {
    //             val = arr[i] + arr[i+1];
    //             temp.push_back(val%10);
    //         }
    //         arr = temp;
    //         temp.clear();
    //     }   
    
    // cout << endl;
    // for (auto &&i : arr)
    // {
    //     cout << i << "  ";
    // }
    
    // int num = 20;
    // unsigned long long int fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *= i;
    // }
    // cout << fact;


    // vector <vector <int>> nums;

    // nums = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };


    // int rows = nums.size();
    // int cols = nums[0].size();
    
    // int total = rows*cols;
    // int k = 0;

    // while (k < total)
    // {
    //     for (int i = 0; i < cols; i++)
    //     {
    //         cout << nums[k][i] << "   ";
    //     }
        
        
        
    // }
    

    // vector <int> nums;
    // vector <int> ans;

    // nums = {2,3,4,7,11};

    // int n = nums.size();
    // int k = 9;
    // for (int i = 0; i <= 9 && i> 0; i++)
    // {
    //     if (i != nums[i])
    //     {
    //         ans.push_back(i);
    //         i--;
    //     }
    // }
    // for (auto &&e : ans)
    // {
    //     cout << e << ' ';
    // }



    // // clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1

    // int operation = 0;

    // int n = 10;

    // int clumsy = n;
    // int fact = 1;
    // for (int i = n-1; i >= 1; i--)
    // {
    //     switch (operation%4)
    //     {
    //     case 0:
    //         clumsy*=i;
    //         operation++;
    //         break;
    //     case 1:
    //         clumsy/=i;
    //         operation++;
    //         break;
    //     case 2:
    //         clumsy+=i;
    //         operation++;
    //         break;
    //     case 3:
    //         clumsy-=i;
    //         operation++;
    //         break;
    //     }
    //     cout << clumsy<< " ";
    // }


    // vector <vector <int>> nums;
     
    // nums = {

    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };
    // // nums = {

    // //     {11, 12 ,13, 14, 15},
    // //     {16, 17 ,18, 19, 20},
    // //     {21, 22 ,23, 24, 25},
    // //     {26, 27 ,28, 29, 30}
    // // };
    // vector<int> ans;


    // int m = nums.size();
    // int n = nums[0].size();

    // int totalRows = 9;

    // int counter = 0;
    // int startcol = 0;
    // int endcol = n -1;
    // int startrow = 0;
    // int endrow = m-1;
    // // cout << startrow << "  " << endrow<< "   " << startcol << "  " << endcol << "   ";
    // while (counter < totalRows)
    // {
    //     for (int i = startcol; i <= endcol && counter < totalRows; i++)
    //     {
    //         cout << nums[startrow][i] << "  ";
    //         ans.push_back(nums[startrow][i]);
    //         counter++;
    //     }
    //     startrow++;
    //     for (int i = startrow; i <= endrow && counter < totalRows; i++)
    //     {
    //         cout << nums[i][endcol] << "  ";
    //         ans.push_back(nums[i][endcol]);
    //         counter++;
    //     }
    //     endcol--;
    //     for (int i = endcol; i >= startcol && counter < totalRows; i--)
    //     {
    //         cout << nums[endrow][i] << "  ";
    //         ans.push_back(nums[endrow][i]);
    //         counter++;
    //     }
    //     endrow--;
    //     for (int i = endrow; i >= startrow && counter < totalRows; i--)
    //     {
    //         cout << nums[i][startcol] << "  ";
    //         ans.push_back(nums[i][startcol]);
    //         counter++;
    //     }
    //     startcol++;
        
    // }

    // // for (auto &&i : ans)
    // // {
    // //     cout << i << " ";
    // // }



    // vector<int> ans;





    // // int m = nums.size();
    // // int n = nums[0].size();
    // int n = 4;
    // int totalRows = n*n;

    // int counter = 0;
    // int startcol = 0;
    // int endcol = n -1;
    // int startrow = 0;
    // int endrow = n-1;
    // // cout << startrow << "  " << endrow<< "   " << startcol << "  " << endcol << "   ";
    // vector<vector<int>>nums(n,vector<int>(n));
    // while (counter < totalRows)
    // {
    //     for (int i = startcol; i <= endcol && counter < totalRows; i++)
    //     {
    //         // cout << nums[startrow][i] << "  ";
    //         // ans.push_back(nums[startrow][i]);
    //         nums[startrow][i] = counter+1;
    //         counter++;
    //     }
    //     startrow++;
    //     for (int i = startrow; i <= endrow && counter < totalRows; i++)
    //     {
    //         // cout << nums[i][endcol] << "  ";
    //         // ans.push_back(nums[i][endcol]);
    //         nums[i][endcol] = counter+1;

    //         counter++;
    //     }
    //     endcol--;
    //     for (int i = endcol; i >= startcol && counter < totalRows; i--)
    //     {
    //         // cout << nums[endrow][i] << "  ";
    //         // ans.push_back(nums[endrow][i]);
    //         nums[endrow][i] = counter+1;
    //         counter++;
    //     }
    //     endrow--;
    //     for (int i = endrow; i >= startrow && counter < totalRows; i--)
    //     {
    //         // cout << nums[i][startcol] << "  ";
    //         // ans.push_back(nums[i][startcol]);
    //         nums[i][startcol] = counter+1 ;
    //         counter++;
    //     }
    //     startcol++;
        
    // }

    // for (auto &&i : nums)
    // {
    //     for (auto &&jk : i)
    //     {
    //         cout << jk << "  "; 
    //     }
    //     cout << endl;
        
    // }
    


    // vector <vector<int>> nums;

    // nums = {

    //     {1,2,3,4},
    //     {5,1,2,3},
    //     {9,5,1,2}
    // };


    // for (int rows = 0; rows < nums.size(); rows++)
    // {
    //     for (int cols = 0; cols < nums[rows].size(); cols++)
    //     {
    //         if (nums[rows][cols] != nums[rows+1][cols+1] && rows-1 >=0 && cols -1 >= 0)
    //         {
    //             cout << "nononono";
    //         }
            
            
    //     }
        
    // }


    // int num = 1000;
    // int k = 200;

    // int start = 0; int end = num;
    // int ans = 0;

    // while (start<=end)
    // {
    //     int mid = start + (end-start) / 2;
    //     if (mid*k == num)
    //     {
    //         cout << mid << "  ";
    //         break;
    //     }
    //     else if (mid * k > num)
    //     {
    //         end = mid -1;
    //     }
    //     else
    //     {
    //         ans = mid;
    //         start = mid + 1;
    //     }
    
    // }
    // cout << ans << ' ';




    // vector<int> nums;
    
    // // nums = {20,10,30,50,40,70,60};
    // nums = {20};
    
    // int start = 0; int end = nums.size()-1;
    // int target = 20;
    
    // while (start <= end)
    // {
    //     int mid = start + (end-start)/2;
        
    //     if (nums[mid] == target)
    //     {
    //         cout << "Found at index: " << mid << " ";
    //         break;
    //     }
        
        
    //     else if (mid -1 >= 0 && nums[mid-1] == target)
    //     {
    //         cout << "Found at index: " << mid-1 << " ";
    //         break;
    //     }
        
        
    //     else if (mid + 1 < nums.size() && nums[mid+1] == target)
    //     {
    //         cout << "Found at index: " << mid+1 << " ";
    //         break;
    //     }   
        
        
    //     else if(target > nums[mid])
    //     {
    //         start = mid + 2; 
    //     }
    //     else 
    //     {
    //         end = mid - 2;
    //     }
    // }



    // vector<int> nums;
    // nums = {6,3,78,9,2,8,9,4,2,6,8,76};

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i+1; j < nums.size(); j++)
    //     {
    //         swap(*min_element(nums.begin(),nums.end()), nums[j]);
    //     }
        
    // }
    // for (auto &&i : nums)
    // {
    //     cout << i << "   ";
    // }


    
    
    





    

    

    






    
    
    
    
    



    
    











    
    
    
    

    
    
    
    



    
    
    
    
    




    


    
    


    



    
    
    

    





    
    
    





    

    



















    return 0;
}


 
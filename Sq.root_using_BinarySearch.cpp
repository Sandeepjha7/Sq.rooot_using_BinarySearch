#include<iostream>
using namespace std;

long long int binarySearch(int n)
{   
    int start=0;
    int end=n;
    long long int mid = start + (end-start)/2 ;
    long long int ans = -1;
    while(start<=end)
    {
        long long int square=mid*mid;

        if(square == n)
           return mid ;
        else if(square > n)
           end = mid-1;
        else if(square < n)
        {
          ans = mid;
          start = mid+1;
        }
        mid = start + (end-start)/2 ;
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    
    long long int Square_root=binarySearch(num);
    cout<<" The Square root of the given number is "<<Square_root<<endl;

    return 0;
}

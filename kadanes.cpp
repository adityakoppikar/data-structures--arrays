#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int kadanes(int a[10], int n)
{
    int max_sum = 0;
    int curr_sum = 0;

    for(int i=0; i<n; i++)
       {
        curr_sum = curr_sum + a[i];

        if(curr_sum > max_sum )
         max_sum = curr_sum;
        
        if(curr_sum < 0)
         curr_sum = 0;
       }

    return max_sum;

}

int main()
{
    int a[10], n;
    
    cout<<"enter size of array"<<endl;
    cin>>n;
    
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<"largest sum of possible subarray is "<<kadanes(a, n);

    return 0;
}
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;


int max_count(int arr[10], int n)
{
    int count=0, count_curr=0;

    for(int i=0; i<n; i++)
    {
        int temp = arr[i];

        for(int j=i+1; j<n; j++)
        {
            if(arr[j] == temp)
                count_curr++;
        }


        if(count_curr>count)
            count = count_curr;
    }


    return count_curr;
}





int main()
{
    int arr[10], n;

    cout<<"enter size of array"<<endl;
    cin>>n;

    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];


     cout<<"max repeating times = "<<max_count(arr, n);

     return 0;
}

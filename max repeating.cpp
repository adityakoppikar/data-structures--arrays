#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;


int max_count(int arr[10], int n)
{
   int ans_index=0;
   int count = 1;

   for(int i=1; i<n; i++)
   {
    if(arr[i] == arr[ans_index])
        count++;
    else
        count--;

    if(count == 0)
    {
        ans_index=i;
        count = 1;
    }
   }

   return arr[ans_index];
}



int main()
{
    int arr[10], n;

    cout<<"enter size of array"<<endl;
    cin>>n;
    
    

    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];


     cout<<"max repeating element = "<<max_count(arr, n);

     return 0;
}

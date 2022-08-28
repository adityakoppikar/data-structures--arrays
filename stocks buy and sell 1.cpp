#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

stock_profits(int a[10], int n)
{
    int curr_profit = 0, max_profit = 0;
    for(int i=0; i<n; i++)                        //space = 1 , time = n^2
    {
        for(int j=0; j<n; j++)
         {
            curr_profit = a[i]-a[j];

            if(curr_profit > max_profit)
                max_profit = curr_profit; 
         }
    }

    return max_profit;

}


stock_profits_optimised(int a[10], int n)
{
    int min_sofar = a[0] , max_profit = 0, curr_profit = 0;
    
    for(int i=1; i<n; i++)
    {
        if(a[i] < min_sofar)
            min_sofar = a[i];

        curr_profit = a[i] - min_sofar;          //space = 1 , time = n

        if(curr_profit > max_profit)
            max_profit = curr_profit;
    }

    return max_profit;
}                                                      



int main()
{
    int a[10], n;

    cout<<"enter number of days "<<endl;
    cin>>n;
    
    

    cout<<"enter price of stocks on each day "<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];


     cout<<"maximum profit that can be made = "<< stock_profits_optimised(a, n);

     return 0;
}
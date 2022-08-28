#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;



int sum_natural(int n)
{

    if(n == 1)
    return 1;

    return n + sum_natural(n-1);
}

int main()
{
    int a;

    cout<<"enter the last number"<<endl;
    cin>>a;

    cout<<"sum of natural numbers up-to "<<a<<" is "<<sum_natural(a);

    return 0;
}

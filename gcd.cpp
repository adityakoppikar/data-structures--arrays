#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;



int fast_power(int a, int b)
{
    int res=1;

    for(int i=1; i<=b; i++)
    {
        res = res*a;

    }

    return res;
}


int main()
{
    int a,b;

    cout<<"enter base and  exponent"<<endl;
    cin>>a>>b;

    cout<<a<<" to the power "<<b<<" is "<<fast_power(a, b);

    return 0;
}

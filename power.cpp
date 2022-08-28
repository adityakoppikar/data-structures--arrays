#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;


int power(int a, int b)
{
    if(b == 0)
        return 1;

    return a*power(a, b-1);
}



int main()
{

    int a,b;

    cout<<"enter the base and exponent"<<endl;
    cin>>a>>b;

    cout<< a <<" to the power  "<< b <<" is "<<power(a, b);

    return 0;
}

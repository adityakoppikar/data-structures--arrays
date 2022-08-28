#include<iostream>
#include<iomanip>
#include<conio.h>
#include <cstring>
using namespace std;


void sieve_of_eratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<=n; p++)
    {
        if(prime[p] == true)
        {
            for(int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    for(int p=2; p<=n; p++)
        if(prime[p])
          cout<< p <<" ";


}

int main()
{
    int n;
    cout<<"enter a range :"<<endl;
    cin>>n;

    cout<<"following are the prime numbers less than or equal to "<<n<<endl;

    sieve_of_eratosthenes(n);

    return 0;
}

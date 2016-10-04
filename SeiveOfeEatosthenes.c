/*
->ME:
MOHAMMAD JAHIDUL ALAM
NOAKHALI SCIENCE AND TECHNOLOGY UNIVERSITY
DEPARTMENT OF CSTE

->REQUIREMENTS:

for c program use header 
#include <stdio.h>
#include <string.h>
here using "memset" under "string.h"
memset declaration
memset(str_name,fill_value,how_long_fill);
*/


#include <iostream>
#include <cstring>
using namespace std;

/*getting prime no using sieve of eratosthenes*/
void getprime(int userno)
{
    bool prime[userno+1]; // bool array for prime no if array true then this index is prime
    memset(prime,true,sizeof(prime)); // let every value untill n is prime

/*
this loop for sqrt(userno)
because if there is no factorial in sqrt(userno)
then there is no prime.
condition for -> sqrt(userno) == p*p <=userno
*/
    for(int p = 2;p*p<=userno;p++) 
    {
        if(prime[p]== true)
        {
            //all factorial of p is false
            //for example 2->4 , 6 , 8
            //3->6,9,12...
            for(int i = p*2; i <= userno; i+= p)
            {
                prime[i] = false;
            }
        }
    }
    for(int i=0;i<=userno;i++)
        //print the true value
    {
        if(prime[i] == true)
            cout<<i<<endl;
    }

}
void main()
{
    cout<<"enter the no\n";
    int userno;
    cin>>userno; //get prime no
    getprime(userno); //pushing the value in algorithm
}

/*
->ME:
MOHAMMAD JAHIDUL ALAM
NOAKHALI SCIENCE AND TECHNOLOGY UNIVERSITY
DEPARTMENT OF CSTE

->REQUIREMENTS:
for c program use header
#include <stdio.h>

CATEGORY :- ADHOC
*/

#include <iostream>
using namespace std;
int joseps(int n , int k)
{
    if(n == 1) return 1;
    else
        return (joseps(n-1,k)+k-1)%n+1;
        //GET THE POSITION
        //IF U DONT KNOW THE ALGORITHM 
        //PLS CHECK GEEKSFORGEEKS WEBSITE
}
int main()
{
    int test , n ,k , m = 0;
    cin>>test; // GETTING TEST CASE
    while(test--)
    {
        cin>>n>>k; //GETTING THE SOLDIER AND THEIR STEPS
        printf("Case %d: %d\n",++m,joseps(n,k));

    }
    return 0;
}

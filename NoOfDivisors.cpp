/*
->ME:
MOHAMMAD JAHIDUL ALAM
NOAKHALI SCIENCE AND TECHNOLOGY UNIVERSITY
DEPARTMENT OF CSTE

->REQUIREMENTS:
for c program use header
#include <stdio.h>
#include <math.h>
use array instead of vector

CATEGORY :- NUMBER THEORY
*/
//no of divisors without sorting
// v.1.0.0

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <int> divisor;
void main()
{
    cout<<"enter a number \n";
    int no;
    cin>>no; //getting the number 
    int root_of_no = sqrt(no);
    for(int i = 2;i <= root_of_no;i++)
    {
        if(no%i == 0){
            divisor.push_back(i);
            divisor.push_back(no/i);
        }
    }
    for(int i = 0;i<divisor.size();i++)
    {
        cout<<divisor[i]<<endl;
    }
}

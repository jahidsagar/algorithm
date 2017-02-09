/*
<-- polynomial multiplication -->

best is using list.
i applied in 2 dimensional array
for test.

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

//  if u want more precise
//  ans then sort this 
//  basis on their co-efficient

void main(){

    int PolyPart , PlicandLength , PlierLength  , i ,j ;

    cout<<"----------------------------------------------"<<endl;
    cout<<"            polynomial multiplication      "<<endl;
    cout<<"----------------------------------------------"<<endl;

    cout<<"enter the polynomial part : ";
    cin>>PolyPart;

    PlicandLength = PolyPart; // taking the multiplicand array length

    int Multiplicand[PolyPart][2];
    for(i = 0;i<PolyPart ;i++){ // getting multiplicand value

        cout<<"enter the co-efficient : ";
        cin>>Multiplicand[i][0];
        cout<<"enter the power : ";
        cin>>Multiplicand[i][1];


    }
    cout<<endl<<"enter the polynomial part : ";
    cin>>PolyPart;

    PlierLength = PolyPart; // taking the multiplier length

    int Multiplier[PolyPart][2];
    for(i = 0;i<PolyPart ;i++){ // taking the multiplier value

        cout<<"enter the co-efficient : ";
        cin>>Multiplier[i][0];
        cout<<"enter the power : ";
        cin>>Multiplier[i][1];


    }

    int result[100][2] , value = 0;

    cout<<endl;

    for(i = 0;i<PlierLength;i++){

        for(j= 0;j<PlicandLength;j++){

            result[value][0] = Multiplier[i][0] * Multiplicand[j][0];
            result[value][1] = Multiplier[i][1] + Multiplicand[j][1];

            value++;
        }
    }

    for(i = 0;i<value;i++){

            int pow = result[i][1];

        for(j= i+1;j<value;j++){

                if(pow == result[j][1]){

                    result[i][0] += result[j][0];
                    result[j][0] = 0;

                }

        }
    }

    for(i = 0;i<value;i++){

        if(result[i][0] != 0){
            cout<<result[i][0]<<",";
            cout<<result[i][1]<<endl;
        }
    }

}

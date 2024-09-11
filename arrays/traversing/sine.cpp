/*
    Algorithm for Sine Value
    ------------------------
    1. Set k = LB.
    2. Repeat steps 3 and 4 while k <= UB.
    3. Apply sine function to LA[k].
    4. Set k = k + 1.
    5. Exit.
*/

#include<iostream>
#include<cmath> 
using namespace std;

void sine(int LA[], int LB, int UB){
    int k = LB;
    while (k <= UB){
        double sineValue = sin(LA[k] * M_PI / 180.0); 
        cout << "Sine of " << LA[k] << " degrees: " << sineValue << endl;
        k = k + 1; 
    }
}

int main(){
    int LA[] = {10, 20, 5, 30, 25};  
    int LB = 0;  
    int UB = 4; 

    sine(LA, LB, UB);

    return 0;
}

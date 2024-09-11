/*
    Algorithm for minimum Value
    ---------------------------
    1. Set min = LA[LB] (initialize the min with the first element).
    2. Set k = LB + 1.
    3. Repeat steps 4 and 5 while k <= UB.
    4. If LA[k] < min, then set min = LA[k].
    5. Set k = k + 1.
    6. Exit.

*/

#include<iostream>
using namespace std;

int minimum_value(int LA[], int LB, int UB){
    int mn = LA[LB];
    int k = LB + 1;
    while (k <= UB){
        if (LA[k] < mn){
            mn = LA[k];
        }
        k = k + 1;
    }
    return mn;
}

int main(){
    int LA[] = {10, 20, 5, 30, 25};
    int LB = 0;
    int UB = 4;
    
    int mn = minimum_value(LA, LB, UB);
    cout << "minimum value in the array LA is : " << mn << endl;
    
    return 0;
}

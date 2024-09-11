/*
    Algorithm for Maximum Value
    ---------------------------
    1. Set max = LA[LB] (initialize the max with the first element).
    2. Set k = LB + 1.
    3. Repeat steps 4 and 5 while k <= UB.
    4. If LA[k] > max, then set max = LA[k].
    5. Set k = k + 1.
    6. Exit.

*/

#include<iostream>
using namespace std;

int maximum_value(int LA[], int LB, int UB){
    int mx = LA[LB];
    int k = LB + 1;
    while (k <= UB){
        if (LA[k] > mx){
            mx = LA[k];
        }
        k = k + 1;
    }
    return mx;
}

int main(){
    int LA[] = {10, 20, 5, 30, 25};
    int LB = 0;
    int UB = 4;
    
    int mx = maximum_value(LA, LB, UB);
    cout << "maximum value in the array LA is : " << mx << endl;
    
    return 0;
}

/*
    Algorithm for Average Value
    ---------------------------
    1. Set sum = 0.
    2. Set k = LB.
    3. Repeat steps 4 and 5 while k <= UB.
    4. Set sum = sum + LA[k].
    5. Set k = k + 1.
    6. Exit.
    7. Set avg = sum / (UB - LB + 1).
*/

#include<iostream>
using namespace std;

int Average(int LA[], int LB, int UB){
    int sum = 0;
    int k = LB;
    while (k <= UB){
        sum = sum + LA[k];
        k = k + 1;
    }
    int avg = sum / (UB - LB + 1);
    return avg;
}

int main(){
    int LA[] = {10, 20, 5, 30, 25};
    int LB = 0;
    int UB = 4;
    
    int avg = Average(LA, LB, UB);
    cout << "Average in the array LA is : " << avg << endl;
    
    return 0;
}

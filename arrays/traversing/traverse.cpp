/*
    Algorithm for Traversing an Array
    ---------------------------------
    1. Set k := LB (lower bound).
    2. Repeat steps 3 and 4 while k <= UB (upper bound).
    3. Apply the process to LA[k] (where LA[k] is the current element).
    4. Set k := k + 1.
    5. If k > UB, exit the loop.
    6. Exit.
*/

#include <iostream>
using namespace std;

void traverse(int LA[], int LB, int UB) {
    int k = LB;
    while (k <= UB) {
        cout << "Element at index " << k << ": " << LA[k] << endl;
        k = k + 1;
    }
}

int main() {
    int LA[] = {10, 20, 30, 40, 50};  
    int LB = 0;  
    int UB = 4; 

    traverse(LA, LB, UB);

    return 0;
}

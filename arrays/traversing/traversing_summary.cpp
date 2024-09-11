#include <iostream>
#include <cmath>
using namespace std;

// sine value
void sine(int LA[], int LB, int UB){
    int k = LB;
    while (k <= UB){
        double sineValue = sin(LA[k] * M_PI / 180.0); 
        cout << "Sine of " << LA[k] << " degrees: " << sineValue << endl;
        k = k + 1; 
    }
}

// total
int total(int LA[], int LB, int UB){
    int sum = 0;
    int k = LB;
    while (k <= UB){
        sum = sum + LA[k];
        k = k + 1;
    }
    return sum;
}

// average
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

// minimum value
int minimum(int LA[], int LB, int UB){
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

// maximum value
int maximum(int LA[], int LB, int UB){
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

// traversing
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

    // traversing
    traverse(LA, LB, UB);

    // maximum value
    int mx = maximum(LA, LB, UB);
    cout << "maximum value in the array LA is : " << mx << endl;

    // minimum value
    int mn = minimum(LA, LB, UB);
    cout << "minimum value in the array LA is : " << mn << endl;

    // average
    int avg = Average(LA, LB, UB);
    cout << "Average in the array LA is : " << avg << endl;
    
    // total
    int sum = total(LA, LB, UB);
    cout << "total in the array LA is : " << sum << endl;

    // sine value
    sine(LA, LB, UB);

    return 0;
}
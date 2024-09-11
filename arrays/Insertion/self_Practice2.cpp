#include <iostream>
#include <string>
using namespace std;

void insertAtPosition(string LA[], int &N, int K, string Item) {
    int j = N; 
    while (j >= K) {
        LA[j + 1] = LA[j];
        j--;
    }

    LA[K] = Item;

    N++;
}

int main() {
    const int maxSize = 10;
    string LA[maxSize] = {"Ali", "Hamid", "Karim", "Zahid", "Rahim"};  
    int N = 5;  
    int K = 5;  
    string Item = "Karim"; 
    insertAtPosition(LA, N, K, Item);

    cout << "Array after inserting " << Item << " at position " << K << ": ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    return 0;
}

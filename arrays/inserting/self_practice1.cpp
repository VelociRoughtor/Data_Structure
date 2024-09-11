#include <iostream>
#include <string>
using namespace std;

void insertName(string SA[], int &n, string item, int maxSize) {
    if (n >= maxSize) {
        cout << "Array is full. Cannot insert new item." << endl;
        return;
    }

    int i = n - 1;  
    while (i >= 0 && SA[i] > item) {
        SA[i + 1] = SA[i];
        i--;
    }

    SA[i + 1] = item;
    n++;
}


int main() {
    const int maxSize = 10;
    string SA[maxSize] = {"Ali", "Hamid", "Karim", "Zahid"};
    int n = 4;  
    string item = "Rahim"; 
    insertName(SA, n, item, maxSize);
    cout << "String array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << SA[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void insert(int LA[], int &N, int Item, int maxSize) {
    if (N >= maxSize) {
        cout << "Array is full. Cannot insert new item." << endl;
        return;
    }

    int i = N - 1;  // Start from the end of the array

    // Find the correct position for the new item
    while (i >= 0 && LA[i] > Item) {
        LA[i + 1] = LA[i];
        i--;
    }

    // Insert the item at the correct position
    LA[i + 1] = Item;

    // Update the size of the array
    N++;
}


int main() {
    const int maxSize = 10;
    int LA[maxSize] = {10, 20, 40, 55, 60}; 
    int N = 5;  // Current number of elements in the array
    int Item = 54;  // Item to be inserted

    // Insert 54 into the sorted integer array
    insert(LA, N, Item, maxSize);

    // Print the updated integer array
    cout << "Integer array after insertion: ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    return 0;
}

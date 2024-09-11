/*
    Algorithm for Insertion
    -----------------------
    1. Set j = N (where N is the current number of elements in the array).
    2. Repeat steps 3 and 4 while j >= K:
    3. Set LA[j + 1] = LA[j] (shift elements to the right to make space).
    4. Set j = j - 1.
    5. Set LA[K] = Item (insert the item in the K-th position).
    6. Set N = N + 1 (update the size of the array).
    7. Exit.
*/

#include <iostream>
using namespace std;

void insertion(int LA[], int &N, int K, int Item, int maxSize) {
    if (N >= maxSize) {
        cout << "Array is full" << endl;
        return;
    }

    int j = N;  // Current size of the array

    // Shift elements to the right to make space for the new item
    while (j > K) {
        LA[j + 1] = LA[j];
        j = j - 1;
    }

    // Insert the item at the k-th position
    LA[K] = Item;

    // Update the size of the array
    N = N + 1;
}

int main() {
    const int maxSize = 10;  // Maximum size of the array
    int LA[maxSize] = {10, 20, 30, 40, 50};  // Array with 5 elements
    int N = 5;  // Current number of elements in the array
    int K = 2;  // Position to insert (index 2)
    int Item = 24;  // Item to be inserted

    // Insert 24 into the array
    insertion(LA, N, K, Item, maxSize);

    // Print the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }

    return 0;
}

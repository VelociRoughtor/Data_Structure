#include <iostream>
using namespace std;

void insertAtPosition(int LA[], int &N, int K, int Item) {
    int j = N;  // Current size of the array

    // Shift elements to the right to make space for the new item
    while (j >= K) {
        LA[j + 1] = LA[j];
        j--;
    }

    // Insert the item at the k-th position
    LA[K] = Item;

    // Update the size of the array
    N++;
}

int main() {
    int LA[10] = {10, 20, 30, 40, 50};  // Array with 5 elements
    int N = 5;  // Current number of elements in the array
    int K = 5;  // Position to insert (index 5)
    int Item = 99;  // Item to be inserted

    // Insert 99 into the array at position 5
    insertAtPosition(LA, N, K, Item);

    // Print the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }

    return 0;
}

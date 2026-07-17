#include <iostream>
using namespace std;

int main() {
    int my_array[] = {7, 3, 9, 12, 11};
    int n = 5; // stores the number of elements in the array

    for (int i = 0; i < n - 1; i++) {
        int smallest = i; // assumes the current element is the smallest

        // Finds the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (my_array[j] < my_array[smallest]) {
                smallest = j;
            }
        }

        // Swaps the smallest element with the current element
        int temp = my_array[i];
        my_array[i] = my_array[smallest];
        my_array[smallest] = temp;
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int my_array[] = {7, 3, 9, 12, 11};
    int n = 5; // stores the number of elements in the array

    for (int i = 1; i < n; i++) {
        int current = my_array[i]; // stores the current element
        int j = i - 1; // starts checking from the element before current

        // Moves larger elements one position to the right
        while (j >= 0 && my_array[j] > current) {
            my_array[j + 1] = my_array[j];
            j--;
        }

        // Inserts the current element into the correct position
        my_array[j + 1] = current;
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }

    return 0;
}
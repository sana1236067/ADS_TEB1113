#include <iostream>
using namespace std;

int main() {
    int my_array[] = {7, 3, 9, 12, 11};
    int n = 5; //store num of elements in array

    // Outer loop
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // creates boolean variable called swapped (set to false cuz x num have been swapped)

        // Inner loop
        for (int j = 0; j < n - i - 1; j++) {
            if (my_array[j] > my_array[j + 1]) { 
                int temp = my_array[j]; // stores current num in temp
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = temp;

                swapped = true;
            }
        } // Ends inner loop

        if (!swapped) {
            break;
        }
    } // Ends outer loop

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }

    return 0;
}

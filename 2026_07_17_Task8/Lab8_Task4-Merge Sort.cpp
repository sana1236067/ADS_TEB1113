#include <iostream>
using namespace std;

// Merges two sorted parts of the array
void merge(int my_array[], int left, int middle, int right) {
    //left:first index of the section, middle: seperate left & right sections, right: last index of the section
    int leftSize = middle - left + 1; //calc how many elements are in the left section
    int rightSize = right - middle; //calc how many elements are in the right section

    int leftArray[leftSize]; //temp array to store elements in left sections
    int rightArray[rightSize]; //temp array to store elements in right section

    // Copies elements into the left temporary array
    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = my_array[left + i]; // copies an element from the original array into temp left array
    }

    // Copies elements into the right temporary array
    for (int i = 0; i < rightSize; i++) {
        rightArray[i] = my_array[middle + 1 + i]; // copies an element after the middle position into temp right array
    }

    int i = 0; //store current index of leftarray
    int j = 0; //store current index of rightarray
    int k = left;

    // Compares and merges the two temporary arrays
    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            my_array[k] = leftArray[i];
            i++;
        } else {
            my_array[k] = rightArray[j];
            j++;
        }

        k++;
    }

    // Copies any remaining elements from the left array
    while (i < leftSize) {
        my_array[k] = leftArray[i];
        i++;
        k++;
    }

    // Copies any remaining elements from the right array
    while (j < rightSize) {
        my_array[k] = rightArray[j];
        j++;
        k++;
    }
}

// Divides the array into smaller parts
void mergeSort(int my_array[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(my_array, left, middle);
        mergeSort(my_array, middle + 1, right);

        merge(my_array, left, middle, right);
    }
}

int main() {
    int my_array[] = {7, 3, 9, 12, 11};
    int n = 5; // stores the number of elements in the array

    mergeSort(my_array, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }

    return 0;
}

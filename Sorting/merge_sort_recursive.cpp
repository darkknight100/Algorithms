//
// Created by Vaibhav Gour on 4/3/18.
//

// Merge Sort Implementation

#include <iostream>

using namespace std;

void merge_ascending(int array[], int low, int middle, int high) {

    int left_subarray[middle - low + 1]; // left sorted sub-array
    int right_subarray[high - middle]; // right sorted sub-array.
    int i = 0;
    for (int j = low; j <= middle; j++) {
        left_subarray[i] = array[j];
        i++;
    }
    i = 0;
    for (int j = middle + 1; j <= high; j++) {
        right_subarray[i] = array[j];
        i++;
    }
    i = 0; // initial index of first sub-array.
    int j = 0; // initial index of second sub-array.
    int k = low; // initial index of merged sub-array
    while (i <= middle - low && j <= high - middle - 1) {
        if (left_subarray[i] <= right_subarray[j]) {
            array[k] = left_subarray[i];
            i++;
            k++;
        } else {
            array[k] = right_subarray[j];
            j++;
            k++;
        }
    }
    // copy elements of the left sub-array if there are any.
    while (i <= middle - low) {
        array[k] = left_subarray[i];
        i++;
        k++;
    }
    // copy elements of the right sub-array if there are any.
    while (j <= high - middle - 1) {
        array[k] = right_subarray[j];
        j++;
        k++;
    }
}

void merge_descending(int array[], int low, int middle, int high) {

    int left_subarray[middle - low + 1]; // left sorted sub-array
    int right_subarray[high - middle]; // right sorted sub-array.
    int i = 0;
    for (int j = low; j <= middle; j++) {
        left_subarray[i] = array[j];
        i++;
    }
    i = 0;
    for (int j = middle + 1; j <= high; j++) {
        right_subarray[i] = array[j];
        i++;
    }
    i = 0; // initial index of first sub-array.
    int j = 0; // initial index of second sub-array.
    int k = low; // initial index of merged sub-array
    while (i <= middle - low && j <= high - middle - 1) {
        if (left_subarray[i] >= right_subarray[j]) {
            array[k] = left_subarray[i];
            i++;
            k++;
        } else {
            array[k] = right_subarray[j];
            j++;
            k++;
        }
    }
    // copy elements of the left sub-array if there are any.
    while (i <= middle - low) {
        array[k] = left_subarray[i];
        i++;
        k++;
    }
    // copy elements of the right sub-array if there are any.
    while (j <= high - middle - 1) {
        array[k] = right_subarray[j];
        j++;
        k++;
    }
}

void merge_sort_ascending_order(int array[], int low, int high) {
    if (low < high) {
        int middle = low + (high - low) / 2;

        // sort first and second halves
        merge_sort_ascending_order(array, low, middle);
        merge_sort_ascending_order(array, middle + 1, high);

        merge_ascending(array, low, middle, high);
    }

}

void merge_sort_descending_order(int array[], int low, int high) {
    if (low < high) {
        int middle = low + (high - low) / 2;

        // sort first and second halves
        merge_sort_descending_order(array, low, middle);
        merge_sort_descending_order(array, middle + 1, high);

        merge_descending(array, low, middle, high);
    }
}

int main() {
    cout << "Bubble sort implementation" << endl;

    cout << "Enter the length of the array ::: ";
    int total_elements;
    cin >> total_elements;

    int array[total_elements];
    cout << "Enter the elements :::  ";
    for (int i = 0; i < total_elements; i++) {
        cin >> array[i];
    }

    merge_sort_ascending_order(array, 0, total_elements - 1);

    cout << "Sorted list of elements ascending order ::: ";

    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    merge_sort_descending_order(array, 0, total_elements - 1);

    cout << "Sorted list of elements descending order ::: ";
    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
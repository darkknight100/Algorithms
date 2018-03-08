//
// Created by Vaibhav Gour on 3/7/18.
//

#include <iostream>

using namespace std;

// Implementation of Binary search

int binary_search(int array[], int low, int high, int find_element);

int binary_search(int *array, int low, int high, int find_element) {
    if (high >= low) {
        int middle_element = low + (high - low) / 2;

        // If the middle element is equal to the searched element.
        if (array[middle_element] == find_element) {
            return middle_element;
        }

        // If searched element is smaller than the middle element
        if (array[middle_element] > find_element) {
            return binary_search(array, low, middle_element - 1, find_element);
        }

        // If searched element is bigger than the middle element
        if (array[middle_element] < find_element) {
            return binary_search(array, middle_element + 1, high, find_element);
        }
    }
    // If the searched element is not present in the array

    return -1;
}

int main() {

    cout << "Binary Search implementation" << endl;

    cout << "Enter the length of the array ::: ";
    int total_elements, find_element;
    cin >> total_elements;

    int array[total_elements];
    cout << "Enter the elements :::  ";
    for (int i = 0; i < total_elements; i++) {
        cin >> array[i];

    }

    // For binary search elements must be in sorted order
    sort(array, array+total_elements);

    cout << "Enter the element to be searched :::" << endl;
    cin >> find_element;

    int is_element_found = binary_search(array, 0, total_elements - 1, find_element);

    if (is_element_found == -1) {
        cout << "Element is not present in the array" << endl;
    } else {
        cout << "Element " << find_element << " is present at index::: " << is_element_found;
    }
    return 0;
}



//
// Created by Vaibhav Gour on 3/21/18.
//

#include <iostream>

using namespace std;

void insertion_sort_ascending_order(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];  // making every element as the key and comparing it with the sub-array left to it, which is sorted.
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (array[j] > key) {
                array[j + 1] = array[j];
            } else {
                break;
            }
        }
        array[j + 1] = key;
    }

}


void insertion_sort_descending_order(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];  // making every element as the key and comparing it with the sub-array left to it, which is sorted.
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (array[j] < key) {
                array[j + 1] = array[j];
            } else {
                break;
            }
        }
        array[j + 1] = key;
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

    insertion_sort_ascending_order(array, total_elements);

    cout << "Sorted list of elements ascending order ::: ";

    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    insertion_sort_descending_order(array, total_elements);

    cout << "Sorted list of elements descending order ::: ";
    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }


    return 0;
}
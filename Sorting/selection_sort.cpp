//
// Created by Vaibhav Gour on 3/14/18.
//

#include <iostream>

using namespace std;

void selection_sort_ascending_order(int array[], int n) {
    int min_index;
    // moving the boundary of the unsorted sub-array
    for (int i = 0; i < n - 1; i++) {
        min_index = i;
        // finding the minimum element of the unsorted sub-array
        for (int j = i + 1; j < n; j++) {
            if (array[min_index] > array[j]) {
                min_index = j;
            }
        }
        // swap the minimum element with the first element
        swap(array[i], array[min_index]);
    }

}

void selection_sort_descending_order(int array[], int n) {
    int max_index;
    // moving the boundary of the unsorted sub-array

    for (int i = 0; i < n - 1; i++) {
        max_index = i;
        // finding the maximum element of the unsorted sub-array

        for (int j = i + 1; j < n; j++) {

            if (array[max_index] < array[j]) {
                max_index = j;
            }
        }

        // swap the maximum element with the first element
        swap(array[i], array[max_index]);
    }
}

int main() {
    cout << "Selection sort implementation" << endl;

    cout << "Enter the length of the array ::: ";
    int total_elements;
    cin >> total_elements;

    int array[total_elements];
    cout << "Enter the elements :::  ";
    for (int i = 0; i < total_elements; i++) {
        cin >> array[i];
    }

    selection_sort_ascending_order(array, total_elements);

    cout << "Sorted list of elements ascending order ::: ";

    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }
    cout<<endl;
    selection_sort_descending_order(array, total_elements);

    cout << "Sorted list of elements descending order ::: ";
    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }


    return 0;
}

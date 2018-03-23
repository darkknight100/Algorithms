//
// Created by Vaibhav Gour on 3/21/18.
//

#include <iostream>

using namespace std;

void bubble_sort_ascending_order(int array[], int n) {

    // comparing adjacent elements, and making the smaller element come before the bigger element(swapping)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j + 1] < array[j]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

}

void bubble_sort_descending_order(int array[], int n) {

    // comparing adjacent elements, and making the bigger element come before the smaller element(swapping)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j + 1] > array[j]) {
                swap(array[j], array[j + 1]);
            }
        }
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

    bubble_sort_ascending_order(array, total_elements);

    cout << "Sorted list of elements ascending order ::: ";

    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    bubble_sort_descending_order(array, total_elements);

    cout << "Sorted list of elements descending order ::: ";
    for (int i = 0; i < total_elements; i++) {
        cout << array[i] << " ";
    }


    return 0;
}

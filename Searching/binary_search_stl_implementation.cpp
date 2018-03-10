//
// Created by Vaibhav Gour on 3/9/18.
//


#include <iostream>

using namespace std;

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
    sort(array, array + total_elements);


    cout << "Enter the element to be searched ::: ";
    cin >> find_element;

    // binary_search function returns boolean true if the element is present in the container, else returns false.
    bool is_element_present = binary_search(array, array + total_elements, find_element);

    if (is_element_present == true) {
        cout << "Element:: " << find_element << " is present in the array"
             << endl;
    } else {
        cout << "Element:: " << find_element << " is not present in the array"
             << endl;
    }


    return 0;
}


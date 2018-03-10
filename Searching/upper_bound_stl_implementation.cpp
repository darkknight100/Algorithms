//
// Created by Vaibhav Gour on 3/10/18.
//


#include <iostream>

using namespace std;

int main() {

    cout << "Upper Bound c++ STL implementation" << endl;

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


    cout << "Enter the element whose upper bound is to be calculated ::: ";
    cin >> find_element;

    // upper_bound function returns pointer to “position of next higher number than num” if container contains 1 occurrence of num. Returns pointer to “first position of next higher number than last occurrence of num” if container contains multiple occurrence of num. Returns pointer to “position of next higher number than num” if container does not contain occurrence of num.
    int *upper_bound_pointer = upper_bound(array, array + total_elements, find_element);

    cout << "Upper bound of " << find_element << " is ::: " << upper_bound_pointer - array << endl;

    return 0;
}


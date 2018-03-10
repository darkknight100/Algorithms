//
// Created by Vaibhav Gour on 3/10/18.
//


#include <iostream>

using namespace std;

int main() {

    cout << "Lower Bound c++ STL implementation" << endl;

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


    cout << "Enter the element whose lower bound is to be calculated ::: ";
    cin >> find_element;

    // lower_bound function returns a pointer to the  position of first occurrence of the number. It also returns pointer to “position of next higher number than element” if container does not contain occurrence of element.
    int *lower_bound_pointer = lower_bound(array, array + total_elements, find_element);

    cout << "Lower bound of " << find_element << " is ::: " << lower_bound_pointer - array << endl;

    return 0;
}
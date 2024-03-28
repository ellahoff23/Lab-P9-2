#include <iostream>

using namespace std;

bool isSortedIncreasing(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true;  
}

bool isSortedDecreasing(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return false; 
        }
    }
    return true; 
}

bool hasAdjacentDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true; 
        }
    }
    return false; 
}

int main() {
    const int size = 5;
    int exampleArrayIncreasing[size] = { 1, 3, 5, 7, 9 };  
    int exampleArrayDecreasing[size] = { 9, 7, 5, 3, 1 };  
    int exampleArrayDuplicates[size] = { 2, 4, 6, 6, 8 };  

    if (isSortedIncreasing(exampleArrayIncreasing, size)) {
        cout << "The array is sorted in increasing order." << endl;
    }
    else {
        cout << "The array is not sorted in increasing order." << endl;
    }

    if (isSortedDecreasing(exampleArrayDecreasing, size)) {
        cout << "The array is sorted in decreasing order." << endl;
    }
    else {
        cout << "The array is not sorted in decreasing order." << endl;
    }

    if (hasAdjacentDuplicates(exampleArrayDuplicates, size)) {
        cout << "The array has adjacent duplicates." << endl;
    }
    else {
        cout << "The array does not have adjacent duplicates." << endl;
    }

    return 0;
}
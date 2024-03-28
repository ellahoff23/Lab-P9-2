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

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;  
            }
        }
    }
    return false;  
}

int main() {
    const int size = 7;
    int exampleArrayIncreasing[size] = { 1, 3, 5, 7, 9, 11, 13 }; 
    int exampleArrayDecreasing[size] = { 13, 11, 9, 7, 5, 3, 1 };  
    int exampleArrayAdjacentDuplicates[size] = { 2, 4, 6, 6, 8, 10, 12 };  
    int exampleArrayDuplicates[size] = { 1, 3, 5, 7, 5, 9, 11 }; 

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

    if (hasAdjacentDuplicates(exampleArrayAdjacentDuplicates, size)) {
        cout << "The array has adjacent duplicates." << endl;
    }
    else {
        cout << "The array does not have adjacent duplicates." << endl;
    }

    if (hasDuplicates(exampleArrayDuplicates, size)) {
        cout << "The array has duplicates." << endl;
    }
    else {
        cout << "The array does not have duplicates." << endl;
    }

    return 0;
}
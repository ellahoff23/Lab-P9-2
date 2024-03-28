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

int main() {
    const int size = 5;
    int exampleArray[size] = { 1, 3, 5, 7, 9 }; 

    if (isSortedIncreasing(exampleArray, size)) {
        cout << "The array is sorted in increasing order." << endl;
    }
    else {
        cout << "The array is not sorted in increasing order." << endl;
    }

    return 0;
}
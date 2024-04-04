#include <iostream>

using namespace std;

bool isSortedIncreasing(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] > values[i + 1]) {
            return false;  
        }
    }
    return true;  
}

bool isSortedDecreasing(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] < values[i + 1]) {
            return false;  
        }
    }
    return true; 
}

bool hasAdjacentDuplicates(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (values[i] == values[i + 1]) {
            return true;  
        }
    }
    return false; 
}

bool hasDuplicates(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (values[i] == values[j]) {
                return true; 
            }
        }
    }
    return false; 
}

int main() {
    const int size = 6;
    int testArray[size];

    for (int i = 0; i < size; i++) {
        cout << "Run #" << i << ": ";
        cin >> testArray[i];
    }

    if (isSortedIncreasing(testArray, size)) {
        cout << "The data is increasing." << endl;
    }
    else {
        cout << "The data is not increasing." << endl;
    }

    if (isSortedDecreasing(testArray, size)) {
        cout << "The data is decreasing." << endl;
    }
    else {
        cout << "The data is not decreasing." << endl;
    }

    if (hasAdjacentDuplicates(testArray, size)) {
        cout << "The data has adjacent duplicates." << endl;
    }
    else {
        cout << "The data does not have adjacent duplicates." << endl;
    }

    if (hasDuplicates(testArray, size)) {
        cout << "The data has duplicates." << endl;
    }
    else {
        cout << "The data does not have duplicates." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter number of elements: ";
    cin >> size;

    if(size <= 0) {
        cout << "Size must be positive!\n";
        return 0;
    }

    int array[1000];

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }

    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size-1; j++) {   
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout << "\nSorted array:\n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << "\n";
    }

    return 0;
}
#include <iostream>
using namespace std;
void reverseArray(long double* arr, int size) {
    if (size <= 1) {
        
        return;
    }

    int start = 0;
    int end = size - 1;

    while (start < end) {
        
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main() {
    
    int size;
    cout << "Enter the size of the array: ";
   cin >> size;

    long double* myArray = new long double[size];

   cout << "Enter " << size << " long double values:" <<endl;
    for (int i = 0; i < size; ++i) {
        cin >> myArray[i];
    }


    reverseArray(myArray, size);

    cout << "Reversed array:" <<endl;
    for (int i = 0; i < size; ++i) {
  cout << myArray[i] << " ";
    }
    cout <<endl;

    
    delete[] myArray;

    return 0;
}




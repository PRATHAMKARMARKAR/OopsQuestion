/*Write a program which finds a four digit number AABB which is a perfect square. A and
B represent different digits. For example 7744 is a four digit perfect square number which
is also satisfying the condition AABB ie. first two digits (AA=77) are same and last two
digits (BB=44) are same.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n == 5) {
        int arr[n];
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (arr[0] == arr[1] && arr[3] == arr[4] && arr[1] != arr[3]) {
            cout << "The array forms a perfect square AABB." << endl;
        } else {
            cout << "The array does not form a perfect square AABB." << endl;
        }
    } else {
        cout << "Please enter exactly 5 elements." << endl;
    }

    return 0;
}

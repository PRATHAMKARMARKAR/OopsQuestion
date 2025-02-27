#include <iostream>

using namespace std;

void addMatrices(const int mat1[][3], const int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(const int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix1[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[rows][cols] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[rows][cols];

    addMatrices(matrix1, matrix2, result, rows, cols);

    cout << "Matrix 1:" << endl;
    displayMatrix(matrix1, rows, cols);

    cout << "Matrix 2:" << endl;
    displayMatrix(matrix2, rows, cols);

    cout << "Sum of Matrices:" << endl;
    displayMatrix(result, rows, cols);

    return 0;
}

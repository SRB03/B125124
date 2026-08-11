#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;
    cout << "Enter the number of columns: ";
    int cols;
    cin >> cols;

    // Dynamically allocating the memory for the 1D array of int pointers of size 'rows'
    int** matrix = new int*[rows];

    // Dynamically allocate memory for each row
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nThe matrix is:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Freeing each rows' memory
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    // Finally freeing the array of int pointers
    delete[] matrix;

    return 0;
}
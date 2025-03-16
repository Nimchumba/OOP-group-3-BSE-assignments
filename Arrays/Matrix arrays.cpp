// Matrix arrays
 
 /*NIMROD MUTAI
   BSE-O5-0178/2024
    BSE GROUP 3 */


#include <iostream>
using namespace std;

int main() {
    // Define a 2x3 matrix
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Print the matrix
    cout << "Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

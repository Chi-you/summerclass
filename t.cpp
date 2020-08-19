#include <iostream>
using namespace std;

int** GenData(int width, int length){
    int **array = new int *[width];
    for (int i=0; i < width; i++) {
        array[i] = new int [length];
        for (int k=0; k < length; k++) {
            array[i][k] = rand()%2;
        }
    }
    return array;
}

void PrintData(int** array, int width, int length){
    for (int i=0; i < width; i++) {
        for (int j=0; j < length; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void all(){
    int width, length, number;
    int **array = nullptr, **array_1 = nullptr;
    int **matrix_1;
    
    cout << "Please enter two indices and number of matrix : ";
    cin >> width >> length >> number;
    
    matrix_1 = new int *[width];
    for (int i=0; i < width; i++) {
        matrix_1[i] = new int [length];
        for (int k=0; k < length; k++) {
            matrix_1[i][k] = 0;
        }
    }
    
    for (int i=0; i < number; i++) {
        cout << "The contents of the array " << i+1 << endl;
        array = GenData(width, length);
        PrintData(array, width, length);
        if (i > 0) {
            for (int i=0; i < width; i++) {
                for (int j=0; j < length; j++) {
                    for (int k=0; k < width; k++) {
                        matrix_1[i][j] += array_1[i][k] * array[k][j];
                    }
                }
            }
        }
        array_1 = array;
    }
    cout << "The contents of the resultant array" << endl;
    PrintData(matrix_1, width, length);
}

int main() {
    
    while (true) {
        all();
    }
    
    return 0;
}
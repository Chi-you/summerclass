#include <iostream>
#include <stdlib.h>
using namespace std;
void GetParameters(int &, int &, int &, int &);
int** GetData(int, int);
void PrintMatrix(int **, int, int);
void ComputerSum(int **, int**, int, int, int, int);

int main(){
    int **array1, **array2;
    int roww1, coll1, roww2, coll2;
    GetParameters(roww1, coll1, roww2, coll2);
    array1 = GetData(roww1, coll1);
    array2 = GetData(roww2, coll2);
    PrintMatrix(array1, roww1, coll1);
    PrintMatrix(array2, roww2, coll2);
    ComputerSum(array1, array2, roww1, coll1, roww2, coll2);
}

void GetParameters(int &row, int &col, int &row2, int &col2)
{
    cin>>row>>col;
    cin>>row2>>col2;
}
int** GetData(int r, int c)
{
    int **arr2D;
    arr2D=new int*[r];
    for(int i=0;i<r;i++){
        arr2D[i]=new int[c];
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr2D[i][j] = rand() % 5; 
        }
    }
    return arr2D;
}

void PrintMatrix(int **arr2D, int r, int c)
{
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr2D[i][j]<<" ";
        }
        cout<<endl;
    }
}
void ComputerSum(int **arr2D1, int **arr2D2, int r, int c, int r2, int c2)
{
    int sum = 0;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            sum += arr2D1[i][j];
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++)
            sum += arr2D2[i][j];
    cout<<sum;
}
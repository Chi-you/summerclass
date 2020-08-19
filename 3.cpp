#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;
void InputData(int &, int &, int &);
int ***GenData(int, int);
int **MULMatrix(int ***, int, int);
void PrintData(int ***, int **, int, int);
void func();

int main(){
    srand(time(0));
    func();   
}

void InputData(int &r, int &c, int &a) 
{
    cout<<"Please enter two indices and number of matrixes: ";
    cin>>r>>c>>a; 
}

int *** GenData(int s, int a) // generate the data of the arrays
{
    int ***arr3D = new int **[a]; 
    for(int i = 0; i < a; i++){
        arr3D[i] = new int*[s];
        for(int j = 0; j < s; j++)
            arr3D[i][j] = new int[s];
    }
    for(int i = 0; i < a; i++)
        for(int j=0; j<s; j++)
            for(int k=0; k<s; k++)
                arr3D[i][j][k] = rand() % 2; // range: 0~1
    return arr3D;
}

int **MULMatrix(int ***arr, int s, int a) // add the arrays
{
    int **arr2D;
    arr2D=new int*[s];
    for(int i=0;i<s;i++)
        arr2D[i]=new int[s];

    for(int j = 0; j < s; j++) // initialize the 2D array
        for(int k = 0; k < s; k++)
            arr2D[j][k] = 0;

    int **arr2D1;
    arr2D1=new int*[s];
    for(int i=0;i<s;i++)
        arr2D1[i]=new int[s];

    for(int j = 0; j < s; j++) // initialize the 2D array
        for(int k = 0; k < s; k++)
            arr2D1[j][k] = 0;

    
    for(int i = 0; i < a; i++){
        if(i==0){

            for(int j = 0; j < s; ++j)
                for(int k = 0; k < s; ++k)
                    
                    for(int z = 0; z < s; ++z)
                        arr2D[j][k] += (arr[i][j][z] * arr[i+1][z][k]);
            ++i;
        }

        else{
            for(int j = 0; j < s; ++j)
                for(int k = 0; k < s; ++k)
                    
                    for(int z = 0; z < s; ++z)

                        arr2D1[j][k] += (arr2D[j][z]*arr[i][z][k]);
                        for(int m = 0; m < s; m++){ // initialize the 2D array
                            for(int n = 0; n < s; n++)
                                arr2D[m][n] = arr2D1[m][n];
                        }
                        for(int d = 0; d < s; d++){ // initialize the 2D array
                            for(int b = 0; b < s; b++)
                                arr2D1[d][b] = 0;
                        }
        }                             
    }
    
    return arr2D;
}

void PrintData(int ***arr3D, int **arr2D, int s, int a) // output the result to the terminal
{
    for(int i = 0; i < a; i++){ 
        cout<<"The contents of the array "<< i+1 <<endl;
        for(int j = 0; j < s; j++){
            for(int k = 0; k < s; k++)
                cout<< setw(3) <<arr3D[i][j][k];
            cout<<endl;
        }
    }
    cout<<"The contents of the resultant array \n";
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++)
            cout<< setw(3) <<arr2D[i][j];
        cout<<endl;
    }
}   

void func(){
    while(1){
        int row, col, amount, ***array3d, **array2d; // size: the size of the array    amount: the number of the arrays
        InputData(row, col, amount);
        array3d = GenData(row, amount);
        array2d = MULMatrix(array3d, row, amount);
        PrintData(array3d, array2d, row, amount);
    }
}
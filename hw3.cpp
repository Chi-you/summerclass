#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;
void InputData(int &, int &);
int ***GenData(int, int);
int **AddMatrix(int ***, int, int);
void PrintData(int ***, int **, int, int);
void OutputData(int ***, int **, int, int);

int main(){
    srand(time(0));
    int size, amount, ***array3d, **array2d;
    InputData(size, amount);
    array3d = GenData(size, amount);
    array2d = AddMatrix(array3d, size, amount);
    PrintData(array3d, array2d, size, amount);
    OutputData(array3d, array2d, size, amount);
}

void InputData(int &s, int &a)
{
    fstream Inputfile("Input.txt", ios::in);
    Inputfile>>s>>a;  
    Inputfile.close(); 
}

int *** GenData(int s, int a)
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
                arr3D[i][j][k] = rand() % 9 + 1; // range: 1~9
    return arr3D;
}

int **AddMatrix(int ***arr, int s, int a)
{
    int **arr2D;
    arr2D=new int*[s];
    for(int i=0;i<s;i++){
        arr2D[i]=new int[s];
    }
    for(int i = 0; i < a; i++)
        for(int j = 0; j < s; j++)
            for(int k = 0; k < s; k++)
                arr2D[j][k] += arr[i][j][k];
    return arr2D;
}

void PrintData(int ***arr3D, int **arr2D, int s, int a)
{
    for(int i = 0; i < a; i++){ 
        cout<<"\nThe"<< " matrix "<< i+1 <<" is "<<endl<<endl;
        for(int j = 0; j < s; j++){
            for(int k = 0; k < s; k++)
                cout<< setw(2) <<arr3D[i][j][k];
            cout<<endl;
        }
    }
    cout<<"\nThe resultant matrix is: \n\n";
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++)
            cout<< setw(3) <<arr2D[i][j];
        cout<<endl;
    }
}   

void OutputData(int ***arr3D, int **arr2D, int s, int a)
{
    fstream outputfile("AM.txt", ios::out);
    for(int i = 0; i < a; i++){ 
        outputfile<<"\nThe"<< " matrix "<< i+1 <<" is "<<endl<<endl;
        for(int j = 0; j < s; j++){
            for(int k = 0; k < s; k++)
                outputfile<< setw(2) <<arr3D[i][j][k];
            outputfile<<endl;
        }
    }
    outputfile<<"\nThe resultant matrix is: \n\n";
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++)
            outputfile<< setw(3) <<arr2D[i][j];
        outputfile<<endl;
    }
    outputfile.close();
}
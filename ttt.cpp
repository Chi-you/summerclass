#include<iostream>
using namespace std;
#include<stdlib.h>

void GetParameter(int&,int&);
void GetData(int**,int,int);
int main(){
    int** M1,** M2;
    int d1,d2;
    GetParameter(d1,d2);
    GetData(M1,d1,d2);
    cout<<M1[0][1];
    return 0;

}
void GetParameter(int &d1,int &d2){
    int x,y;
    cout<<"Please enter the size of first dimension : ";
    cin>>x;
    cout<<"Please enter the size of second dimension : ";
    cin>>y;
    d1=x;
    d2=y;
}
void GetData(int **arr,int d1,int d2){
    //int ** arr;
    arr=new int*[d1];
    for(int i=0;i<d1;i++){
        arr[i]=new int[d2];
    }
    for(int j=0;j<d1;j++){
        for(int k=0;k<d2;k++){
            arr[j][k]=rand()%4;
        }
    }
}

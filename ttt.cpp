#include<iostream>
using namespace std;
#include<stdlib.h>

void GetParameter(int&,int&);
int ** GetData(int,int);
int main(){
    int** M1;
    int d1,d2;
    GetParameter(d1,d2);
    // M1=new int*[d1];
    // for(int i=0;i<d1;i++){
    //     M1[i]=new int[d2];
    // }
    M1 = GetData(d1,d2);
    for(int j=0;j<d1;j++){
        for(int k=0;k<d2;k++){
            cout<<M1[j][k]<<" ";
        }
        cout<<endl;
    }
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
int** GetData(int d1,int d2){
    int **arr;
    arr=new int*[d1];
    for(int i=0;i<d1;i++){
        arr[i]=new int[d2];
    }
    for(int j=0;j<d1;j++){
        for(int k=0;k<d2;k++){
            arr[j][k]=rand()%4;
        }
    }
    for(int j=0;j<d1;j++){
        for(int k=0;k<d2;k++){
            cout<<arr[j][k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    return arr;
}
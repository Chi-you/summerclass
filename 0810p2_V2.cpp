#include<iostream>
#include<fstream>
#include <stdlib.h>
#include<string>
using namespace std;

int * array_sum()
{
	int x, x1, x2;
    string s;
	cout<<"Please input the size of frist array: ";
	cin>>x1;
	cout<<"Enter your first array: ";
	int *arr1 = new int[x1];
	for(int i=0;i<x1;i++){
		cin>>x;
		arr1[i]=x;
	}
	cout<<"Please input the size of second array: ";
    cin>>x2;
	cout<<"Enter your second array: ";
	int *arr2=new int[x2];	
	for(int i=0;i<x2;i++){
		cin>>x;
		arr2[i]=x;
	}
    int x3 = (x1>x2) ? x1 : x2;
    cout<<x3<<endl;
	int *arr3=new int[x3];
	for(int i=0;i<x3;i++)
		arr3[i]=arr2[i]+arr1[i];	
	for(int i=0;i<x3;i++)
		cout<<arr3[i]<<" ";		
    cout<<endl<<sizeof(arr3);
    return arr3;
}
void inputfile(int *a)
{
    fstream dataFILE;
    char filename[81];
    cout<<"\nInput the file name: ";  
    getchar();
    cin.getline(filename, 81);
    dataFILE.open(filename, ios::out);
    
    int size = sizeof(a)/sizeof(a[0]);
    for(int i = 0 ; i < size; i++)
        cout<<a[i]<<"";
    // for(int i = 0 ; i < size; i++)
    //     dataFILE<<" "<<a[i];

}


int main()
{
    inputfile(array_sum());
	return 0;
}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void array_sum()
{
	int x;
	int x1;
	cout<<"Please input the size of arrays: ";
	cin>>x1;
	cout<<"Enter your first array: ";
	int *arr1 = new int[x1];
	for(int i=0;i<x1;i++){
		cin>>x;
		arr1[i]=x;
	}
	
	cout<<"Enter your second array: ";
	int *arr2=new int[x1];	
	for(int i=0;i<x1;i++){
		cin>>x;
		arr2[i]=x;
	}
	int *arr3=new int[x1];
	for(int i=0;i<x1;i++){
		arr3[i]=arr2[i]+arr1[i];	
	}
	for(int i=0;i<x1;i++){
		cout<<arr3[i];
	}	
		
}
int main()
{
	array_sum();
	return 0;
}

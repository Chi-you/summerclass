#include <iostream>
using namespace std;

int main()
{
	int x, x1, x2;
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
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<endl<<size1<<" "<<size2<<endl;
    int x3 = (x1>x2) ? x1 : x2;
    int x4 = (x1<x2) ? x1 : x2;
    cout<<x3<<endl;
	int *arr3=new int[x3];
	// for(int i=0;i<x3;i++){
    //     if(i<x4){
	// 	    arr3[i] = arr2[i] + arr1[i];	
    //     }
    //     else{
    //         arr3[i] = arr2[i];
    //     }
    // }

	for(int i=0;i<x3;i++)
		cout<<arr3[i]<<" ";		
    cout<<endl<<sizeof(arr3);
}
#include <iostream>
using namespace std;
#define MAX 100
int main(){
	int a[MAX];
	int input;
	int sum=0;
	cout<<"Please input a number: ";
	cin>>input;
	for(int i =1; i<=input; i++){
		a[i]=i*2;
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
		sum = sum+i*2;
	}
	float average=sum/input; 
	
	cout<<"\nthe average is: "<<average; 
	
}
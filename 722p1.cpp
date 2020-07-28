#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Please input an odd number: ";
	cin>>a;
	cout<<"\n";
	int i=1;
	int b=(a-1)/2;
	do{
		for(int j=0; j<b;j++)
			cout<<" ";
		for(int j=0; j<i; j++){
			cout<<"X";
		}
		cout<<"\n";
		i += 2;
		b--;
	}while(i<=a);
	
}


/*
int j=0;
while(j<b){
	cout<<" ";
	j++;
}
int k=0;
while(k<i){
	cout<<"X";
	k++;
}
*/

/*
while(i<=a){
		for(int j=0; j<b;j++)
			cout<<" ";
		for(int j=0; j<i; j++){
			cout<<"X";
		}
		cout<<"\n";
		i += 2;
		b--;
	}
*/
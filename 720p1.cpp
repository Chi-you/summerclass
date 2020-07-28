#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Please enter an odd number:";
	cin >> x;
	for (int i = 1; i <= x; i++)
		cout << i <<" ";
	cout << "\n";
//X
	for (int i = 1; i <= x; i++){
		for (int j = 1; j <= x; j++){
			if ((i == j) || (j == x - i + 1))
				cout << '#';
			else
				cout << " ";
		}
		cout << "\n";
	}

cout<<endl<<endl;

//V
	for (int i = 1; i <= x/2+1; i++){
		for (int j = 1; j <= x; j++){
			if ((i==j)||(j==x-i+1))
				cout << '#';
			else
				cout << " ";
		}
		cout << "\n";
	}
	
}
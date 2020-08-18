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
	cout<<endl<<endl;
//W
	int a = x / 2 + 1;
	int b = 2 * x - 1;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= b; j++){
			if ( j == i || j == x - i + 1 || j == b - i + 1 || j == x + i - 1)
				cout << '#';
			else
				cout << " ";
		}
		cout << "\n";
	}
}



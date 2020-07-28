#include <iostream>
using namespace std;

int main()
{
	int x;
	for (;;) {
		cout << "Please enter your score:";
		cin >> x;
		if (x == -1) {
			break;
		}
		else {

			switch (x / 10) {
			case 10:cout << "Your grade is A" << endl;
				break;
			case 9:cout << "Your grade is A" << endl;
				break;
			case 8:cout << "Your grade is B" << endl;
				break;
			case 7:cout << "Your grade is C" << endl;
				break;
			case 6:cout << "Your grade is D" << endl;
				break;

			default:cout << "Your grade is F" << endl;
				break;

			}
		}

	}
}
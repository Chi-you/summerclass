#include <iostream>
using namespace std;
void func();
int main(){
    func();
    cout<<endl;
    system("pause");
    return 0;
}
void func(){
    cout<<"Please enter an odd number: ";
    int b;
    cin >> b;
    int c = b / 2 + 1;
    for(int i = 0; i < b; i++){
        for(int j = 0; j < b; j++){
            if(j == i || j == b-i-1) cout<<"X";
            else cout<<" ";
        }
        cout<<endl;
    }
}
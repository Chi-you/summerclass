#include <fstream> 
#include <iostream>
using namespace std; 
void read(char *filename){
    ifstream ifs2 ( filename , ifstream::in ); 
    string str;
    while (getline(ifs2 , str)){
        cout << str << endl;
    } 
ifs2.close(); 
}
int main () 
{ 
//ifstream ifs ( "test.txt" , ifstream::in );
 
read("test.txt");

return 0; 
}
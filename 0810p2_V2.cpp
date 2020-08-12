#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int * array_sum(int &xx)
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
    xx = (x1>x2) ? x1 : x2;
    cout<<xx<<endl;
	int *arr3=new int[xx];
    // for(int i=0;i<xx;i++)
	// 	cout<<arr2[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<xx;i++)
	// 	cout<<arr1[i]<<" ";
    // cout<<endl;    
	for(int i=0;i<xx;i++)
		arr3[i]=arr2[i]+arr1[i];	
	for(int i=0;i<xx;i++)
		cout<<arr3[i]<<" ";		
    cout<<endl<<sizeof(arr3);
    return arr3;
}
string inputfile(int *a, int size)
{
    fstream dataFILE;
    string filename;
    cout<<"\nInput the file name: ";  
    getchar();
    getline(cin, filename);
    dataFILE.open(filename, ios::out);
    
    // for(int i = 0 ; i < size; i++)
    //     cout<<a[i]<<"";
    for(int i = 0 ; i < size; i++)
        dataFILE<<" "<<a[i];
    dataFILE.close();
    return filename;
}

void readfile(string filename){
    fstream READDATA(filename, ios::in);
    string str;
    // while(!READDATA.eof()) { 
    //     READDATA.get(ch); 
    //     cout << ch; 
    // } 
    while (getline(READDATA , str)){
        cout<<"The content of the file:";
        cout << str << endl;
    }
    READDATA.close(); 

}

int main()
{
    int x3 = 0;
    int *a = array_sum(x3);
    string file = inputfile(a, x3);
    readfile(file);
	return 0;
}


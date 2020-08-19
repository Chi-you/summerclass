#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
struct birthday{
    int Y, M, D;
};
struct student{
	string name; // if you didn't dynamically allocate memory will cause seg fault
	string address;
    birthday b;
	int salary;
};
void print(int);
int numofstudent();
void func();
struct student * getdata(struct student *, int);
void printinformation(struct student *, int);
void average_age(struct student *, int);
char genRandom();
static const char alphanum[] =
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;


int main(){
    srand(time(0));
	func();
}
void print(int a)
{
	cout<<"Person "<<a+1<<"'s data: ";
}
int numofstudent()
{
	int num;
	cout<<"\nPLease enter the number of person: ";
	cin>>num;
	return num;
}
char genRandom()  // Random string generator function.
{
    return alphanum[rand() % stringLength];
}
struct student * getdata(struct student *st, int size)
{
	st = new struct student [size];
	for(int i = 0; i < size; i++){
			
		cout<<"Please enter person "<<i+1<<"'s salary: ";
		cin>>st[i].salary;
        string addr, name;
        for(int z=0; z < 5; z++){
            addr += genRandom();
            name += genRandom();
        }
        st[i].name = name;
        st[i].address = addr;
        st[i].b.D = rand()%30 + 1;
        st[i].b.M = rand()%12 + 1;
        st[i].b.Y = rand()%11 + 1970;
        		
	}
	return st;
}
void printinformation(struct student *arr, int size)
{
	
	
	cout<<endl;
	for(int i = 0; i < size; i++){
		print(i); // test
		cout<<"\nname: "<<arr[i].name; 
		cout<<"\naddress: "<<arr[i].address;
		cout<<"\nbirthday: "<<arr[i].b.Y<<"/"<<arr[i].b.M<<"/"<<arr[i].b.D<<endl;
        cout<<"salary: "<<arr[i].salary<<endl;
	}
}

void average_age(struct student *s, int size)
{
	int sum=0;
	for(int i = 0; i < size; i++){
		sum += s[i].salary;
	}
	cout<<"average salary:"<<(sum/size);
}
void func(){
    while(1){
        int size = numofstudent();
        struct student *student = new struct student [size];
        student = getdata(student,size);
        printinformation(student, size);
        average_age(student, size);
        delete [] student;
    }
}
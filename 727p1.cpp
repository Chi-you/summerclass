#include <iostream>
#include <string>
using namespace std;
struct student{
	char *name=new char[5]; // if you didn't dynamically allocate memory will cause seg fault
	int age;
	string address;
	string phonenumber;
	char gender;
};
void print(int);
int numofstudent();
struct student * getdata(struct student *, int);
void printinformation(struct student *, int);
void average_age(struct student *, int);
int main(){
	int size;
	size = numofstudent();
	struct student *student = new struct student [size];
	student = getdata(student,size);
	printinformation(student, size);
	delete [] student;
}
void print(int a)
{
	if (a == 0)
		cout<<"For 1st student: \n";
	else if (a == 1)
		cout<<"\nFor 2nd student: \n";
	else if (a == 2)
		cout<<"\nFor 3rd student: \n";
	else 
		cout<<"\nFor "<<a+1<<"th student: \n";
}
int numofstudent()
{
	int num;
	cout<<"PLease input the number of students: ";
	cin>>num;
	return num;
}
struct student * getdata(struct student *st, int size)
{
	st = new struct student [size];
	for(int i = 0; i < size; i++){
		print(i);
		cout<<"Enter personal information(name): ";
		cin>>st[i].name;
		cout<<"Enter personal information(age): ";
		cin>>st[i].age;
		cout<<"Enter personal information(address): ";
		cin>>st[i].address;
		cout<<"Enter personal information(phone number): ";
		cin>>st[i].phonenumber;
		cout<<"Enter personal information(gender: F for female, M for male): ";
		cin>>st[i].gender;
		cout<<"===========================================================";
	}
	return st;
}
void printinformation(struct student *arr, int size)
{
	cout<<"\nThe information of the all the students: ";
	cout<<"\nThere are "<<size<<" students.";
	cout<<endl;
	for(int i = 0; i < size; i++){
		print(i);
		cout<<"Name: "<<arr[i].name; 
		cout<<"\nAge: "<<arr[i].age;
		cout<<"\nAddress: "<<arr[i].address;
		cout<<"\nPhone number: "<<arr[i].phonenumber;
		cout<<"\nGender: "<<((arr[i].gender == 'F') ? "Female" : "Male");
		cout<<"\n==========================";
	}
}

void average_age(struct student *s, int size)
{
	int sum=0;
	for(int i = 0; i < size; i++){
		sum += s[i].age;
	}
	cout<<"The average age of all students is "<<(sum/size);
}
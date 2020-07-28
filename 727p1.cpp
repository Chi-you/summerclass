#include <iostream>
using namespace std;
struct student{
	char name[5];
	int age;
	long int address;
	long int phonenumber;
	char gender;
};
void print(int);
int numofstudent(int);
char * getname(struct student *, int);
int getage(struct student *, int);
long int getaddr(struct student *, int);
long int getphone(struct student *, int);
char getgender(struct student *, int);
void printinformation(struct student *, int);
int average_age(struct student *, int);
int main(){
	int size;
	cout<<"PLease input the number of students: ";
	cin>>size;
	struct student *st = new struct student [size];
	//struct student st[size];
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

	cout<<"\nThe information of the all the students: ";
	cout<<"\nThere are "<<numofstudent(size)<<" students.";
	printinformation(st, size);
	cout<<"The average age of all students is "<<average_age(st, size);
	delete []st;
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
int numofstudent(int size)
{
	return size;
}
char * getname(struct student *arr, int index)
{
	return arr[index].name;
}
int getage(struct student *arr, int index)
{
	return arr[index].age;
}
long int getaddr(struct student *arr, int index)
{
	return arr[index].address;
}
long int getphone(struct student *arr, int index)
{
	return arr[index].phonenumber;
}
char getgender(struct student *arr, int index)
{
	return arr[index].gender;
}
void printinformation(struct student *arr, int size)
{
	cout<<endl;
	for(int i = 0; i < size; i++){
		print(i);
		cout<<"Name: "<<getname(arr, i);
		cout<<"\nAge: "<<getage(arr, i);
		cout<<"\nAddress: "<<getaddr(arr, i);
		printf("\nPhone number: %010ld", getphone(arr, i));
		//cout<<"\nPhone number: "<<getphone(arr, i);
		cout<<"\nGender: "<<((getgender(arr, i) == 'F') ? "Female" : "Male");
		cout<<"\n==========================\n";
	}
}

int average_age(struct student *s, int size)
{
	int sum=0;
	for(int i = 0; i < size; i++){
		sum += s[i].age;
	}
	return (sum/size);
}
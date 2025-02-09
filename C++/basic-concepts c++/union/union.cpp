// union : https://www.geeksforgeeks.org/cpp-unions/

// C++ program to illustrate the use of union in C++ 
#include <iostream> 
using namespace std; 

// Creating a union 
union geek { 
	// Defining data members 
	int age; 
	char grade; 
	float GPA; 
}; 

int main() 
{ 

	// Defining a union variable 
	union geek student1 , student2; 

	// Assigning values to data member of union geek and 
	// printing the values of data members 
	student1.age = 25; 
	cout << "Age : " << student1.age << endl; 

	student1.grade = 'B'; 
	cout << "Grade : " << student1.grade << endl; 
	cout << "Age 2 : " << student1.age << endl; 

	student1.GPA = 4.5; 
	cout << "GPA : " << student1.GPA << endl; 
	cout << "Grade 2 : " << student1.grade << endl; 

    // Print memory addresses of each member
    cout << "Address student1 of age: " << (void*)&student1.age << endl;
    cout << "Address student1 of grade: " << (void*)&student1.grade << endl;
    cout << "Address student1 of GPA: " << (void*)&student1.GPA << endl;
    cout << "Address student2 of age: " << (void*)&student2.age << endl;
    cout << "Address student2 of grade: " << (void*)&student2.grade << endl;
    cout << "Address student2 of GPA: " << (void*)&student2.GPA << endl;

	return 0; 
}



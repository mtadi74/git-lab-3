#include <iostream>
#include <string>
using namespace std;

//This program asks for the student's name and age.
int main()
{
    string name;
    int age;
    int studentId;


    cout << "Enter student name: ";
    getline(cin, name);

cout<<"Enter age: ";
cin>> age;

cout<<"Enter student ID: ";
cin>> studentId;

    cout << "Hello, " << name << "!" << endl;
cout<<"Your age is "<<age<<"."<<endl;

cout<<"Your student ID is "<<studentId<<"."<<endl;

    return 0;
}
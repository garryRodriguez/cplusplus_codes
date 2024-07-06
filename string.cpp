#include <iostream>
#include <string>
using namespace std;

int main(){
	string firstName = "John";
	string lastName = "Doe";
	string txt = "We are the so called \"Vikings\" from the north";
	//string fullName = firstName + lastName; // concat using +
	string fullName = firstName.append(lastName); // concat using append()

	// get the total length of string using length() or size()
	cout << "Total character length of fullname is " << fullName.length() << endl;

	//access the characters in a string using brackets []
	cout << "First Char is " << fullName[0] << endl; // return J

	//print the last character of string using this code
	cout << "The last char is " << fullName[fullName.length() - 1] << endl;


        //another way to access char using at()
	cout << "First Char in the fullname is " << fullName.at(0) << endl;

	cout << txt << endl;
	cout << fullName << endl;

	return 0;
}


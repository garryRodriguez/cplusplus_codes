#include <iostream>
#include <string>
using namespace std;

int main(){
	string fullName;
	cout << "Type your fullname: ";
	//cin >> firstName;
	

	//Note: using cin in this case, if the user type ins John Smith, it will only ouput "John" as the result
       // use getline() to get line of text from user input

	getline (cin, fullName);
	cout << "Your name is: " << fullName << endl;
	return 0;
}

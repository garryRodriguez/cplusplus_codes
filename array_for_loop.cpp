#include <iostream>
#include <string>
using namespace std;

int main(){
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

	cout << " ****************************** " << endl;
		for (int i = 0; i < 4; i++){
			cout << i << " = " << cars[i] << "\n";

		}
	cout << " ******************************** " << endl;

	return 0;
}

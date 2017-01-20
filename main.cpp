#include <iostream>

using namespace std;

int main()
{
	int number1 = 0;
	int number2 = 0;
	int numbers [15];
	cout<<"Desarrollo del programa" << endl;
	for(int i=0; i<15; i++){
		if (i<3) {
			numbers[i]=1;
			cout<< numbers[i] << ", " << endl;
		}
		else {
			number1 = numbers[i-3];
			number2 = numbers[i-2];
			numbers[i] = number1 + number2;
			cout<< numbers[i] << ", " << endl;
		}
	}
	return 0;
}

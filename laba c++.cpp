#include <iostream>

#include <cmath>

using namespace std;


int main(){
	
	float x, y, z;
	
	cout << "Enter x number: ";
	cin >> x;
	
	
	cout << "Enter y number: ";
	cin >> y;
	
	
	z = sin(sqrt(x)) + cos(2 * x + y) - 14 * pow(sqrt(x) + y, 3);
	
	cout << "Result: " << z << "\n";
	
	return 0;
	
}

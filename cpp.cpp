#include <iostream>
#include<string>



int pow(double base, int exponent) {

	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base; 
	}
	return result;
}
void print_pow(double base, int exponent){
	
	int printed_power = pow(base, exponent);
	std::cout << printed_power << std::endl;
	
	}

int main(){
	using namespace std;
	int exponent;
	double base;
	std::cout << "Input a base" << std::endl;
	cin >> base;
	cout << "input an exponent" << endl;
	cin >> exponent;

	print_pow(base, exponent);

}
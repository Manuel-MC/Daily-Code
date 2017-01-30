#include <iostream>
using namespace std;
int main() {
	double num;
	double sum;
	cout << "ow much money do you want to deposit?" << endl;
	cin >> num;
	sum = 1000.00 - num;
	cout << "your balance is " << sum << endl;
}
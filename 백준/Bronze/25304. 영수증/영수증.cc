#include <string>
#include <iostream>
using namespace std;

int main() {
	int totalValue, max ,nowValue =0;
	cin >> totalValue;
	cin >> max;
	for (int i = 0; i < max; i++) {
		int value;
		int count;
		cin >> value >> count;
		nowValue += value * count;
	}
	string answer = totalValue == nowValue ? "Yes" : "No";
	cout << answer;
}
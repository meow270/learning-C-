#include <iostream>

using namespace std;

int main(){
	float a,c;
	int b;
	cin >> a >> b;
	for (int i = 0; i <= b; i++) {
		if (i % 2 != 0) {
			c = a * b;
			a = c;
		}
		else if (i % 2 == 0) {
			c = a * (-b);
			a = c;
		}
	cout << c;
	}
}

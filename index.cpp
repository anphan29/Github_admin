#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    char s[] = "125.789";
		int a = 0, b = 0;
		for (int i = 0; char c = s[i]; i++) {
			
			if (c == '.') { b = 1; continue; }

			a = a * 10 + (c - '0');
			if (b) b = b * 10;
		}
		cout << endl;
		cout << (b > 1 ? (double)a / b : a)  << endl;
}
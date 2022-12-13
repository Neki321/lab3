#include <iostream>

using namespace std;
bool fib(int n)
{
	int a = 0, b = 1;
	while (a < n)a = (b += a) - a;
	if (a == n) return true;
	return false;
}

void main() {
	int n;
	cout << "Check for Fibonacci number, enter number" << endl;
	cin >> n;
	cout << (fib(n) ? "Yes" : "No");
}
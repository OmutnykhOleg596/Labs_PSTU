#include <iostream>

using namespace std;

int main() {
	int i = 1;
	int result;
	result = ++i * i++;
	cout << result << '\n';
	return 0;
}

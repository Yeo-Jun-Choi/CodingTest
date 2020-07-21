#include<iostream>
using namespace std;

void make(int a[], char b) {
	int size = 26;
	int c = b;
	for (int i = 12; i < size; ++i) {
		a[i] = c;
		c++;
		if (c == 91) {
			c = 65;
		}
	}
	for (int i = 0; i < 12;++i) {
		a[i] = c;
		c++;
		if (c == 91) {
			c = 65;
		}
	}
}

int main() {
	int making[26] = { 0 };
	string exam;
	cin >> exam;
	int sum = 0;
	int end = exam.size();
	make(making, 'A');

	

	for (int m = 0; m < end; ++m) {
		int count = 0;
		int i = 13;
		int test = exam[m];
		while (true) {
			if (test == making[i]) {
				count++;
				break;
			}
			else {
				count++;
				i++;
			}
			if (i == 26)
				i = 0;
		}

		if (count > 13)
			sum += 26 - count;
		else if (count < 13)
			sum += count;
		else
			sum += 13;

		make(making, exam[m]);
	}
	std::cout << sum;

	return 0;
}
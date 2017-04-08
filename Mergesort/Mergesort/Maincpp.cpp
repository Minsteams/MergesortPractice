#include <iostream>
#include<vector>
#include "Mergesort.h"
#include <conio.h>
using namespace std;


void main() {
	cout << "Please input your arrary with each number separated with space:" << endl;
	//Input
	vector<int> a;
	int x= 0;
	char b = 0;
	while (b != '\r') {
		b = _getche();
		if (b >= '0'&&b <= '9') {
			if (x == -1)x = b - '0';
			else x = x * 10 + b - '0';
		}
		else if (b == ' ') {
			a.push_back(x);
			x = -1;
		}
		else if (b == 27)exit(0);
		else {
			printf_s("\b \b");
		}
	}
	if (b != ' ')a.push_back(x);
	printf_s("\n\n\n");

	//mergesort
	mergeSort(a);
	//Output
	for (int i = 0; i < a.size(); i++)
		printf("%d ", a[i]);
	_getch();
	_getch();
}
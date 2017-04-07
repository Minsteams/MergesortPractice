#include <iostream>
#include<vector>
#include "Mergesort.h"
#include <conio.h>
using namespace std;


void main() {
	cout << "Please input your arrary with each number separated with space:" << endl;
	//Input
	vector<int> a;
	int t = 0;
	char b=1;
	while (b!='\r') {
		b = _getch();
		printf_s("%c", b);
		if (b >= '0'&&b <= '9')t = t * 10 + b - '0';
		if (b == ' ') {
			a.push_back(t);
			t = 0;
		}
	}
	printf_s("\n\n\n");
	a.push_back(t);

	//mergesort
	mergeSort(a);
	//Output
	for (int i = 0; i < a.size(); i++)
		printf("%d ", a[i]);
	_getch();
}
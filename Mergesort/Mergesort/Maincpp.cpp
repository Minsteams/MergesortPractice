#include <iostream>
#include<vector>
#include "Mergesort.h"
using namespace std;


void main() {
	vector<int> a = { 1,2,3,2,4,6,78,5,3,1 };
	mergeSort(a);
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << endl;
//	getchar();
}
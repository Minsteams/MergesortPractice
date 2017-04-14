#include <iostream>
#include<vector>
#include "Mergesort.h"
#include <conio.h>
using namespace std;

void main() {
	FILE *in;
	fopen_s(&in,"in_mergesort.txt", "r");
	vector<int> a;
	if (in != NULL) {
		while (!feof(in)) {
			int temp;
			fscanf_s(in, "%d", &temp);
			a.push_back(temp);
		}
		fclose(in);
		mergeSort(a);
	}
	FILE *out;
	remove("out_mergesort.txt");
	fopen_s(&out,"out_mergesort.txt", "w");
	int i = 0;
	while (i<a.size()) {
		fprintf_s(out, "%d\n", a[i]);
		i++;
	}
	fclose(out);
}
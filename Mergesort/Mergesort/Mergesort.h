#pragma once
#include<array>
#include<vector>
using namespace std;
template <typename Comparable>
void mergeSort(vector<Comparable> &a) {
	vector<Comparable> tmpArray(a.size());
	mergeSort(a, tmpArray, 0, a.size() - 1);
}

template <typename Comparable>
void mergeSort(vector<Comparable> &a, vector<Comparable> &tmp,int left,int right) {
	if (left < right) {
		int center = (left + right) / 2;
		mergeSort(a, tmp, left, center);
		mergeSort(a, tmp, center + 1, right);
		merge(a, tmp, left, center + 1, right);
	}
}

template <typename Comparable>
void merge(vector<Comparable> &a, vector<Comparable> &tmp, int leftPosition, int rightPosition, int rightEnd) {
	int leftEnd = rightPosition - 1;
	int tmpPos = leftPosition;
	int num = rightEnd - leftPosition + 1;

	while (leftPosition <= leftEnd&&rightPosition <= rightEnd) {
		tmp[tmpPos++] = a[leftPosition] <= a[rightPosition] ? a[leftPosition++] : a[rightPosition++];
	}
	while (leftPosition <= leftEnd) {
		tmp[tmpPos++] = a[leftPosition++];
	}
	while (rightPosition <= rightEnd) {
		tmp[tmpPos++] = a[rightPosition++];
	}
	for (int i = 0; i < num; i++, rightEnd--) {
		a[rightEnd] = tmp[rightEnd];
	}
}

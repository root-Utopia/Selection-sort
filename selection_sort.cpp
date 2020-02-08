#include <iostream>
using namespace std;

void selection_sort(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int min_idx = i, min_val = arr[min_idx];
		for (int j = i; j < n; ++j)
			if (min_val > arr[j])
				min_idx = j,
				min_val = arr[j];

		swap(arr[i], arr[min_idx]);
	}
}
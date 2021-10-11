#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *arr, int i, int j)
{
	int store = arr[i];
	arr[i] = arr[j];
	arr[j] = store;
}
int main()
{
	int n, i, j, store;
	do
	{
		printf("Input an array of n integers, n is even: ");
		scanf_s("%d", &n);
	} while (n % 2 != 0 || n <= 0);

	int half = n / 2;
	int arr[n];

	for (i = 0; i < n; i++)
	{
		printf("Enter ele %d in arr: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	// On the first half -> increasing order
	for (i = 0; i < half - 1; i++)
	{
		for (j = i + 1; j < half; j++)
		{
			if (arr[i] > arr[j])
				swap(arr, i, j);
		}
	}
	// On the second half, decreasing order
	for (i = half; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
				swap(arr, i, j);
		}
	}

	// just print the ele in the arr

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
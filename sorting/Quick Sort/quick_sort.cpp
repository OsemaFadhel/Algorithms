#include <iostream>

// Quick Sort
// Time Complexity: O(n log n)
// Space Complexity: O(log n)
// Stable: No
// Method: Partitioning

int partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int i = start - 1;

	for (int j = start; j <= end; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			std::swap(arr[i], arr[j]);
		}
	}
	i++;
	std::swap(arr[i], arr[end]);
	return i;
}

void quickSort(int arr[], int start, int end)
{
	if (end <= start)
		return;
	int pivot = partition(arr, start, end);
	quickSort(arr, start, pivot - 1);
	quickSort(arr, pivot + 1, end);
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	std::cout << "Quick Sort" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int n = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: " << std::endl;
	printArray(arr, n);

	quickSort(arr, 0, n - 1);

	std::cout << "Sorted array: " << std::endl;
	printArray(arr, n);

	return 0;
}

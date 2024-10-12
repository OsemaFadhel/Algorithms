#include <iostream>
#include <sstream>
#include <string>

// Merge Sort
	// Time Complexity: O(n log n)
	// Space Complexity: O(n)
	// Stable: Yes
	// Method: Divide and Conquer

void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1; //size of left array
	int n2 = r - m; //size of right array

	//create temp arrays and copy data. leftArr and rightArr
	int leftArr[n1], rightArr[n2];
	for (int i = 0; i < n1; i++)
		leftArr[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		rightArr[j] = arr[m + 1 + j];

	int i = 0, j = 0; //i for left array, j for right array
	int k = l; //k for the main array that will be sorted. L beacuse we are passing the index of the left array which can be 0 or any other index.

	//merge the temp arrays back into the main array.
	while (i < n1 && j < n2)
	{
		if (leftArr[i] <= rightArr[j]) //if the left array is less than or equal to the right array, then the left array will be placed in the main array.
		{
			arr[k] = leftArr[i];
			i++;
		}
		else //if the right array is less than the left array, then the right array will be placed in the main array.
		{
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}

	//copy the remaining elements of leftArr[] if there are any
	while (i < n1)
	{
		arr[k] = leftArr[i];
		i++;
		k++;
	}
	//copy the remaining elements of rightArr[] if there are any
	while (j < n2)
	{
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l >= r)
		return;

	int m = l + (r - l) / 2;

	mergeSort(arr, l, m); //passing first half of the array. will keep dividing until l >= r. Left side of the array
	mergeSort(arr, m + 1, r); //same as above but for the right side of the array.

	merge(arr, l, m, r); //merge the two halves
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	std::cout << "Merge Sort" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int n = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: " << std::endl;
	printArray(arr, n);

	mergeSort(arr, 0, n - 1);

	std::cout << "Sorted array: " << std::endl;
	printArray(arr, n);

	return 0;
}

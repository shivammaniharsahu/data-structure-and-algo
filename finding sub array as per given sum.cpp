#include <iostream>
using namespace std;
void print(int arr[], int i, int j)
{
	printf("%d %d ", i, j);
	for (int k = i; k <= j; k++) {
		printf("%d ", arr[k]);
	}
	printf("\n");
}

// Function to find sub-arrays with given sum in an array
void findSubarrays(int arr[], int n, int sum)
{
	for (int i = 0; i < n; i++)
	{
		int sum_so_far = 0;

		// consider all sub-arrays starting from i and ending at j
		for (int j = i; j < n; j++)
		{
			// sum of elements so far
			sum_so_far += arr[j];

			// if sum so far is equal to the given sum
			if (sum_so_far == sum) {
				print(arr, i, j);
			}
		}
	}
}

// main function
int main()
{
	int arr[] = { 3, 4, -7, 1, 3, 3, 1, -4 };
	int sum = 7;

	int n = sizeof(arr)/sizeof(arr[0]);
	findSubarrays(arr, n, sum);

	return 0;
}

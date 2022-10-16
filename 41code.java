// C++ program for the above approach
#include "bits/stdc++.h"
using namespace std;

// Function to find the last remaining
// array element after performing
// the given operations repeatedly
int lastElement(const int arr[], int n)
{
	// Stores the resultant sum
	int sum = 0;

	int multiplier = n % 2 == 0 ? -1 : 1;

	// Traverse the array
	for (int i = 0; i < n; i++) {

		// Increment sum by arr[i]
		// * coefficient of i-th term
		// in (x - y) ^ (N - 1)
		sum += arr[i] * multiplier;

		// Update multiplier
		multiplier
			= multiplier * (n - 1 - i)
			/ (i + 1) * (-1);
	}

	// Return the resultant sum
	return sum;
}

// Driver Code
int main()
{
	int arr[] = { 3, 4, 2, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << lastElement(arr, N);

	return 0;
}

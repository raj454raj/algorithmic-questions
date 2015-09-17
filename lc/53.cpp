#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
// Utility functions to get minimum of two integers
int min (int x, int y) {return x < y? x : y; }

// Utility functions to get maximum of two integers
int max (int x, int y) {return x > y? x : y; }

/* Returns the product of max product subarray.  Assumes that the
   given array always has a subarray with product more than 1 */
int maxSubarrayProduct(int arr[], int n)
{
    // max positive product ending at the current position
    int max_ending_here = arr[0];

    // min negative product ending at the current position
    int min_ending_here = arr[0];

    // Initialize overall max product
    int max_so_far = arr[0];

    int temp;
    /* Traverse throught the array. Following values are maintained after the ith iteration:
       max_ending_here is always 1 or some positive product ending with arr[i]
       min_ending_here is always 1 or some negative product ending with arr[i] */
    for (int i = 1; i < n; i++)
    {
        temp = max_ending_here;
        max_ending_here = max(max_ending_here+arr[i], arr[i]);
        min_ending_here = min(min(temp+arr[i], min_ending_here+arr[i]), arr[i]);
        cout << max_ending_here << " " << min_ending_here << endl;
        // update max_so_far, if needed
        if (max_so_far <  max_ending_here)
            max_so_far  =  max_ending_here;
    }

    return max_so_far;
}

// Driver Program to test above function
int main()
{
    int arr[] = {0,2,4,-3,1,-2,-1,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Sub array product is %d", maxSubarrayProduct(arr, n));
    return 0;
}


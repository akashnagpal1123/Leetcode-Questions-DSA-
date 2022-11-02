//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>
#include <stdbool.h>


// } Driver Code Ends
// User function Template for C

bool arraySortedOrNot(int arr[], int n) {

    // code here
    int f=1;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    return 1;
    else
    return 0;
}

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        bool ans = arraySortedOrNot(arr, n);
        printf("%d\n", ans);
    }
    return 0;
}
// } Driver Code Ends
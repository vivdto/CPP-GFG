//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        
        
        
        
        
        int leftSide = 0;
        int rightSide = n-1;
        int mid;
        while (leftSide<=rightSide)
        {
             mid = leftSide+(rightSide-leftSide)/2;
            
            if (arr[mid] == k){
                
            
            return mid;
            break;
            }
            else if (arr[mid]<k){
            leftSide++;
            }
            else if(arr[mid]>k) {
            rightSide--;
            }
        }
        
        
        return -1;
        
        
        
        
        
        
        
        
        
        
      /*  
        int leftSide; 
        int rightSide; 
        
        while (leftSide <= rightSide) {
            int mid = leftSide+(rightSide-leftSide)/2;
            if (arr[mid] == k )
            return mid;
            
            else if (arr[mid] < k)
            leftSide = mid + 1;
 
        // If x is smaller, ignore right half
        else
            rightSide = mid - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
            
        
        
        
        */
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
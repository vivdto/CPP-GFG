//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
  vector<int> ans;
        int maxi = a[n - 1]; // Initialize maxi with the last element
        
        // Traverse the array from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] >= maxi) { // Check if current element is greater than or equal to maxi
                ans.push_back(a[i]); // If yes, it's a leader
                maxi = a[i]; // Update maxi
            }
        }
        
        reverse(ans.begin(), ans.end()); // Reverse the leaders vector
        
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends
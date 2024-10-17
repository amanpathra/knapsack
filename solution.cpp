#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n = wt.size();  // Number of items
        vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

        // Build table dp[][] in bottom-up manner
        for (int i = 1; i <= n; i++) {
            for (int w = 1; w <= W; w++) {
                if (wt[i - 1] <= w) {
                    // Maximum of including or excluding the current item
                    dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
                } else {
                    // Exclude the item
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }

        // The maximum value that can be obtained with the given weight capacity W
        return dp[n][W];

        // this is a comment

        // this is update number 2

        // update 3

        // update 4
    }
};
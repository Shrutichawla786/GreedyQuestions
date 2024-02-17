Q.Shop in Candy Store
LINK-->https://www.geeksforgeeks.org/problems/shop-in-candy-store1145/1
CODE-> vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        vector<int>ans;
        sort(candies , candies+N);
        int mini=0;
        int maxi=0;
        int buy=0;
        int free=N-1;
        while(buy<=free){
            mini=mini+candies[buy];
            buy++;
            free=free-k;
        }
        buy=N-1;
        free =0;
        while(free<=buy){
            maxi = maxi+candies[buy];
            buy--;
            free=free+k;
        }
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }

Expected Time Complexity: O(NLogN)
Expected Auxiliary Space: O(1)

Q.Maximum Meetings in One Room
link-->vector<int> maxMeetings(int  n,vector<int> &start,vector<int> &end){
        
    
        // Your code here
        vector<int>ans;
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            v.push_back({end[i] , start[i] , i+1});
        }
        sort(v.begin() , v.end());
        int t=-1;
        for(int i=0;i<n;i++){
            if(v[i][1]>t){
                ans.push_back(v[i][2]);
                
                t=v[i][0];
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
    }

Expected Time Complexity: O(N*log(N))
Expected Auxiliary Space: O(N)

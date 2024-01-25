Link-->https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
Q.N meetings in one room

static bool cmp(pair<int ,int> a , pair<int,int>b){
        return a.second <b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int , int>>v;
        for(int i=0;i<n;i++){
            pair<int , int>p =make_pair(start[i] , end[i]);
            v.push_back(p);
        }
        sort(v.begin() , v.end() , cmp);
        int count=1;
        int ansEnd= v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>ansEnd){
                count++;
                ansEnd=v[i].second;
            }
        }
        return count;
    }
Expected Time Complexity : O(N*LogN)
Expected Auxilliary Space : O(N)

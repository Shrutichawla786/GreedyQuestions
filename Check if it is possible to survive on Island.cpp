Q.Check if it is possible to survive on Island
link-->https://www.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1
code-->int minimumDays(int S, int N, int M){
        // code here
        int sunday=S/7;
        int s=S-sunday;
        int totalFood=S*M;
        int ans=0;
        if(totalFood%N==0){
            ans= (totalFood)/N;
        }
        else{
            ans= (totalFood/N)+1;
        }
        if(ans<=s){
            return ans;
        }
        else{
            return -1;
        }
    }
Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

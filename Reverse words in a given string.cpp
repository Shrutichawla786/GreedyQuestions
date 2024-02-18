Q.Reverse words in a given string
link-->https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
code->string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        string temp="";
        for(int i=S.length()-1 ; i>=0;i--){
            if(S[i]=='.'){
                reverse(temp.begin() , temp.end());
                ans=ans+temp;
                ans.push_back('.');
                temp="";
            }
            else{
                temp.push_back(S[i]);
            }
        }
        reverse(temp.begin() , temp.end());
        ans=ans+temp;
        return ans;
    } 
Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

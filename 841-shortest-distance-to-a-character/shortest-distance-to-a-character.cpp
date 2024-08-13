class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>result(n,0);
        int pos=10000;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                pos=i;
            }
            result[i]=abs(pos-i);
        }
        for(int i=pos;i>=0;i--){
            if(s[i]==c){
                pos=i;
            }
            result[i]=min(result[i],abs(pos-i));
        }
        return result; 
    }
};
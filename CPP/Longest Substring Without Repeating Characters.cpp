#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int i=0;
        int j=0;
        int c=0;
        int mx=0;
        int n = s.size();
        while(j<n){
            if(mp[s[j]]==0){
                c++;
            }
            mp[s[j]]++;
            if(c==j-i+1){
                mx=max(mx,j-i+1);
                j++;
            }else{
                while(c<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        c--;
                    }
                    i++;
                }
                j++;
            }
        }
        return mx;
    }
};

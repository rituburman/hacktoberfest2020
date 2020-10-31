/*Given a non negative integer number num. 
For every numbers i in the range 0 ≤ i ≤ num calculate the 
number of 1's in their binary representation 
and return them as an array.

Input: 2
Output: [0,1,1]

Input: 5
Output: [0,1,1,2,1,2]

Problem link: https://leetcode.com/problems/counting-bits/
*/


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        int p=1;
        for(int i=1;i<=n;i++){
            if(i%p==0){
                v.push_back(1);
                p=p*2;
                continue;
            }
            if(i%2==0){
                v.push_back(v[i/2]);
            }
            else{
                v.push_back(v[i-1]+1);
            }
            
        }
        return v;
    }
};
// Link : https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        if(!n) return n;
        stack <int> st;
        int i = 0, ans = -1, curr  = 0;
        while(i<n) {
            if(st.empty() || h[st.top()]<h[i]) {
                st.push(i);
                continue;
            }
            while(h[st.top()]>=h[i]) {
                int top = st.top(); st.pop();
                if(st.empty()) {
                    curr = i*h[top];
                    ans = max(ans,curr);
                    break;
                }
                curr = (i - st.top() - 1)*h[top];
                ans = max(curr,ans);
            }
            st.push(i);
            i++;
        }
        while(!st.empty()) {
            int top = st.top(); st.pop();
            if(st.empty()) {
                curr = h[top]*i;
                ans = max(ans,curr);
                continue;
            }
            curr = (i - st.top() - 1)*h[top];
            ans = max(ans,curr);
        }
        return ans;
    }
};

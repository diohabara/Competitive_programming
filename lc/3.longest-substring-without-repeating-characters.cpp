/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        set<char> st;
        int ans = 0, i = 0, j = 0;
        while (i < n && j < n) {
            // try to extend the range [i, j]
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j++]);
                ans = max(ans, j - i);
            } else {
                st.erase(s.at(i++));
            }
        }
        return ans;
    }
};

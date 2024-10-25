// Problem Title: 3. Longest Substring Without Repeating Characters

int lengthOfLongestSubstring(string s) {
        int n = s.length(), l = 0, r = 0, max_len = 0;
        set<char> st;
        while(r < n){
            if(st.find(s[r]) == st.end()){
                st.insert(s[r++]);
                max_len = max(max_len, r-l);
            }
            else st.erase(s[l++]);
        }
        return max_len;
}

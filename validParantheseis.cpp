/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        //Whenever you encounter an opening bracket immediately check for its closing 
        //bracket
        for(auto bracket: s)
        {
            if(bracket == '(' || bracket == '{' || bracket == '[')
            {
                st.push(bracket);
            }
            else
            {
                if(st.empty()) return false;
                else
                {
                    char top = st.top();
                    if(bracket == ')' && top == '(')
                    {
                        st.pop();
                    }
                    else if(bracket == '}' && top == '{')
                    {
                        st.pop();
                    }
                    else if(bracket == ']' && top == '[')
                    {
                        st.pop();
                    }
                    else return false;
                }
            }           
        }
        return st.empty();
    }
        
};
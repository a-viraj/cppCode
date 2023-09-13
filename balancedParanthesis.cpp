#include <bits/stdc++.h>
using namespace std;
 
// function to check if brackets are balanced
bool areBracketsBalanced(string s)
{ 
    stack<char> st;
    char x;
 
    // Traversing the session
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '['
            || s[i] == '{')
        {
            // Push the element in the stack
            st.push(s[i]);
            continue;
        }
 
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;
 
        switch (s[i]) {
        case ')':
             
            // Store the top element in a
            x = st.top();
            st.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = st.top();
            st.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = st.top();
            st.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (st.empty());
}
 
// Driver code
int main()
{
    string s = "{()}[]";
 
    // Function call
    if (areBracketsBalanced(s))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
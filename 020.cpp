// author:  jacob curlin
// file:    lc/20.cpp
// date:    05/13/23

// Leetcode 20. Valid Parentheses


// Notes:
// stack for tracking 
// hashmap for mapping pairs ( '(', ')' ; '{', '}', ...)
// iterate through each character of string, check if in hashmap ('}' / ')' / ']')
//      if in hashmap, its pair should be @ top of stack, if it isn't, return false
//      if not in hashmap, add to stack 
// when done iterating through string, return true if stack empty, false otherwise

class Solution {
public:
    bool isValid(string s) {
        stack<char> cstack;
        unordered_map<char, char> cmap{ {'}','{'}, {')', '('}, {']', '['} };
        
        for (char c : s) {
            if (cmap.find(c) != cmap.end()) {
                if ( (!cstack.empty()) && (cstack.top() == cmap[c]) ) {
                    cstack.pop();
                } else { return false; }
            }  
            else { cstack.push(c); }
        }

        if (cstack.empty())  { return true; }  
        else                 { return false; }

    }    
};




// author:  jacob curlin
// file:    lc/017.cpp     
// date:    05/14/23

// Leetcode 17. Letter Combinations of a Phone Number

// organic
class Solution {
public:
    vector<string> results;

    vector<string> letterCombinations(string digits) {
        vector<vector<char>> clist = {
            {},                         // 0
            {},                         // 1
            {'a', 'b', 'c'},            // 2
            {'d', 'e', 'f'},            // 3
            {'g', 'h', 'i'},            // 4
            {'j', 'k', 'l'},            // 5    
            {'m', 'n', 'o'},            // 6
            {'p', 'q', 'r', 's'},       // 7 
            {'t', 'u', 'v'},            // 8
            {'w', 'x', 'y', 'z'}        // 9
        };

        string word;
        build_word(digits, 0, word, results, clist);
        return results;
    }

    void build_word(string &digits, int digit, string word, vector<string>& results, vector<vector<char>> &clist)
    {
        if (digit >= digits.size())
        {
            if (word.size() > 0) 
            {
                results.push_back(word);
            }
            return;
        }

        for (char c : clist[digits[digit]-'0']) 
        {
            string new_word = word;
            new_word.push_back(c);
            build_word(digits, digit+1, new_word, results, clist);
        }

        return;
    }
};

#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        int charmap[26] = {0};

        for (int i = 0; i < order.length(); i++)
        {
            charmap[order[i] - 'a'] = i;
        }

        for (int j = 0; j < words.size() - 1; j++)
        {
            const string &left = words[j];
            const string &right = words[j + 1];
            int minLen = min(left.length(), right.length());
            bool foundDifference = false;

            for (int i = 0; i < minLen; i++)
            {
                int leftOrder = charmap[left[i] - 'a'];
                int rightOrder = charmap[right[i] - 'a'];

                if (leftOrder < rightOrder)
                {
                    foundDifference = true;
                    break;
                }
                if (leftOrder > rightOrder)
                {
                    return false;
                }
            }

            if (!foundDifference && left.length() > right.length())
            {
                return false;
            }
        }
        return true;
    }
};

// run the solution
int main()
{
    Solution solution;

    vector<string> words1 = {"hello", "leetcode"};
    string order1 = "hlabcdefgijkmnopqrstuvwxyz";
    cout << "Example 1: " << solution.isAlienSorted(words1, order1) << endl;

    vector<string> words2 = {"kuvp", "q"};
    string order2 = "ngxlkthsjuoqcpavbfdermiywz";
    cout << "Testcase: " << solution.isAlienSorted(words2, order2) << endl;

    return 0;
}
//
//  main.cpp
//  LeetCode139_WordBreak
//
//  Created by Rui on 1/6/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int length = s.size();
        vector<bool> res(length + 1, false);
        res[0] = true;
        
        for(int i = 0; i < length + 1; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(res[j] && wordDict.find(wordDict.begin(), wordDict.end(), s.substr(j, i-j)) != wordDict.end())
                {
                    res[i] = true;
                    break;
                }
            }
        }
        
        return res[length];
    }
};

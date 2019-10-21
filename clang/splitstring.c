/*
* https://leetcode.com/problems/split-a-string-in-balanced-strings/
*
*/

int balancedStringSplit(char * s){
    int count = 0, balance = 0, index = 0;
    while (s[index] != '\0'){
        s[index] == 'L' ? ++count : --count;
        if (count == 0){
            ++balance;
        }
        ++index;
    }
    return balance;
}


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(s==letters.size())
        return letters[0];
         return letters[s];
       
        
    }
    
};
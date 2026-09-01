class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        int rev=0,s,ans=x;
        while(x>0){
            s = x%10;
            rev = rev*10+s;
            x = x/10;
        }

        if(ans == rev) return true;

    return false;
        
    }
}
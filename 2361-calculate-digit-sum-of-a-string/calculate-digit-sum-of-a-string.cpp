class Solution {
public:
    string solve(string s,int k){
        if(s.size()<=k){
            return s;
        }

        string str = "";
        for(int i=0;i<s.size();i=i+k){
            int sum = 0;
            for(int j=i;j<i+k;j++){
                if(j>=s.size()) break;
                int num = s[j]-'0';
                sum += num;
            }
            str += to_string(sum);
        }

        return solve(str,k);
    }
    string digitSum(string s, int k) {
        return solve(s,k);
    }
};
class Solution {
public:
    bool canTransform(string s, string e){
        int i = 0;
        int j;
        for(j = 0; j < s.size(); ++j){
            i ^= s[j] ^ e[j];
            //i ^= e[j];
        }
        if(i){return false;}   
        j = 0;
        int n = s.length();
        while (i < n && j < n) {
            while (i < n && s[i] == 'X')
                i++;
            while (j < n && e[j] == 'X')
                j++;
            if (s[i] != e[j] && i < n && j < n)
                return false;
            if ((s[i] == 'L' && i < j) || (s[i] == 'R' && i > j))
                return false;
            ++i;
            ++j;
        }

        return true;
    }
};

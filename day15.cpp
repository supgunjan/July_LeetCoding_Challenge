class Solution {
public:
    void rev(string &s,int i, int j)
    {
        while(i <= j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
    
        int n = s.size();
        if(n == 0) return s;

        rev(s,0,n-1);

        int i = 0;
      
        while(1)
        {
            int j = i;
            while(i < s.size() && s[i] != ' ')
            {
                i++;
            }
            int word_len = i-j;
            if(word_len > 0)
            {
                   rev(s,j,i-1);
                    continue;
            }
         
            
            while(i < s.size() && s[i] == ' ')
            {
                i++;
            }
            int space_len = i-j;
   
            if(space_len > 0)
            {
              if(j == 0)
                {
                    s = s.substr(i);
                    i -= space_len;
                }
                else if(i == s.size())
                {
                    s = s.substr(0,j);
                }
                else
                {
                    s.erase(j,space_len-1);
                    i -= space_len-1;
                }
            }
            if(i >= s.size())  break;
            
          
        }
        return s;
        
    }
};

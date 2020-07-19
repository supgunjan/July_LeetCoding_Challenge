class Solution {
public:
    string addBinary(string a, string b) {
    string res;
     char  carry = '0';
    int i = a.length()-1;
    int j = b.length()-1;
    while(i >= 0 && j >= 0)
    {
        if(a[i] == b[j])
        {
            if(a[i] == '1' && carry == '1')
            {
                carry = '1';
                res = '1'+res;
            }
            else if(a[i] == '1' && carry == '0')
            {
                carry = '1';
                res = '0'+res;
            }
            else if(a[i] == '0' && carry == '1')
            {
                carry = '0';
                res = '1'+res;
            }
            else
            {
                res = '0'+res;
            }
        }
        else
        {
            if(carry =='0')
            {
                 res = '1'+res;
                carry = '0';
            }
            else{
                res = '0'+res;
                carry = '1';
            }
           
        }
        i--;
        j--;
    }
    while(i >= 0)
    {
        if(a[i] == '1' && carry == '1')
        {
            res = '0'+res;
            carry = '1';
        }
        else if(a[i] == '0' && carry == '1')
        {
            res = '1'+res;
            carry = '0';
        }
        else if(a[i] == '0' && carry == '0')
        {
            res = '0'+res;
            carry = '0';
        }
        else
        {
            res = '1'+res;
            carry = '0';
        }
        i--;
    }
    while(j >= 0)
    {
        if(b[j] == '1' && carry == '1')
        {
            res = '0'+res;
            carry = '1';
        }
        else if(b[j] == '0' && carry == '1')
        {
            res = '1'+res;
            carry = '0';
        }
        else if(b[j] == '0' && carry == '0')
        {
            res = '0'+res;
            carry = '0';
        }
        else
        {
            res = '1'+res;
            carry = '0';
        }
        j--;
    }
        if(carry == '1') res = '1'+res;
        return res;
    }
};

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int esq = 0;
        int dir = s.length() - 1;

        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[esq]) && isalnum(s[dir]))
            {
                if (tolower(s[esq]) != tolower(s[dir]))
                    return false;
            }
            else if (!isalnum(s[esq]))
            {
                esq += 1;
                continue;
            }
            else if (!isalnum(s[dir]))
            {
                dir -= 1;
                continue;
            }

            esq += 1;
            dir -= 1;
        }
        return true;
    }
};
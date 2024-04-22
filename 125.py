class Solution:
    def isPalindrome(self, s: str) -> bool:
        esq = 0
        dir = len(s)-1

        for i in range(len(s)):
            if s[esq].isalnum() and s[dir].isalnum():
                if s[esq].lower() != s[dir].lower():
                    return False
            elif not s[esq].isalnum():
                esq += 1
                continue
            elif not s[dir].isalnum():
                dir -= 1
                continue
            esq += 1
            dir -= 1

        return True

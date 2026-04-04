class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        s = s.strip()

        word = ""

        if len(s) - 1 == 0:
            return 1

        for c in range(len(s)-1, 0, -1):
            if s[c] != " ":
                word = s[c] + word
            else:
                break

        return len(word)

        
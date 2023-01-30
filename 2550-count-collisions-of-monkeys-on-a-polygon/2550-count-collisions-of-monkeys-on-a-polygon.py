class Solution:
    def monkeyMove(self, n: int) -> int:
        mod = 10 ** 9 + 7
        res=pow(2, n, mod) - 2
        return (res+mod)%mod
class Solution:
    def champagneTower(self, poured: int, query_row: int, query_glass: int) -> float:
        # dp[i][j] = champagne in glass j of row i
        dp = [[0.0] * (i + 1) for i in range(query_row + 2)]
        dp[0][0] = poured

        for i in range(query_row + 1):
            for j in range(len(dp[i])):
                if dp[i][j] > 1:
                    excess = (dp[i][j] - 1) / 2
                    dp[i][j] = 1
                    dp[i + 1][j] += excess
                    dp[i + 1][j + 1] += excess

        return min(1, dp[query_row][query_glass])

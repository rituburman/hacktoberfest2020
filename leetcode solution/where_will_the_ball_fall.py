"""
Language: Python 3.x
1706. Where Will the Ball Fall
Medium

https://leetcode.com/problems/where-will-the-ball-fall/

Problem Statement:
You have a 2-D grid of size m x n representing a box, 
and you have n balls. The box is open on the top and bottom sides.

Each cell in the box has a diagonal board spanning two 
corners of the cell that can redirect a ball to the right or to the left.

A board that redirects the ball to the right spans the 
top-left corner to the bottom-right corner and is represented in the grid as 1.
A board that redirects the ball to the left spans the 
top-right corner to the bottom-left corner and is represented in the grid as -1.
We drop one ball at the top of each column of the box. 
Each ball can get stuck in the box or fall out of the bottom. 
A ball gets stuck if it hits a "V" shaped pattern between two boards or 
if a board redirects the ball into either wall of the box.

Return an array answer of size n where answer[i]
is the column that the ball falls out of at the bottom after 
dropping the ball from the ith column at the top, 
or -1 if the ball gets stuck in the box.
"""

class Solution:
    def findBall(self, grid: list[list[int]]) -> list[int]:
        m = len(grid)
        n = len(grid[0])
        
        # Where will the ball fall when 
        # We drop it from idx th column
        def play(idx):
            
            # start with the column
            st = idx
            
            # Exactly m (rows) redirections
            for i in range(m):
                t = grid[i][st]
                
                # Check whether stuck or not
                # t = '\' and '/' then stop
                if t == 1:
                    if st+1 < n:
                        if grid[i][st+1] == -1:
                            return -1
                
                # t = '/' and '\' then stop
                else:
                    if st-1 >= 0:
                        if grid[i][st-1] == 1:
                            return -1

                st += t
                
                # Other cases to stuck the ball
                # If \| or |/ then also stop
                if st < 0 or st >= n:
                    return -1
                
            return st
        
        ans = [ 0 for _ in range(n)]
        # Let's throw balls one by one.
        for i in range(n):
            ans[i] = play(i)
        return ans
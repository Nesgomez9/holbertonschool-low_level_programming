#!/usr/bin/python3

"""Module of island_perimeter"""


def island_perimeter(grid):
    """ This function find the perimeter of
    an island"""

    count = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            mul = 4
            if grid[i][j] == 1:
                if j < len(grid[0]) - 1:
                    if grid[i][j + 1] == 1:
                        mul -= 1
                if grid[i][j - 1] == 1 and j > 0:
                    mul -= 1
                if i < len(grid) - 1:
                    if grid[i + 1][j] == 1:
                        mul -= 1
                if grid[i - 1][j] == 1 and i > 0:
                    mul -= 1
            else:
                continue
            count += mul
    return count

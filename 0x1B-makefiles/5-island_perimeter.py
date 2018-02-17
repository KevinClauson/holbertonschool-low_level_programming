#!/usr/bin/python3
"""
Find perimeter
"""


def island_perimeter(grid):
    """
    function that finds perimiter
    """
    perm = 0
    for i, line in enumerate(grid):
        for j, value in enumerate(line):
            if (i == 0 and grid[i+1][j] == 1):
                perm += 1
            elif (i == len(grid) - 1 and grid[i-1][j] == 1):
                perm += 1
            elif (j == 0 and grid[i][j+1] == 1):
                perm += 1
            elif (j == len(line) - 1 and grid[i][j-1] == 1):
                perm += 1
            elif (i > 0 and i < len(grid) - 1 and j > 0 and j < len(line) - 1):
                if grid[i][j] == 0:
                    if grid[i][j+1] == 1:
                        perm += 1
                    if grid[i][j-1] == 1:
                        perm += 1
                    if grid[i+1][j] == 1:
                        perm += 1
                    if grid[i-1][j] == 1:
                        perm += 1
    return perm

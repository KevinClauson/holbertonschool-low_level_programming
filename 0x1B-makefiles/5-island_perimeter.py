#!/usr/bin/python3
"""
Find perimeter
"""


def island_perimeter(grid):
    """
    function that finds perimiter
    """
    perm = 0
    if not grid:
        return None
    for i, line in enumerate(grid):
        for j, value in enumerate(line):
            if grid[i][j] == 1:
                if i == 0:
                    if j == 0:
                        perm += 2
                        if j == len(line) - 1 or grid[i][j+1] == 0:
                            perm += 1
                        if i == len(grid) - 1 or grid[i+1][j] == 0:
                            perm += 1
                    elif j == len(line) - 1:
                        perm += 2
                        if grid[i][j-1] == 0:
                            perm += 1
                        if i == len(grid) - 1 or grid[i-1][j] == 0:
                            perm += 1
                    else:
                        perm += 1
                        if grid[i][j-1] == 0:
                            perm += 1
                        if grid[i][j+1] == 0:
                            perm += 1
                        if i == len(grid) - 1 or grid[i+1][j] == 0:
                            perm += 1
                elif i == len(grid) - 1:
                    if j == 0:
                        perm += 2
                        if grid[i-1][j] == 0:
                            perm += 1
                        if j == len(line) - 1 or grid[i][j+1] == 0:
                            perm += 1
                    elif j == len(line) - 1:
                        perm += 2
                        if grid[i-1][j] == 0:
                            perm += 1
                        if grid[i][j-1] == 0:
                            perm += 1
                    else:
                        perm += 1
                        if grid[i][j+1] == 0:
                            perm += 1
                        if grid[i][j-1] == 0:
                            perm += 1
                        if grid[i-1][j] == 0:
                            perm += 1
                else:
                    if j == 0:
                        perm += 1
                        if j == len(line) - 1 or grid[i][j+1] == 0:
                            perm += 1
                        if grid[i-1][j] == 0:
                            perm += 1
                        if grid[i+1][j] == 0:
                            perm += 1
                    elif j == len(line) - 1:
                        perm += 1
                        if grid[i][j-1] == 0:
                            perm += 1
                        if grid[i-1][j] == 0:
                            perm += 1
                        if grid[i+1][j] == 0:
                            perm += 1
                    else:
                        if grid[i][j+1] == 0:
                            perm += 1
                        if grid[i][j-1] == 0:
                            perm += 1
                        if grid[i+1][j] == 0:
                            perm += 1
                        if grid[i-1][j] == 0:
                            perm += 1
    return perm

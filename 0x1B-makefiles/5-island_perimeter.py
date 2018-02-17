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
            if grid[i][j] == 1:
                if i == 0:
                    if j == 0:
                        perm += 2
                        #print("1 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if j == len(line) - 1 or grid[i][j+1] == 0:
                            perm += 1
                         #   print("2 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if i == len(grid) - 1 or grid[i+1][j] == 0:
                            perm += 1
                          #  print("3 sum:{}, i: {}, j: {}".format(perm, i, j))
                    elif j == len(line) - 1:
                        perm += 2
                       # print("4 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j-1] == 0:
                            perm += 1
                        #    print("5 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if i == len(grid) - 1 or grid[i+1][j] == 0:
                            perm += 1
                         #   print("6 sum:{}, i: {}, j: {}".format(perm, i, j))
                    else:
                        perm += 1
                       # print("7 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j-1] == 0:
                            perm += 1
                        #    print("8 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j+1] == 0:
                            perm += 1
                         #   print("9 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if i == len(grid) - 1 or grid[i+1][j] == 0:
                            perm += 1
                          #  print("10 sum:{}, i: {}, j: {}".format(perm, i, j))
                elif i == len(grid) - 1:
                    if j == 0:
                        perm += 2
                       # print("11 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i-1][j] == 0:
                            perm += 1
                        #    print("12 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if j == len(line) - 1 or grid[i][j+1] == 0:
                            perm += 1
                         #   print("13 sum:{}, i: {}, j: {}".format(perm, i, j))
                    elif j == len(line) - 1:
                        perm += 2
                       # print("14 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i-1][j] == 0:
                            perm += 1
                        #    print("15 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j-1] == 0:
                            perm += 1
                         #   print("16 sum:{}, i: {}, j: {}".format(perm, i, j))
                    else:
                        perm += 1
                       # print("17 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j+1] == 0:
                            perm += 1
                        #    print("18 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j-1] == 0:
                            perm += 1
                         #   print("19 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i-1][j] == 0:
                            perm += 1
                          #  print("20 sum:{}, i: {}, j: {}".format(perm, i, j))
                else:
                    if j == 0:
                        perm += 1
                      #  print("21 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if j == len(line) - 1 or grid[i][j+1] == 0:
                            perm += 1
                       #     print("22 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i-1][j] == 0:
                            perm += 1
                        #    print("23 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i+1][j] == 0:
                            perm += 1
                         #   print("24 sum:{}, i: {}, j: {}".format(perm, i, j))
                    elif j == len(line) - 1:
                        perm += 1
                       # print("25 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j-1] == 0:
                            perm += 1
                          #  print("26 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i-1][j] == 0:
                            perm += 1
                        #    print("27 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i+1][j] == 0:
                            perm += 1
                         #   print("28 sum:{}, i: {}, j: {}".format(perm, i, j))
                    else:
                        if grid[i][j+1] == 0:
                            perm += 1
                          #  print("29 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i][j-1] == 0:
                            perm += 1
                           # print("30 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i+1][j] == 0:
                            perm += 1
                           # print("31 sum:{}, i: {}, j: {}".format(perm, i, j))
                        if grid[i-1][j] == 0:
                            perm += 1
                           # print("32 sum:{}, i: {}, j: {}".format(perm, i, j))
    return perm

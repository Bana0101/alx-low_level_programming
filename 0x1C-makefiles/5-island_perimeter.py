#!/usr/bin/python3
""" module documentation """


def island_perimeter(grid):
    """ island perimeter  function """

    sides = 0
    concat = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                sides += 1
                if (j < len(grid[0]) - 1 and grid[i][j + 1] == 1):
                    concat += 1
                if (i < len(grid) - 1 and grid[i + 1][j] == 1):
                    concat += 1
    return sides * 4 - concat * 2

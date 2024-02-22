#!/usr/bin/python3
"""Defines an island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
        Args:
            grid (list): A list of list of integers representing an island
    """

    grid_h = len(grid)
    grid_w = len(grid[0])
    p = 0

    for i in range(grid_h):
        for j in range(grid_w):
            if grid[i][j] == 1:
                p += 4
                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2
                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2
    return p

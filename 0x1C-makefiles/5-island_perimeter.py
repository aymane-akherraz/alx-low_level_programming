#!/usr/bin/python3
"""Defines an island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
        Args:
            grid (list): A list of list of integers representing an island
    """

    grid_h = len(grid) - 1
    grid_w = len(grid[0]) - 1
    isd_size = 0

    for i in range(1, grid_h):
        for j in range(1, grid_w):
            if grid[i][j] == 1:
                isd_size += 1
                break

    return 4 * isd_size

#!/usr/bin/python3
""" Island Perimeter."""


def island_perimeter(grid):
    """ function that calculate island perimeter.
    Args:
        grid: ...
    """
    c = 0
    for i in range(len(grid)):
        for j in grid[i]:
            if j == 1:
                c += 1
                break
    return c * 4

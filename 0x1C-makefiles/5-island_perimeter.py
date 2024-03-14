#!/usr/bin/python3
"""
function def island_perimeter(grid):
"""


def island_perimeter(grid):
    """finds perimeter of an island using grid"""

    """get no of land zones"""

    if not isinstance(grid, list):
        return 0

    if len(grid) == 0:
        return 0

    land = 0;

    for g in grid:
        for p in g:
            if p == 1:
                land = land + 1

    perimeter = (2 * land) + 2

    return perimeter

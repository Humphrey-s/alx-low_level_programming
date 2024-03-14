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

    land = 0
    width = 0
    length = 0
    p_land = 0

    for g in grid:

        land = 0
        for i in g:
            if i == 1:
                land += 1
        
        if land > length:
            length += land - length

        if land != 0:
            width = width + 1


    perimeter = (width + length) * 2

    return perimeter

#!/usr/bin/python3
"""
    5-island_perimeter
    Module containing function 'island_perimeter'
"""

def island_perimeter(grid):
    """
        island_perimeter: calculates the perimeter of a list of lists grid
        @grid - list of lists
        Return: perimeter
    """
    if (type(grid) is not list):
        return (0)

    rtn_value = 0

    for i in range(len(grid)):
        width = grid[i]
        prev_i = [] if (i == 0) else grid[i-1]

        val = 0
        for j in range(len(width)):
            if (width[j] != 0):
                cell = width[j]
            else:
                continue
            val = 4
            # length behind
            if ((j > 0) and (width[j - 1] != 0)):
                val -= 1
            #length forward
            if ((j != (len(width) - 1)) and (width[j + 1] != 0)):
                val -= 1

            #height
            if (prev_i != []):
                if (prev_i[j] == 1):
                    val -= 2

            rtn_value += val
    return (rtn_value)



#!/usr/bin/python3

"""solving an interview quiz"""


def island_perimeter(grid):
""" returns the perimeter of the island described in grid"""

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

        for i in range(rows):
            for j in range(columns):
                if grid[i][j] == 1:
                    if grid[i - 1][j] == 0:
                        perimeter += 1                                                                                                      if grid[i + 1][j] == 0:
                        perimeter += 1
                    if grid[i][j - 1] == 0:                                                                                                     perimeter += 1
                    if grid[i][j + 1] == 0:
                        perimeter += 1
        return perimeter

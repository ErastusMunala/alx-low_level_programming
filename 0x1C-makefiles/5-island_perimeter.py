i#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, j, k):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if j <= 0 or not grid[j - 1][k]:
        num += 1
    if k <= 0 or not grid[j][k - 1]:
        num += 1
    if k >= len(grid[j]) - 1 or not grid[j][k + 1]:
        num += 1
    if j >= len(grid) - 1 or not grid[j + 1][k]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    for j in range(len(grid)):
        for k in range(len(grid[j])):
            if grid[j][k]:
                perim += num_water_neighbors(grid, j, k)

    return perim

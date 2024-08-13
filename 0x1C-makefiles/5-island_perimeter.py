#!/usr/bin/python3

"""
        Island perimeter

        function def island_perimeter(grid):
        that returns the perimeter of the island described in grid:

        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected
        horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water,
        and there is one island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t
        connected to the water around the island).
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Parameters:
    grid (list of list of int): 2D list where 0 represents water and 1 represents land.

    Returns:
    int: The perimeter of the island.
    """
    # Get the number of rows and columns in the grid
    rows = len(grid)
    cols = len(grid[0])

    # Initialize the perimeter to 0
    perimeter = 0

    # Direction vectors for checking neighboring cells
    # (up, down, left, right)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    # Iterate through each cell in the grid
    for r in range(rows):
        for c in range(cols):
            # Check if the current cell is land (1)
            if grid[r][c] == 1:
                # For each land cell, check its 4 neighbors
                for dr, dc in directions:
                    # Calculate the coordinates of the neighbor
                    nr, nc = r + dr, c + dc
                    # Check if the neighbor is out of bounds or is water
                    if (nr < 0 or nr >= rows or nc < 0 or nc >= cols or grid[nr][nc] == 0):
                        perimeter += 1

    return perimeter


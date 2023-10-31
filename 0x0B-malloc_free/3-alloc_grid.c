#include "main.h"
#include <stdlib.h>

/* Function declaration */
void initialize_grid(int **grid, int width, int height);

/**
 * alloc_grid - create a 2D grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
    int **mee;
    int x;

    if (width <= 0 || height <= 0)
        return (NULL);

    mee = malloc(sizeof(int *) * height);

    if (mee == NULL)
        return (NULL);

    for (x = 0; x < height; x++)
    {
        mee[x] = malloc(sizeof(int) * width);

        if (mee[x] == NULL)
        {
            for (; x >= 0; x--)
                free(mee[x]);

            free(mee);
            return (NULL);
        }
    }

    initialize_grid(mee, width, height);

    return (mee);
}

/**
 * initialize_grid - set all elements of the grid to 0
 * @grid: the 2D grid
 * @width: width of the grid
 * @height: height of the grid
 */
void initialize_grid(int **grid, int width, int height)
{
    int x, y;

    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
        {
            grid[x][y] = 0;
        }
    }
}

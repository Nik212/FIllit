/* The idea of this program is to handle any possible grid that we can obtain after
reading the file.
After we process the grid we have to transfer some data to the next step
Main assumptions of this step:
1) The grid is ok.
2) A matrix 4x4 is received\ after the previous step



 	/* extra shit. Should be put in another function
	i = 0;
	while (I_PIECE[i] == coords[i])
		i++;
	if (i == 8)
		printf("I_PIECE!!");

 */
#include <stdio.h>
#define I_PIECE (int[8]) {0,0,0,1,0,2,0,3}

void normalizer(int min_x, int min_y, int *coords)
{
	int i;

	i = 0;
	while (i <= 7)
	{
		if (i % 2 == 0)
			coords[i] = coords[i] - min_x;
		else
			coords[i] = coords[i] - min_y;
		i++;
	}
}

void min_max(int *coords)
{
	int i;
	int min_x = 3;
	int min_y = 3;

	i = 0;
	while (i <= 7)
	{
		if (i % 2 == 0)
		{
			//printf("min_x =%d a[i] = %d \n", min_x, coords[i]);
			if (min_x > coords[i]) min_x = coords[i];
		}
		else
		{
			//printf("min_y =%d a[i] = %d\n", min_y, coords[i]);
			if (min_y > coords[i]) min_y = coords[i];
		}
		i++;
	}
	printf("minX %d, minY %d \n", min_x, min_y);
	return (normalizer(min_x, min_y, coords));
}

void read_coordinates(char **grid)
{
	int i;
	int j;
	int coords[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int x;
	int y;

	i = 0;
	x = 0;
	y = 1;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (grid[i][j] == '#')
			{
				coords[x] = i;
				coords[y] = j;
				x = x + 2;
				y = y + 2;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i <= 7)
        printf("%d", coords[i++]);
    printf("\n");
	= min_max(coords);
}

int main()
{
	char grid[4][4] =
	{
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'},
		{'#', '#', '#', '#'},
	};
	char **test;
	*test = grid;
	read_coordinates(&test);
}

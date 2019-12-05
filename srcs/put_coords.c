#include "fillit.h"

void put_coords(char *coords, char **grid, int matrix_width, int matrix_height)
{
	int i;
	int j;
	int x;
	int y;

	x = 0;
	y = 1;
	j = 0;
	i = 0;
	/*while (i <= 7)
	{
		coords[i] = coords[i] -'0'; uncomment this part if print_kek removed
		i++;
	}*/
	while (i <= matrix_width - 1)
	{
		j = 0;
		while (j <= matrix_height - 1)
		{
			if ((coords[x] == i) && (coords[y] == j))
			{
				grid[i][j] = '#';
				x = x + 2;
				y = y + 2;
			}
			printf("%c", grid[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
void print_kek(char *kek)
{
	int i = 0;
	while (i <= 7)
		{
			kek[i] = kek[i] -'0';
			printf("%d", kek[i]);
			i++;
		}
		printf("\n");
}
int	main()
{
	int matrix_height = 4;
	int matrix_width = 4;
	char *coords;
	char **grid;
	t_list *my_list;

	my_list = put_in_list();
	t_list *head = my_list;
	while (head)
	{
		coords = head->content;
		print_kek(coords);
		grid = dynamic_array_test(matrix_height, matrix_width);
		put_coords(coords, grid, 4, 4);
		free(grid);
		grid = NULL;
		head = head->next;
	}
}

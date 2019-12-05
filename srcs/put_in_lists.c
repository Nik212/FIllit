#include "fillit.h"

t_list	*put_in_list(void)
{
	int		iteration;
	int		i;
	t_list	*tetris_list;
	char*	coords_char;
	int		coords[8] = {0,0,0,1,0,2,0,3};
	int		coords_test[8] = {0,1,0,2,1,0,1,1};
	iteration = 0;
	while (iteration != 2)
	{
		i = 0;
		coords_char = ft_memalloc(sizeof(char)*8);
		if (iteration == 0)
		{
			printf("ITERATION 0 STARTS\n");
			while (i <= 7)
			{
				coords_char[i] = coords[i] +'0';
				i++;
			}
			tetris_list = ft_lstnew(coords_char, sizeof(char)*8);
		}
		else
		{
			while (i <= 7)
			{
				coords_char[i] = coords_test[i] +'0';
				i++;
			}
			ft_lstadd(&tetris_list, ft_lstnew(coords_char, sizeof(char)*8));
		}
		free(coords_char);
		coords_char = NULL;
		iteration++;
	}
	return(tetris_list);
}

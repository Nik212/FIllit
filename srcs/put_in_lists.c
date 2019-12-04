#include "fillit.h"
#include <stdio.h>
int main()
{
	int coords[8] = {0,0,0,1,0,2,0,3};
	t_list *tetris_list = ft_lstnew(&coords, sizeof(int));
	printf("%d", *(tetris_list->content));
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct    s_list
{
    void            *content;
    size_t            content_size;
    struct s_list    *next;
}                t_list;
void    ft_lstadd(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alst = new;
}
char    *ft_memalloc(size_t size)
{
    char *start;

    start = malloc(size);
    if (!start)
        return (NULL);
    bzero(start, size);
    return (start);
}
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *ptr_dst;
    char    *ptr_src;
    size_t    i;

    ptr_dst = dst;
    ptr_src = (char *)src;
    i = 0;
    while (i < n)
    {
        *(ptr_dst + i) = *(ptr_src + i);
        i++;
    }
    return (dst);
}
t_list    *ft_lstnew(void const *content, size_t content_size)
{
    t_list    *lst;

    if (!(lst = (t_list *)malloc(sizeof(*lst))))
        return (NULL);
    if (!content)
    {
        lst->content = NULL;
        lst->content_size = 0;
    }
    else
    {
        if (!(lst->content = ft_memalloc(content_size)))
        {
            free(lst);
            return (NULL);
        }
        ft_memcpy(lst->content, content, content_size);
        lst->content_size = content_size;
    }
    lst->next = NULL;
    return (lst);
}
t_list    *put_in_list(void)
{
    int iteration;
    int        i;
    t_list *tetris_list;
    char*    coords_char;
    int        coords[8] = {0,0,0,1,0,2,0,3};
    int        coords_test[8] = {0,1,0,2,1,0,1,1};
    iteration = 0;
    while (iteration != 2)
    {
        i = 0;
        coords_char = ft_memalloc(sizeof(char)*8);
        if (iteration == 0)
        {
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


int    main()
{
    t_list *my_list;
	char *kek;
    my_list = put_in_list();
	while (my_list)
	{
		kek = my_list->content;
		my_list = my_list->next;
	}
  return 0;
}

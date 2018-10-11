#include <stdio.h>
#include "ft_btree.h"

int		main(void)
{
	t_btree *btree;

	btree = btree_create_node("Hello World!");
	printf("%s\n", btree->item);
	return (0);
}

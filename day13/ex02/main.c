#include <unistd.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item);
void	btree_apply_infix(t_btree *root, void (*apply)(void *));

void	applyf(void *item)
{
	write(1, item, 1);
}

int		main(void)
{
	t_btree *btree1;
	t_btree *btree2;
	t_btree *btree3;
	t_btree *btree4;
	t_btree *btree5;
	t_btree *btree6;
	t_btree *btree7;
	t_btree *btree8;
	t_btree *btree9;
	t_btree *btree10;
	
	btree1 = btree_create_node("A");
	btree2 = btree_create_node("B");
	btree3 = btree_create_node("C");
	btree4 = btree_create_node("D");
	btree5 = btree_create_node("E");
	btree6 = btree_create_node("F");
	btree7 = btree_create_node("G");
	btree8 = btree_create_node("H");
	btree9 = btree_create_node("I");
	btree10 = btree_create_node("J");

	btree1->left = btree2;
	btree1->right = btree3;

	btree2->left = btree4;
	btree2->right = btree5;

	btree3->left = btree6;
	btree3->right = btree7;

	btree4->right = btree8;

	btree6->left = btree9;
	btree6->right = btree10;

	btree_apply_infix(btree1, applyf);
	return (0);
}

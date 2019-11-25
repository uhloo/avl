/* Function to line by line print level order traversal a tree*/
void printLevelOrder(struct node* root)
{
	int h = height(root);
	int i;
	for (i=1; i<=h; i++)
	{
		printGivenLevel(root, i);
		printf("\n");
	}
}

/* Print nodes at a given level */
void printGivenLevel(struct node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		printf("%d ", root->data);
	else if (level > 1)
	{
		printGivenLevel(root->left, level-1);
		printGivenLevel(root->right, level-1);
	}
}

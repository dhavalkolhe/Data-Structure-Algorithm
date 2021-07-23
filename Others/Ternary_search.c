
#include<stdio.h>
#include<stdlib.h>


struct Node
{
	char key;
	int isleaf;
	struct Node *left;
	struct Node *eq;
	struct Node *right;
};


struct Node *createNode(char key)
{
	struct Node *temp =
		(struct Node*)malloc(sizeof(struct Node));
	temp->key = key;
	temp->isleaf = 0;
	temp->left = NULL;
	temp->eq = NULL;
	temp->right = NULL;
	return temp;
};


void insert_node(struct Node **root ,char *s)
{
	if (!(*root))
		(*root) = createNode(*s);

	if ((*s)<(*root)->key)
		insert_node( &(*root)->left ,s);

	else if ((*s)>(*root)->key)
		insert_node( &(*root)->right ,s);

	else if ((*s) == (*root)->key)
	{
		if (*(s+1) == '\0')
		{
			(*root)->isleaf = 1;
			return;
		}
		insert_node( &(*root)->eq ,s+1);
	}
}


void display(struct Node *root, char str[], int level)
{
	if (!root)
		return;

	display(root->left ,str ,level);
	str[level] = root->key;

	if (root->isleaf == 1)
	{
		str[level+1] = '\0';
		printf("%s\n",str);
	}

	display(root->eq ,str ,level+1);
	display(root->right ,str ,level);
}


int isLeaf(struct Node *root)
{
	return root->isleaf == 1;
}


int isFreeNode(struct Node *root)
{
	if (root->left ||root->eq ||root->right)
		return 0;
	return 1;
}


int delete_node(struct Node *root, char str[],
				int level ,int n)
{
	if (root == NULL)
		return 0;


	
	if (str[level+1] == '\0')
	{
		
		if (isLeaf(root))
		{
			root->isleaf=0;
			return isFreeNode(root);
		}

		
		else
			return 0;
	}
	else
	{
		
		if (str[level] < root->key)
			delete_node(root->left ,str ,level ,n);
		else if (str[level] > root->key)
			delete_node(root->right ,str ,level ,n);

		
		else if (str[level] == root->key)
		{
			
			if( delete_node(root->eq ,str ,level+1 ,n) )
			{
				
				free(root->eq);
				return !isLeaf(root) && isFreeNode(root);
			}
		}
	}

	return 0;
}


int main()
{
	struct Node *temp = NULL;

	insert_node(&temp ,"CAT");
	insert_node(&temp ,"BUGS");
	insert_node(&temp ,"CATS");
	insert_node(&temp ,"UP");

	int level = 0;
	char str[20];
	int p = 0;

	printf( "1.Content of the TST before "
			"deletion:\n" );
	display(temp ,str ,level);

	level = 0;
	delete_node(temp ,"CAT" ,level ,5);

	level = 0;
	printf("\n2.Content of the TST after "
		"deletion:\n");
	display(temp, str, level);
	return 0;
}

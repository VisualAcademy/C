#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct tnode
{
	struct tnode* left;
	char name[25];
	struct tnode* right;
};

struct tnode* talloc(void);

int main(void)
{
	char dat[25];
	struct tnode* root, * p, * old;

	root = talloc();
	scanf("%s", root->name);
	root->left = root->right = NULL; // 루트 초기화

	while (scanf("%s", dat) != EOF)
	{
		p = root;
		while (p != NULL)
		{
			old = p;
			if (strcmp(dat, p->name) <= 0)
			{
				p = p->left;
			}
			else
			{
				p = p->right;
			}

			p = talloc();
			strcpy(p->name, dat);
			p->left = p->right = NULL;
			if (strcmp(dat, old->name) <= 0)
			{
				old->left = p;
			}
			else
			{
				old->right = p;
			}
		}
	}
}

struct tnode* talloc(void)
{
	return (struct tnode*)malloc(sizeof(struct tnode));
}
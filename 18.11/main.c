/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "bst.h"
#include <stdio.h>
int main ()
{
  int n, i, num, order;
  printf ("Enter the number of nodes for the tree: ");
  scanf ("%d", &n);
  struct BSTNode *root = NULL, *newNode;

  for (i = 0; i < n; i++)
    {
      printf ("Enter a node value: ");
      scanf ("%d", &num);

      newNode = create (num);
      root = insert (root, newNode);
    }

  printf
    ("Enter the order for traversal and printing (0-Preorder, 1-Inorder, 2-Postorder): ");
  scanf ("%d", &order);

  traverseBST (root, order);
  deleteBST (root);
  return 0;
}

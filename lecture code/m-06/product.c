#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"product.h"

Product* createProducts(int n)
{
	Product* prods = (Product*)malloc(n*sizeof(Product));
	return prods;
}

void setProductInfo(Product* products, int n)
{
	int i=0;
	for(i=0; i<n; i++)
	{
		(products+i)->price = (rand()%100)+1;
		//(*(products+i)).price = (rand()%100)+1; 
		//products[i].price = (rand()%100)+1;
		products[i].id = (rand()%10)+1;
		strcpy(products[i].name, "someProduct");
	}
}

Product mostExpensiveProduct(Product products[], int n)
{
	int i=0, maxPrice=-1, bestProductIdx=-1;
	for(i=0; i<n; i++)
	{
		if(products[i].price > maxPrice) // productPrice[bestProductIdx]
		{
			maxPrice = products[i].price;
			bestProductIdx = i;
		}
	}
	return products[bestProductIdx];
}

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
	// id,name,price
	// 5,iphone12,100
	// 3,google pixel,500
	for(i=0; i<n; i++)
	{
		scanf("%d,%[^,],%lf", &(products[i].id), products[i].name, &(products[i].price));
		/*
		(products+i)->price = (rand()%100)+1;
		//(*(products+i)).price = (rand()%100)+1; 
		//products[i].price = (rand()%100)+1;
		products[i].id = (rand()%10)+1;
		strcpy(products[i].name, "someProduct");
		*/
	}
}

Product mostExpensiveProduct(Product products[], int n)
{
	int i=0, bestProductIdx=-1;
	double maxPrice = -1;
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

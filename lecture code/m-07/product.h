#ifndef PRODUCT_H
#define PRODUCT_H

typedef struct Product
{
	double price;
	int id;
	char name[20];
} Product;

Product* createProducts(int n);
void setProductInfo(Product products[], int n);
Product mostExpensiveProduct(Product products[], int n);

#endif

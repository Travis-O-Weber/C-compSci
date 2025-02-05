#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"product.h"

int main(int argc, char* argv[])
{
	srand(time(0));
	int n=0;
	printf("Enter the number of products : ");
	scanf("%d", &n);
	Product* products = createProducts(n); // (int*)malloc(n*sizeof(int)); // int products[n];
	// char productName[n][20];
	setProductInfo(products, n);
	Product bestProduct = mostExpensiveProduct(products, n);
	printf("Product with the highest price : %d, %d, %s\n", bestProduct.price, bestProduct.id, bestProduct.name);

	return 0;
}

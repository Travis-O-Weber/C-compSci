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

	// price for 'n' products
	Product* products = createProducts(n); // (int*)malloc(n*sizeof(int));
	// Average price for 'n' products
	double average;
	
	// set product prices randomly
	setProductPrice(products, n);

	// calculate average price of products
	average = calculateAverageProductPrice(products, n);
	printf("Average price for %d products = %lf\n", n, average);

	Product bestProduct = mostExpensiveProduct(products, n);
	printf("Product with the highest price = %s , %d\n", bestProduct.name, bestProduct.id);

	free(products);
	return 0;
}

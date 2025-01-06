/*structure with pointer*/
#include<stdio.h>

struct item{
	char itemName[30];
	int qty;
	float price;
	float amount;
};

int main()
{
	struct item itm;
	struct item *Pitem;
	Pitem = &itm;

	printf("Enter product name: ");
	//scanf("%s" Pitem->itemName);
	gets(Pitem->itemName);
	printf("Enter the quantity: ");
	scanf("%d", &Pitem->qty);

	printf("Enter the price: ");
	scanf("%f",&Pitem->price);

	Pitem->amount = (float)Pitem->qty * Pitem->price;

	printf("\nName: %s",Pitem->itemName);
	printf("\nPrice: %f",Pitem->price);
	printf("\nQuantity: %d",Pitem->qty);
	printf("\nTotal Amount: %f",Pitem->amount);

	return 0;
}

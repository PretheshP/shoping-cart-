//----C Program which can be used in a shop to----- 
//a, Initially store the total of each items available in the shop.
//b, Add items to the cart to buy.
//c, Print the bill of the items bought by the coustomer.
//d, Display the remaining stock of items in the shop.
//Input should only be numbers. 
//----Developed by Prethesh P -----


#include <stdio.h>

int main()
{
	printf("__________________________________________________________\n");
	printf("\t\tVVDN Electronics\n");
	printf("__________________________________________________________\n");
	//variable declaration

	int item_num=0;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, opt11, opt12, opt13, opt14, opt15, opt16;
	int Item1_Quantity=0,Item2_Quantity=0,Item3_Quantity=0;
	int ThermalCamera_no = 80, wifi_Modem_no = 120, Camera_180deg_no = 80;
	int Item1_mrp = 4000, Item2_mrp = 2000, Item3_mrp = 5000;
	int price1=0, price2=0, price3=0, Total=0;
	char name[20];
	printf("Enter your name");
	fgets(name, 20, stdin);
	//menu
	menu:
	
	printf("NO   Item\t\tStock\t\tPrice(1Qty)\n\n(1) Thermal Camera\t%d\t\t%d\n(2) 5G Modem\t\t%d\t\t%d\n(3) 180deg Camera\t%d\t\t%d\n", ThermalCamera_no, Item1_mrp, wifi_Modem_no, Item2_mrp, Camera_180deg_no, Item3_mrp);
	printf("__________________________________________________________\n");
	printf("\nSelect the item Number\n");
	scanf("%d",&item_num);
	switch(item_num)
	{
		case 1: printf("How many Quantity of Thermal Camera do you like to purchase\n");
		scanf("%d",&Item1_Quantity); 
		if (Item1_Quantity <= ThermalCamera_no)
		{
			ThermalCamera_no = ThermalCamera_no -Item1_Quantity;
			printf("%d-Thermal Camera has added to your cart\n",Item1_Quantity);
			printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
			scanf("%d",&opt4);
			switch(opt4)
					{
						case 1: goto menu;
						default : goto billing;
					} 
		}
		else if (ThermalCamera_no == 0)
		{
			printf("Sorry no stock remaining, please visit later\n");
			printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
			scanf("%d",&opt13);
			switch(opt13)
					{
						case 1: goto menu;
						default : goto billing;
					} 
		}
		else
		{
			printf("We only have %d Thermal Camera in the stock\n",ThermalCamera_no);
			printf("Do you want to add %d Thermal Camera to the cart(Type 1 for YES/Type 0 for NO)\n",ThermalCamera_no);
			scanf("%d", &opt1);
			switch(opt1)
			{
				case 1:printf("%d-Thermal Camera has added to your cart\n",ThermalCamera_no);
					Item1_Quantity = ThermalCamera_no;
					ThermalCamera_no = 0 ;
					
					printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt2);
					switch(opt2)
					{
						case 1: goto menu;
						default : goto billing;
					}
				default :printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt3);
					switch(opt3)
					{
						case 1: goto menu;
						default : goto ThankYou;
					}   
			}
		}
		break;
		// 2nd item
		case 2: printf("How many Quantity of 5G Modem do you like to purchase\n");
			scanf("%d",&Item2_Quantity); 
		if (Item2_Quantity <= wifi_Modem_no)
		{
			wifi_Modem_no = wifi_Modem_no -Item1_Quantity;
			printf("%d-5G Modem has added to your cart\n",Item2_Quantity);
			printf("Any thing else to purchase(1Type 1 for YES/Type 0 for NO)\n");
			scanf("%d",&opt5);
			switch(opt5)
					{
						case 1: goto menu;
						default : goto billing;
					} 
		}
		else if (wifi_Modem_no == 0)
		{
			printf("Sorry no stock remaining, please visit later\n");
			printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
			scanf("%d",&opt14);
			switch(opt14)
					{
						case 1: goto menu;
						default : goto billing;
					} 
		}
		else
		{
			printf("We only have %d 5G Modem in the stock\n",wifi_Modem_no);
			printf("Do you want to add %d 5G Modem to the cart(Type 1 for YES/Type 0 for NO)\n",wifi_Modem_no);
			scanf("%d", &opt6);
			switch(opt6)
			{
				case 1:printf("%d-5G Modem has added to your cart\n",wifi_Modem_no);
					Item2_Quantity = wifi_Modem_no;
					wifi_Modem_no = 0 ;
					
					printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt7);
					switch(opt7)
					{
						case 1: goto menu;
						default : goto billing;
					}
				default :printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt8);
					switch(opt8)
					{
						case 1: goto menu;
						default : goto ThankYou;
					}   
			}
		}
		break;
		// 3rd item
		case 3: printf("How many Quantity of 180deg Camera do you like to purchase\n");
			scanf("%d",&Item3_Quantity);
		if (Item3_Quantity <= Camera_180deg_no)
		{
			Camera_180deg_no = Camera_180deg_no -Item3_Quantity;
			printf("%d-180deg Camera has added to your cart\n",Item3_Quantity);
			printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
			scanf("%d",&opt9);
			switch(opt9)
					{
						case 1: goto menu;
						default : goto billing;
					} 
		}
		else if (Camera_180deg_no == 0)
		{
			printf("Sorry no stock remaining, please visit later\n");
			printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
			scanf("%d",&opt15);
			switch(opt15)
					{
						case 1: goto menu;
						default : goto billing;
					} 
		}
		else
		{
			printf("We only have %d 180deg Camera in the stock\n",Camera_180deg_no);
			printf("Do you want to add %d 180deg Camera to the cart(Type 1 for YES/Type 0 for NO)\n",Camera_180deg_no);
			scanf("%d", &opt10);
			switch(opt10)
			{
				case 1:printf("%d-180deg Camera has added to your cart\n",Camera_180deg_no);
					Item3_Quantity = Camera_180deg_no;
					Camera_180deg_no = 0 ;
					
					printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt11);
					switch(opt11)
					{
						case 1: goto menu;
						default : goto billing;
					}
					
				default :printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt12);
					switch(opt12)
					{
						case 1: goto menu;
						default : goto ThankYou;
					}   
			}
		}
		break;

		default :printf("Invalid input\n");
			printf("Any thing else to purchase(Type 1 for YES/Type 0 for NO)\n");
					scanf("%d", &opt16);
					switch(opt16)
					{
						case 1: goto menu;
						default : goto ThankYou;
					}   


			

		  
	}
	//billing
	billing:
	if (Item1_Quantity && Item2_Quantity && Item3_Quantity == 0)
	{
		printf("Thank you\n");
	}
	printf("\n\n\n\n\n\n\n\n\n\n__________________________________________________________\n");
	printf("\t\tVVDN Electronics\n");
	printf("__________________________________________________________\n");
	printf("Item\t\tQuantity\tUnit price\tPrice(Rs)\n\n");

	if (Item1_Quantity > 0)
	{
		price1 = Item1_Quantity * Item1_mrp;
		printf("ThermalCamera\t%d\t\t%d\t\t%d\n", Item1_Quantity, Item1_mrp,price1); 
		goto Item2;

	}
	Item2:
	if (Item2_Quantity > 0)
	{
		price2 = Item2_Quantity * Item2_mrp;
		printf("5G Modem\t%d\t\t%d\t\t%d\n", Item2_Quantity, Item2_mrp, price2); 
		goto Item3;
	}
	Item3:
	if (Item3_Quantity > 0)
	{
		price3 = Item3_Quantity * Item3_mrp;
		printf("180deg Camera\t%d\t\t%d\t\t%d\n", Item3_Quantity, Item3_mrp,price3);
	}
	Total = price1 + price2 + price3;
	printf("\n\n\nTotal Price:\t\t\t\t%d:Rs\n", Total);
	
	ThankYou: printf("\n\n\nPhone No: 8921331731\n ");
	printf("\n\t\t%sTHANK YOU FOR VISITING\n\n\n",name);
	printf("__________________________________________________________\n");

}

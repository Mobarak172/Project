#include <stdio.h>

int main() {
    int b;
    do {

char* products[] = {"Mouse", "Keyboard", "Computer", "Laptop", "Router"};
int prices[] = {50, 100, 1500, 2000, 1200};

  int product_choice, quantity, total_price = 0;
  char choice;
  int purchased_products[sizeof(products) / sizeof(*products)] = {0};


  printf("Available Products :\n");

  for (int i = 0; i < sizeof(products)/ sizeof(*products); i++) {
    printf("%d. %s - Price: %d\n", i + 1, products[i], prices[i]);
  }

  do {
    printf("\nChoose a product (by number): ");
    scanf("%d", &product_choice);


    if (product_choice < 1 || product_choice > sizeof(products) / sizeof(*products)) {
      printf("Invalid product choice!\n");
      continue;
    }

    printf("Enter purchase quantity: ");
    scanf("%d", &quantity);


    purchased_products[product_choice - 1] = quantity;
    total_price += quantity * prices[product_choice - 1];


    printf("Do you want to add another product? (Y/N): ");
    scanf(" %c", &choice);
  } while (choice == 'y' || choice == 'Y');


  printf("\n------------------------\n");
  printf("Purchase Confirmation:\n");
  for (int i = 0; i < sizeof(products) / sizeof(*products); i++) {
    if (purchased_products[i] > 0) {
      printf("%d. %s - Quantity: %d, Price: %d\n", i + 1, products[i], purchased_products[i], prices[i] * purchased_products[i]);
    }
  }
  printf("Total Price: %d\n", total_price);
  printf("\n------------------------\n");
  char* paymeth[]={"Bkash","Nagad", "Rocket","Card"};
  printf("Available Payment Method \n");
  for(int i=0;i<4;i++){
      printf("%d. %s\n", i+1, paymeth[i]);
  }

  int payinfo,a;

  do {
    printf("\nChoose a payment Method (by number): ");
    scanf("%d", &payinfo);

   a=payinfo-1;

    }while(payinfo<1||payinfo>4);

    printf("\n-----------------------\n");

    printf("Order Successful \n %d paid by %s",total_price,paymeth[a]);

    printf("\n-----------------------\n");

    printf("Enter 1 to order again : ");
    scanf("%d",&b);

    }
    while (b==1);

  return 0;
}
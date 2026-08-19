#include<stdio.h>

int main(){

  // Taking Variables

   int choice;
   float quantity;
   float rice = 0;
   float milk = 0;
   float eggs = 0;
   float oil = 0;
   float sugar = 0;
   float subtotal;
   float vat;
   float discount;
   float total;


   // Printing the pricing along with product number

     printf("=== MASUD SUPERSHOP ===\n");
     printf("1. Rice  - 70  Tk/Kg\n");
     printf("2. Milk  - 90  Tk/Liter\n");
     printf("3. Eggs  - 12  Tk/Piece\n");
     printf("4. Oil   - 180 Tk/Liter\n");
     printf("5. Sugar - 130 Tk/Kg\n");
     printf("0. End Shopping\n");


 while(1){ // infinite loop 1

     printf("\nEnter product number: ");
     scanf("%d",&choice);
       if (choice == 0)
         break;
    // To Calculate Quantity if loop

   printf("Enter quantity: ");
   scanf("%f",&quantity);
      if (choice == 1)
            rice += quantity;
      else if (choice == 2)
            milk += quantity;
      else if (choice == 3)
            eggs += quantity;
      else if (choice == 4)
            oil += quantity;
      else if (choice == 5)
            sugar +=quantity;
      else
            printf("Invalid product number!\n");
 }

// Calculating Subtotal

  subtotal  =(rice * 70) + (milk * 90)
            +(eggs * 12) + (sugar * 130)
            +(oil  * 180);

// Discount Calculation 5%

  if (subtotal >= 1500)
    discount = subtotal * 0.05;
  else
    discount = 0;

// Vat Calculation 5%

    vat = (subtotal - discount) * 0.05;

// Total Bill Calculation
    total = subtotal - discount + vat;

//Print bill
    printf("\n===== SUBTOTAL BILL =====\n");
    printf("Product       Quantity   Price     Total\n");
    printf("----------------------------------------\n");
    if (rice > 0)
        printf("Rice  %.2f kg  70   %.2f Tk\n",rice, rice * 70);

    if (milk > 0)
        printf("Milk  %.2f L   90   %.2f Tk\n",milk, milk * 90);

    if (eggs > 0)
        printf("Eggs  %.2f P   12   %.2f Tk\n",eggs, eggs * 12);

    if (oil > 0)
         printf("Oil   %.2f L   180  %.2f Tk\n",oil, oil * 180);

    if (sugar > 0)
     printf("Sugar %.2f kg  130  %.2f Tk\n",sugar, sugar * 130);

    printf("----------------------------------------\n");

    printf("Subtotal:                %.2f   Tk\n", subtotal);
    printf("Discount:                %.2f   Tk\n", discount);
    printf("VAT (5%%):               %.2f   Tk\n", vat);
    printf("FINAL BILL:              %.2f   Tk\n", total);
    printf("========================================\n");

return 0;
}


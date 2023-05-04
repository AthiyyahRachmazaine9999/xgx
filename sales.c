    #include <stdio.h> 
     
    int main(void) { 
      int num_items; 
      float item_price, total_cost = 0.0, sales_tax_rate, total_sales_price; 
     
      printf("Enter the number of items: "); 
      scanf("%d", &num_items); 
     
      for (int i = 0; i < num_items; i++) { 
        printf("Enter the price of item %d: ", i+1); 
        scanf("%f", &item_price); 
        total_cost += item_price; 
      } 
     
      printf("Enter the sales tax rate (e.g. 0.06 for 6%%): "); 
      scanf("%f", &sales_tax_rate); 
     
      total_sales_price = total_cost + (total_cost * sales_tax_rate); 
      printf("The total sales price is $%.2f\n", total_sales_price); 
     
      return 0; 
    } 
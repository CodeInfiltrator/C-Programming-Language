#include <stdio.h>
#include <unistd.h>

void menu() {
    printf("============================\n");
    printf("|| Welcome to  WcDoland\'c ||\n");
    printf("||   Choose Your Menu     ||\n");
    printf("============================\n");
    printf("|| 1. Uduk Rice           ||\n");
    printf("|| 2. Chicken Wig Wig     ||\n");
    printf("|| 3. Cheese Burger       ||\n");
    printf("|| 4. Coza Cola           ||\n");
    printf("|| 5. Chocolate Sundae    ||\n");
    printf("|| 0. Done                ||\n");
    printf("============================\n");
    
}

int main() {
    int men; int price = 0;
    do {
      menu();
      printf("Input your menu: ");
      scanf("%d", &men);
      if(men == 1) {
          price += 5000;
          printf("Price: %d\n", price);
      }
      if(men == 2) {
          price += 25000;
          printf("Price: %d\n", price);
      }
      if(men == 3) {
          price += 30000;
          printf("Price: %d\n", price);
      }
      if(men == 4) {
          price += 12000;
          printf("Price: %d\n", price);
      }
      if(men == 5) {
          price += 8000;
          printf("Price: %d\n", price);
      }
      sleep(1);
    } while(men != 0);
    
    printf("Your total price is: %d\n", price);
    printf("Thank You\n");
    return 0;
}
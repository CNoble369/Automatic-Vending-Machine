//Automatic Vending Machine
#include <stdio.h>


int main()

{
    
  char main_menu;
    
  char main_items[] = {'C', 'M', 'I', 'B'};
    
  int sub_menu;
    
  int i;

    
    
  printf("Input\n");
    
  scanf("%s %d", &main_menu, &sub_menu);
  
  
    
  if(main_menu == main_items[0] && sub_menu == 1)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Expresso Coffee.\n");
    
  }
    
  else if(main_menu == main_items[0] && sub_menu == 2)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Cappuccino Coffee.\n");
    
  }
    
  else if(main_menu == main_items[0] && sub_menu == 3)
    
  {
        
    printf("Welcome to AVM!\n");

    printf("Enjoy your Black Coffee.\n");

  }
    
  else if(main_menu == main_items[1] && sub_menu == 1)

  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Roast Chicken.\n");
    
  }
    
  else if(main_menu == main_items[1] && sub_menu == 2)
    
  {
        
    printf("Welcome to AVM!\n");

    printf("Enjoy your White Bean Soup.\n");
   
  }

  else if(main_menu == main_items[1] && sub_menu == 3)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Sandwiche.\n");
    
  }
    
  else if(main_menu == main_items[1] && sub_menu == 4)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Fried Chicken.\n");
    
  }
    
  else if(main_menu == main_items[1] && sub_menu == 5)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Vegetable Roast.\n");
    
  }
    
  else if(main_menu == main_items[1] && sub_menu == 6)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Noodles Recipe.\n");
    
  }
    
  else if(main_menu == main_items[2] && sub_menu == 1)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Kulfi.\n");
    
  }
    
  else if(main_menu == main_items[2] && sub_menu == 2)
   
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Strawberry.\n");
    
  }
    
  else if(main_menu == main_items[2] && sub_menu == 3)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Cones.\n");
    
  }
    
  else if(main_menu == main_items[2] && sub_menu == 4)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Vennila.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 1)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Soft Drink.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 2)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Energy Drink.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 3)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Soda.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 4)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Lemon Juice.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 5)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Orange Juice.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 6)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Banana Juice.\n");
    
  }
    
  else if(main_menu == main_items[3] && sub_menu == 7)
    
  {
        
    printf("Welcome to AVM!\n");
        
    printf("Enjoy your Cold Coffee.\n");
    
  }
    
  else
        
    printf("Invalid Input\n");

}    
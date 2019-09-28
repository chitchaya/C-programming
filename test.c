#include <stdio.h>

int   beverages();
void  chosen(int choice);
float drink_cost(int choice);

int main()
{
  int user_at_machine = 1;


  while(user_at_machine)
  {
    int choice;
    /* in an actual program floats and doubles
       would not be used for monetary values
       as they are not always exact */
    float item_cost;
    float money;
    float change;

    /* display items and get users choice */
    choice = beverages();

    /* display pick */
    chosen(choice);

    /* getting money could be in a function */
    if(choice >= 1 && choice <= 20)
    {
      /* get drinks cost */
      item_cost = drink_cost(choice);

      printf("Enter your money: ");
      scanf(" %f", &money);
      printf("\n\n");

      if (money > 0)
      {
        printf("ACCEPTED!\n");
        change = money - item_cost;
        printf("Your change is %.2f", change);
      }
      else
      {
        printf("NOT ACCEPTED!\n");
      }
      printf("\n\n");

      /* get newline in stream */
      getchar();
      /* get character to pause */
      getchar();
    }
    else
    {
      /* is user quitting ? */
      if(choice == 99) {
        user_at_machine = 0;
      }
    }

  } /* end while */

  return 0;
}


/* display beverages and get pick */
int beverages()
{
  int choice;

  printf("---------------------- \n");
  printf("Name list of beverage: ");
  printf("\n\n");
  printf("1.  Pepsi");              printf("\t\t\tRM1.00\n");
  printf("2.  Miranda");            printf("\t\t\tRM1.00\n");
  printf("3.  Mountain Dew");       printf("\t\t\tRM1.00\n");
  printf("99. Quit");
  printf("\n\n");

  printf("Enter your choice: ");
  scanf(" %d",&choice);

  return choice;
}


/* display users pick */
void chosen(int choice)
{
  switch(choice)
  {
  case 1:
     printf("You choose Pepsi");          printf("\tRM1.00\n");
     break;
  case 2:
     printf("You choose Miranda");        printf("\tRM1.00\n");
     break;
  case 3:
     printf("You choose Mountain Dew");       printf("\tRM1.00\n");
     break;
  case 99:
     break;
  default:
     printf("Invalid input!\n");
     break;
  }
}


/*get drink cost */
float drink_cost(int choice)
{
  float cost = 0;

  switch(choice)
  {
    case 1:
      cost = 1.00;
      break;
    case 2:
      cost = 1.00;
      break;
    case 3:
      cost = 1.00;
      break;
  }

  return cost;
}


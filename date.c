#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  if(month < 1 || month > 12 || day < 1 || day > 31)
  {
    printf("The date format is not valid.\n");
    return (0);
  }
  else if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
  {
    printf("The date format is not valid.\n");
    return (0);
  }
  else if(month == 2 && day > 29)
  {
    printf("The date format is not valid.\n");
    return (0);
  }
  // Print the month
  switch (month)
  {
    case 1:
    printf("January ");
    break;
    case 2:
    printf("February ");
    break;
    case 3:
    printf("March ");
    break;
    case 4:
    printf("April ");
    break;
    case 5:
    printf("May ");
    break;
    case 6:
    printf("June ");
    break;
    case 7:
    printf("July ");
    break;
    case 8:
    printf("August ");
    break;
    case 9:
    printf("September ");
    break;
    case 10:
    printf("October ");
    break;
    case 11:
    printf("November ");
    break;
    case 12:
    printf("December ");
    break;
  }

  // Print the day
  // Print the suffix for a given day
  switch (day)
  {
    case 1: case 21: case 31:
    printf("%dst, ", day);
    break;
    case 2: case 22:
    printf("%dnd, ", day);
    break;
    case 3: case 23:
    printf("%drd, ", day);
    break;
    default:
    printf("%dth, ", day);
    break;
  }

  // Print the year
  printf("%d.\n", year);
  
  return 0;
}
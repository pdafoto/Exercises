#include <stdio.h>
#include <stdbool.h>

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool  is_leap_year(int year)
{
  if(year % 4 != 0)
    return(false);
  else if(year % 100 != 0)
    return(true);
  else if(year % 400 != 0)
    return(false);
  else
    return(true);
}

void  add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add)
{
  int days_left_in_month;

  while(days_left_to_add > 0)
  {
    days_left_in_month = days_in_month[*mm] - *dd;
    if(*mm == 2 && is_leap_year(*yy) == true)
      days_left_in_month++;
    if(days_left_to_add > days_left_in_month)
    {
      days_left_to_add = days_left_to_add - (days_left_in_month + 1);
      *dd = 1;
      if(*mm == 12)
      {
        *mm = 1;
        *yy = *yy + 1;
      }
      else
        *mm = *mm + 1;
    }
    else
    {
      *dd += days_left_to_add;
      days_left_to_add = 0;
    }
  }
}

int main() {
  /*int year;

  printf("Enter a year between 1800 and 10000: ");
  scanf("%d", &year);
  if(is_leap_year(year) == true)
    printf("Leap Year\n");
  else
    printf("Not Leap Year\n");*/
  int mm;
  int dd;
  int yy;
  int days_left_to_add;

  printf("Please enter a date in the format mm dd yy and provide the number of days to add to this date: ");
  scanf("%d%d%d%d", &mm, &dd, &yy, &days_left_to_add);
  add_days_to_date(&mm, &dd, &yy, days_left_to_add);
  printf("%d/%d/%d\n", mm, dd, yy);
}

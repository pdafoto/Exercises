#include <stdio.h>

int main() {

float weight;
int   planet;
float converted_weight;

printf("Hello Max, what is your weight?\n");
scanf("%f", &weight);
printf("What is the number of the planet you want to fight on?\n");
scanf("%d", &planet);
switch (planet)
{
  case 1:
    converted_weight = weight * 0.38;
    printf("Your weight in Mercury is %.2f\n", converted_weight);
    break;
  case 2:
    converted_weight = weight * 0.91;
    printf("Your weight in Venus is %.2f\n", converted_weight);
    break;
  case 3:
    converted_weight = weight * 0.38;
    printf("Your weight in Mars is %.2f\n", converted_weight);
    break;
  case 4:
    converted_weight = weight * 2.34;
    printf("Your weight in Jupiter is %.2f\n", converted_weight);
    break;
  case 5:
    converted_weight = weight * 1.06;
    printf("Your weight in Saturn is %.2f\n", converted_weight);
    break;
  case 6:
    converted_weight = weight * 0.92;
    printf("Your weight in Uranus is %.2f\n", converted_weight);
    break;
  case 7:
    converted_weight = weight * 1.19;
    printf("Your weight in Neptune is %.2f\n", converted_weight);
    break;
  default:
    printf("There is no planet associated with that number\n");
    break;
}








}
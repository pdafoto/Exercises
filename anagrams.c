#include<stdio.h>
#include<string.h>
int main() {
int counter1[] = {0, 0, 0, 0};
int counter2[] = {0, 0, 0, 0};
char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
int i = 0;
int j = 0;
int k = 0;
int flag = 0;

while(i < strlen(s1))
{
  switch(s1[i])
  {
    case 'a':
    counter1[0] = counter1[0] + 1;
    break;
    case 'b':
    counter1[1] = counter1[1] + 1;
    break;
    case 'c':
    counter1[2] = counter1[2] + 1;
    break;
    case 'd':
    counter1[3] = counter1[3] + 1;
    break;
    default:
    break;
  }
  i++;
}
while(j < strlen(s2))
{
  switch(s1[j])
  {
    case 'a':
    counter2[0] = counter2[0] + 1;
    break;
    case 'b':
    counter2[1] = counter2[1] + 1;
    break;
    case 'c':
    counter2[2] = counter2[2] + 1;
    break;
    case 'd':
    counter2[3] = counter2[3] + 1;
    break;
    default:
    break;
  }
  j++;
}
while(k < 4)
{
  if(counter1[k] != counter2[k])
  {
    flag = 1;
  }
  k++;
}
switch(flag)
{
  case 0:
  printf("Anagram!\n");
  break;
  case 1:
  printf("Not Anagram!\n");
  break;
}
}

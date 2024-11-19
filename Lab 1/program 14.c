#include<stdio.h>
int main()
{
    char character;
    int ASCIIvalue;
    
    printf("Enter your character here: ");
    scanf("%c", &character);

  ASCIIvalue = character;

  if (ASCIIvalue >= 65 && ASCIIvalue <= 90)
  {
    printf("The character you entered is a Capital letter");
  }
  else if (ASCIIvalue >= 97 && ASCIIvalue <= 122)
  {
    printf("The character you entered is a Small case letter");
  }
  else if (ASCIIvalue >= 48 && ASCIIvalue <= 57)
  {
    printf("The character you entered is a Digit!");
  }
  else if ((ASCIIvalue >= 32 && ASCIIvalue <= 47) ||
           (ASCIIvalue >= 58 && ASCIIvalue <= 64) ||
           (ASCIIvalue >= 91 && ASCIIvalue <= 96) ||
           (ASCIIvalue >= 123 && ASCIIvalue <= 126))

  {
    printf("The character you entered is a Special Character!");
  }
  else
  {
    printf("Unknown Character!");
  }


    return 0;
}
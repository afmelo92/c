#include <stdio.h>
#include <string.h>
#include <ctype.h>

void password_check(char *string)
{
  int len = strlen(string);
  int upper_counter = 0, lower_counter = 0, digit_counter = 0, symbol_counter = 0;

  if (len < 8)
  {
    printf("At least 8 characters long.\n");
    return;
  }

  for (int i = 0; i < len; i++)
  {
    if (isupper(string[i]))
    {
      upper_counter++;
    }
    else if (islower(string[i]))
    {
      lower_counter++;
    }
    else if (isdigit(string[i]))
    {
      digit_counter++;
    }
    else if (!isalnum(string[i]))
    {
      symbol_counter++;
    }
  }

  if (upper_counter < 1)
  {
    printf("At least 1 uppercase letter.\n");
    return;
  }
  else if (lower_counter < 1)
  {
    printf("At least 1 lowercase letter.\n");
    return;
  }
  else if (digit_counter < 1)
  {
    printf("At least 1 digit letter.\n");
    return;
  }
  else if (symbol_counter < 1)
  {
    printf("At least 1 symbol.\n");
    return;
  }

  printf("Valid password.\n");
}

void main(void)
{
  char string1[] = "short";
  char string2[] = "onlylowercaseletters";
  char string3[] = "ONLYUPPERCASELETTERS";
  char string4[] = "PasswordWithout@Digits";
  char string5[] = "PasswordWithoutSymbols1";
  char string6[] = "Valid@Password1";

  password_check(string1);
  password_check(string2);
  password_check(string3);
  password_check(string4);
  password_check(string5);
  password_check(string6);
}
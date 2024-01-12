#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  char vowels[5] = "aeiou";
  int count_vowel = 0; // to store the number of vowels
  int count_consonant = 0;

  for (int i = 0; i < strlen(str) - 1; i++)
  {
    int j;
    for (j = 0; j < 5; j++)
    {
      if (tolower(str[i]) == vowels[j])
      {
        count_vowel++;
        break;
      }
    }
    if (j == 5 && str[i] != ' ')
    {
      count_consonant++;
    }
  }

  printf("vowels : %d\nconsonants : %d", count_vowel, count_consonant);

  return 0;
}
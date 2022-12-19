#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
*random_passwd - generates random passwords
*main - call function
*@lp: parameter
*Return: Always 0 (Success)
*/

void random_passwd(int lp)
{
if (lp <= 0)
{
printf("Password too short. Try again.");
return (1);
}

int i, j;
i = 0;
j = 0;

srand((unsigned int)(time(NULL)));

char letter[] = "abcdefghijklmnoqprstuvwyzx";
char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
char digits[] = "0123456789";
char symbols[] = "!@#$^&*?";
char passwd[lp];

j = rand() % 4;

for (i = 0; i < lp; i++)
{
if (j == 1)
{
passwd[i] = letter[rand() % 26];
j = rand() % 4;
printf("%c", passwd[i]);
}
else if (j == 2)
{
passwd[i] = LETTER[rand() % 26];
j = rand() % 4;
printf("%c", passwd[i]);
}
else if (j == 3)
{
passwd[i] = digits[rand() % 10];
j = rand() % 4;
printf("%c", passwd[i]);
}
else
{
passwd[i] = symbols[rand() % 8];
j = rand() % 4;
printf("%c", passwd[i]);
}
}
passwd[lp] = '\0';
}

int main(void)
{
int lp;
random_passwd(8);
return 0;
}

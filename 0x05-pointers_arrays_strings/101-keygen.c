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
int i = 0;
int j = 0;
int length = 0;

char letter[] = "abcdefghijklmnoqprstuvwyzx";
char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
char digits[] = "0123456789";
char symbols[] = "!@#$^&*?";
char *passwd = malloc(length + 1);

srand((unsigned int)(time(NULL)));
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
free (passwd);
}

int main(void)
{
int lp = 8;
random_passwd(lp);
return 0;
}

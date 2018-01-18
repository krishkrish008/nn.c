#include<stdio.h>
void main()
{
char xc,cap,small;
printf("Enter any alphabet");
scanf("%c",&xc);
cap=(xc == 'A' || xc == 'E' || xc == 'I' || xc== 'O' || xc == 'U' );
small=(xc == 'a' || xc== 'e' || xc == 'i' || xc== 'o' || xc == 'u');
if(cap || small)
printf("VOWELS");
else
printf("CONSONANT");
getch();
}

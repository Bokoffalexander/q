#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void numpass(void)
{
printf(" Type password and press Enter->");
    char p[31]; //password
    scanf (" %s", p);
    printf ("password=%s;\n", p);

((p[0]=='Q')&&(p[1]=='w')&&(p[2]=='1')&&(p[3]=='\0')) ? (putchar('Y')) : (exit (0));
        putchar('\n');
        getchar ();
}


void name(void)
{
printf("\n Any user-name and press Enter->");
    char n[31]; //name
    scanf (" %s", n);
    printf ("name=%s\n", n);
    printf("name=");
  
int d;
  
for (d=0; d<strlen(n); d++)
{

if(isdigit(n[d])) {putchar('D'); continue;}
  
if(isupper(n[d])) {putchar('U'); continue;}
  
if(islower(n[d])) {putchar('L'); continue;}

putchar('S'); // it is symbol

  }
        putchar('\n');
        getchar ();
}



void go_on()
{
  printf("\nContinue? Y/N\n");
  char a;
  a = getchar();
  getchar();
  a = toupper(a);
  (a=='Y')?(1):(exit(0));
}



int
main (void)
{   
    numpass();// password
    name();
    go_on(); // Y/N

//*******************************
    int i;
    char msg[10];
    printf ("\n Type max 6 symbols and press Enter…\n");
    for (i = 0; i < 6; i++)
        {
            msg[i] = getchar (); //Вводит один символ
            printf("%d",i);
            if (msg[i] == '\n')
                {
                    break;
                }
        }
    printf("\ni=%d \n",i);
    msg[i] = '\0';
    printf("msg[i]=%s;\n", "'\\0'");
    
    printf ("strlen=%ld\n", strlen (msg));
    printf ("Your string is: ");
    for (i = 0; i < strlen (msg); i++)
        {
            putchar (msg[i]);
        }
    putchar ('\n');
    return (1);
}

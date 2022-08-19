#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
int random()
{
    srand(time(0));
    for (int i = 0; i < 1; i++)
    {
        return ((rand()%10));
    }
}
int main()
{
    int randint=random();
    char a[1000];
    printf("type your word\t :");
    gets(a);
    int b=strlen(a);
    char d[1000];
    int x;

    printf("\n\ttype : 1 for encryption \n\ttype : 2 for decryption\n\n\tenter here:");
    scanf("%d",&x);
    
    char e;
    
    switch(x)
    {
        case 1:
        for(int i=0;i<b;i++){
        a[i]=a[i]+randint+1;
        }

        printf("\nyou word is\t: %s\n",a);
        printf("\nyour decryption id :gh3k%di0\n",randint);
        getch();

        break;

        case 2:
        printf("write your decryption id :");
        scanf("%s",&d);
        e=d[4];
        int j=e-'0';
        for(int i=0;i<b;i++){
        a[i]=a[i]-1-j;
        }
        printf("\n%s",a);
        getch();

        break;
    }
    return 0;
    }
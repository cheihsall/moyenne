#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()

{
char codesecret[50];
int i=0;/*index du chaine de caractere codesecret*/
int n=1; /* compteur*/
int tab[4]={1234,1235,1236,1237};
int j=0; /*le pointeur du tableau de codesecret*/

printf("saisir le code secret");
scanf("%s" ,codesecret);


    while(i<strlen(codesecret) )
    {
        if(isdigit(codesecret[i]) == 0)
        {
            if(n==3)
            { 
                printf("fin de tentative");
                return 0;

            }
            if(n==2)
            {
                printf("il vous reste un seule essaie");
            }
            else
            {
              printf("veiller saisir un entier");
            }

            scanf("%s" ,codesecret);
            n++;
            i=0;

        }
        i++;

    }

    while( atoi(codesecret)!=tab[j])
    {
        if(j<4)
        {
            j++;
        }
        else{
            if(n==3){
                printf("compte bloquer rapprocher vous du service informatique");
                return 0;
            }
            if(n==2){
                printf("il vous reste un seule essai");
            }
            else
            {
              printf("code secret incorrect");
            }

            scanf("%s" ,codesecret);
            n++;
            j=0;

            while(i<strlen(codesecret) )
            {
                if(isdigit(codesecret[i]) == 0)
                {
                    if(n==3)
                    {
                        printf("fin de tentative");
                        return 0;

                    }
                    if(n==2)
                    {
                        printf("il vous reste un seule essaie");
                    }
                    else
                    {
                      printf("veiller saisir un entier");
                    }

                    scanf("%s" ,codesecret);
                    n++;
                    i=0;

                }
                i++;

            }


        }
    }


    printf("code secret correct");

    return 0;
     }
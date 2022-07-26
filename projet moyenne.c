#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
     double noteMath[2];
     double notePc[2];
     double noteSvt[2];
      double noteFrc[2];
       double noteHg[2];
       char prenom[40];
       char nom[20];


    double moyenneG, somme,coefftotal ,Moymath ,moypc ,moysvt ,moyfrc ,moyHg;
    int i=0 ,j=2;
    double SomMath=0 , SomPc=0 , SomSvt=0 , SomFrc=0 ,SomHg=0 ;
    int coefmath=3 , coefpc=4, coefsvt=4, coeffr=3,coefhistoGeo=2;




               printf("entrer le prenom de lapprenant svp\n" );
               scanf("%s",&prenom);
               printf("entrer le nom de lapprenant\n");
               scanf("%s" ,&nom);

    for(i=0;i<2;i++)
    {
            printf("Donner votre note de math[%d] :\n",i+1);
            scanf("%lf",&noteMath[i]);

            if ((noteMath[i]<0) || (noteMath[i]>20) || (isdigit(noteMath[i]) == 1))

            { printf("erreur , la note doit etre UN NOMBRE et comprise entre 0 et 20");
            return 0;}


            SomMath=SomMath+noteMath[i];
        }

    Moymath =SomMath/2;


for(i=0;i<2;i++)
    {
            printf("Donner votre  note de pc[%d] :\n",i+1);
            scanf("%lf",&notePc[i]);


            if ((notePc[i]<0) || (notePc[i]>20) || (isdigit(notePc[i]) ==1))
            { printf("erreur , la note doit etre UN NOMBRE et comprise entre 0 et 20");
            return 0;}
            SomPc=SomPc+notePc[i];
        }
           moypc =SomPc/2;

           for(i=0;i<2;i++)
    {
            printf("Donner votre note de svt[%d] :\n",i+1);
            scanf("%lf",&noteSvt[i]);
            if ((noteSvt[i]<0) || (noteSvt[i]>20) || (isdigit(noteSvt[i]) ==1))
            { printf("erreur , la note doit etre UN NOMBRE et comprise entre 0 et 20");
            return 0;}
            SomSvt=SomSvt+noteSvt[i];
        }
           moysvt =SomSvt/2;

           for(i=0;i<2;i++)
    {
            printf("Donner votre note de francais[%d] :\n",i+1);
            scanf("%lf",&noteFrc[i]);
            if ((noteFrc[i]<0) || (noteFrc[i]>20)|| (isdigit(noteFrc[i]) ==1) )
            { printf("erreur , la note doit etre UN NOMBRE et comprise entre 0 et 20");
            return 0;}
            SomFrc=SomFrc+noteFrc[i];
        }
           moyfrc =SomFrc/2;

           for(i=0;i<2;i++)
    {
            printf("Donner vos note en HG[%d] :\n",i+1);
            scanf("%lf",&noteHg[i]);
            if ((noteHg[i]<0) || (noteHg[i]>20) || (isdigit(noteHg[i]) ==1))

            { printf("erreur , la note doit etre UN NOMBRE et comprise entre 0 et 20");
            return 0;}
            SomHg=SomHg+noteHg[i];
        }
           moyHg =SomHg/2;






    coefftotal = coefsvt + coefpc + coefmath + coefhistoGeo + coeffr;
    moyenneG =( ( Moymath*coefmath) + ( moypc*coefpc ) + ( moysvt*coefsvt ) + ( moyfrc*coeffr ) + (moyHg*coefhistoGeo) )/coefftotal ;
        printf("%s"  ,prenom);
        printf("   %s" ,nom);

    printf( " VOTRE MOYENNE GENERAL EST:%.2f",prenom ,nom ,moyenneG);
    printf("     ");
    if (moyenneG < 10)
    {
        printf("mediocre ");
    }
     if (moyenneG == 10)
    {
        printf("   PASSABLE, VEILLER REDOUBLER DEFFORT");
    }
     if ((moyenneG >10) && (moyenneG <14))

    {
        printf("tres bien, FELICITATION");
    }
     if (moyenneG > 14)
    {
        printf("excellent");
    }
    }






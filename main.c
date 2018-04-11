#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i;
    float e=1;
    int N=1;
    float suma=0;
    float e_mach=0;
    int t=0;

    float l=1;
    printf("Pojedyncza precyzja : \n\n");
printf(" N        epsilon             suma\n");
for( N=1;N <100;N++){
       suma =l+e;

        printf("%d      %e    %.15f\n ",N, e,suma);
        e=e/2;
    if(suma==1){
            e_mach=4*e;
            t=N-1;//liczba bitow w mantysie
            printf("liczba bitow w mantysie:%d\n",t);
            printf("epsilon maszynowy: :              %.20e\n",e_mach);
            printf("Zaokraglenie przez obcinanie      %e\n",pow(2,1-t));//zgadza sie z tym
            printf("zaokraglenie do najblizszej       %e\n",(0.5)*(pow(2,1-t)));


        break;
    }

}
printf("\n\n |3*(4/3-1)-1| : %e",abs(3*(4/3-1)-1));
printf("\n\n |3*(4/3-1)-1| : %.15f",abs(3*(4/3-1)-1));

printf("\n\n\n");
printf("Podwojna precyzja : \n\n");
    double de=1;
     N=1;
    double dsuma=0;
    double de_mach=0;
     t=0;

    double dl=1;
printf(" N        epsilon                suma\n");
for( N=1;N <100;N++){
       dsuma =dl+de;

        printf("%d      %e    %.20lf\n ",N, de,dsuma);
        de=de/2;
    if(dsuma==1){
            de_mach=4*de;
            t=N-1;
            printf("liczba bitow w mantysie : %d\n",t);
            printf("epsilon maszynowy: :              %.30e\n",de_mach);
            printf("Zaokraglenie przez obcinanie      %e\n",pow(2,1-t));
            printf("zaokraglenie do najblizszej       %e\n",(0.5)*(pow(2,1-t)));


        break;
    }

}
printf("\n\n |3*(4/3-1)-1| : %e",abs(3*(4/3-1)-1));
printf("\n\n |3*(4/3-1)-1| : %.20lf",abs(3*(4/3-1)-1));

printf("\n \nWyniki sa raczej zgodne ze standardem IEEE 754\n");
    return 0;
}

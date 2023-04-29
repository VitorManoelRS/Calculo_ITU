#include <stdio.h>
#include <stdlib.h>

struct diaCompletos{
    int Dia;
    float Temp;
    float Umid;
    float itu;
    char M[20];
} tabDias[365];

char li=179;

int mensagem(float a){
    char tc=135,to=148,ta=160;
    char b;
    if(a < 75){
        b=0;
        printf("Condi%c%ces normais %c\n",tc,to,li);
    return(b);
    }else{
        b=1;
        printf("Estresse clim%ctico%c\n",ta,li);
    return(b);
    }
}

int calculo(float c, float d){
    float e;
    e= 0.8*c + d*((c -14.3)/100)+46.3;
    return(e);
}

void tabela1(){                //Parte superior da tabela
   printf("%c",218);
   for(int j=0;j<69;j++){
        char p=196;
        printf("%c",p);}
    printf("%c\n%c                        TABELA DE ITU                                %c",191,179,179);
    printf("\n%c",195);
    for(int j=0;j<65;j++){
        char p=196;
        printf("%c",p);
    if (j == 8 ){
            p = 194;
        printf("%c",p);
    }else if( j == 19){
             p = 194;
            printf("%c",p);
    }else if( j == 30){
         p = 194;
            printf("%c",p);
    }else if(j == 42){
             p = 194;
            printf("%c",p);
    }
}
    printf("%c\n",180);
}

void tabela2(){               //Parte do meio da tabela
printf("%c",195);
        for(int j=0;j<66;j++){
                if(j==9){
                   printf("%c",197);}
                if(j==20){
                    printf("%c",197);}
                if(j==31){
                    printf("%c",197);}
                if(j==43){
                    printf("%c",197);}
                if(j==65){printf("%c\n",180);
                break;}
            printf("%c",196);
    }
    }

void tabela3(){               //Parte inferior da tabela
char p;
        for(int j=0;j<65;j++){
            if(j == 0){
                p = 192;
                printf("%c",p);
            }
        p = 196;
        printf("%c",p);
            if (j == 64){
                p = 217;
                printf("%c",p);
            }else if (j == 8 ){
                p = 193;
                printf("%c",p);
            }else if( j == 19){
                p = 193;
                printf("%c",p);
            }else if( j == 30){
                p = 193;
                printf("%c",p);
            }else if(j == 42){
                p = 193;
                printf("%c",p);
            }
        }
        printf("\n\n");
}


void busca(float q,float w){
    int dias;

    tabela1();               //Parte de cima da tabela

     for(dias=0;dias<365;dias++){
        if(tabDias[dias].itu >= q && tabDias[dias].itu <= w){
        printf("%cDia: %.3i %c Ta: %.2f %c UR: %.2f %c ITU: %.2f %c M: ",
                        179,
                        tabDias[dias].Dia,179,
                        tabDias[dias].Temp,179,
                        tabDias[dias].Umid,179,
                        tabDias[dias].itu,179);
        mensagem(tabDias[dias].itu);

        tabela2();           //Parte do meio da tabela

    }
    }
        tabela3();          //Fim da tabela
}


int main()
{
    char tes=196;
    int dias;
    float Min, Max;
    FILE *d;
    d = fopen("Lavras2015.txt", "r");
    for(dias=0;dias<365;dias++){
        fscanf(d, "%d %f %f",&tabDias[dias].Dia ,&tabDias[dias].Temp, &tabDias[dias].Umid);
        tabDias[dias].itu = calculo(tabDias[dias].Temp,tabDias[dias].Umid);


        }
    printf("Digite o ITU-Minimo: ");
    scanf("%f", & Min);
    printf("Digite o ITU-Maximo: ");
    scanf("%f", & Max);
    dias= 0;
    system("cls");
    busca(Min,Max);
}

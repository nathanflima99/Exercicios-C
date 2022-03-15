#include <stdlib.h>
#include <stdio.h>

int pont1(int *p1);
int pont2(int *p2);
int pont3(int *p3);

typedef struct{
int a, b, c;
}VARIAVEIS;


int main(void){


int p1, p2, p3;


VARIAVEIS v;

printf("Insira o primeiro valor: ");
scanf("%d", &v.a);
printf("Insira o segundo valor: ");
scanf("%d", &v.b);
printf("Insira o terceiro valor: ");
scanf("%d", &v.c);

p1 = pont1(&v.a);
p2 = pont2(&v.b);
p3 = pont3(&v.c);

printf("Os valores são: \n%d\n%d\n%d\n", p1, p2, p3);
system("pause");

}


int pont1(int *p1){

return(*p1+100);

}
int pont2(int *p2){

return(*p2+100);

}
int pont3(int *p3){

return(*p3+100);

}


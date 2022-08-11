#include <stdio.h>



int main(void)
{
int ct=0;
float v1, v2, v3, v4, v5, v6, pn, pb;
char cs;



while(1){
ct+=1;



printf("Voto N%d\n\n", ct);



printf("Digite 0 para finalizar os votos\nDigite 1 para votar no candidato 1,\nDigite 2 para votar no candidato 2,\nDigite 3 para votar no candidato 3,\nDigite 4 para votar no candidato 4,\nDigite 5 para votar nulo\nDigite 6 para o voto em branco.\n");
scanf("%s", &cs);



switch(cs){



case '1':
v1= v1+1;
break;



case '2':
v2= v2+1;
break;



case '3':
v3= v3+1;
break;



case '4':
v4= v4+1;
break;



case '5':
v5=v5+1;
break;



case '6':
v6=v6+1;
break;



case '0':
ct= ct-1;
pn = 100*v5/ct;
pb = 100*v6/ct;
printf("\n\nvotos candidato 1: %.0f\nvotos candidato 2: %.0f\nvotos candidato 3: %.0f\nvotos candidato 4: %.0f\nvotos nulos: %.0f\nvotos em branco: %.0f\nPorcentagem de votos em branco: %.2f\nPorcentagem de votos nulos: %.2f\n\n", v1, v2, v3, v4, v5, v6, pb, pn);



return;
break;



default:
printf("código inválido");
}
}




}
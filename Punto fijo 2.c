#include <math.h>
#include <conio.h>
#include <stdio.h>

int main ()
{float i, X0, X0_ant, error,a=5,b=2;
     printf("\t\t\t\t\tMetodos abiertos: PUNTO FIJO\n");
      printf("Calcular raiz de la siguiente funcion \n \t\t\tf(x)=-5-x+2*x^2\n");
       printf("Se realiza el despeje de x\n");
         printf("\t\t\tX=sqrt(x+5/2)\n");
        printf("Dame el valor de X0:  ");
        scanf("%f",&X0);
        error=1;
while(error>=0.01)
{   X0_ant=X0;
    X0=sqrt(X0+a)/sqrt(b);
    error=fabs(X0-X0_ant);
    i++;
    printf("Iteracion No.%.0f= %.3f\t El error es de:%.02f\n\n",i,X0,error);
}
printf("\n\nEl valor de la raiz es: %.3f\n\n",X0);
printf("El error es de: %.3f\n\n",error);
printf("Numero total de iteraciones: %.0f\n\n",i);

return 0;
}


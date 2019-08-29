#include <stdio.h>
#define filas 2
#define columnas 2

int main (){
    int matriz[filas][columnas];
    int i,j,x,y,auxiliar;
    int numero;
    
    //LLENAR ARREGLO
    for(i=0;i<filas;i++){
        for (j=0; j<columnas; j++)
        {
            printf("Ingrese un numero ");
            scanf("%d", &numero);
            matriz[i][j]=numero;

        }
        
    }

printf("\n");
//Mostrar matriz
printf("Matriz desordenada-------------");
for(i=0;i<filas;i++){
    printf("\n");
        for (j=0; j<columnas; j++)
        {
            printf("%d\t", matriz[i][j]);

        }
        
    }

//ordenar matriz
for(i=0;i<filas;i++){
    for(j=0;j<columnas;j++){
        for(x=0;x<filas;x++){
            for(y=0;y<filas;y++){
                if(matriz[i][j]>matriz[x][y]){
                    auxiliar=matriz[i][j];
                    matriz[i][j]=matriz[x][y];
                    matriz[x][y]=auxiliar;
                }
            }
        }
    }
}

printf("\n");
//Mostrar matriz ordenada
printf("Matriz ordenada-------------");
for(i=0;i<filas;i++){
    printf("\n");
        for (j=0; j<columnas; j++)
        {
            printf("%d\t", matriz[i][j]);

        }
        
    }



    return 0;

}

#include<stdio.h>

int main (void)
{
    int ordem, i, j, det2, det3, det4 , area;
    
    printf("calculo area do triangulo com determinante\n");
   
   ordem = 3; 
    int matriz[ordem][ordem];
    
    printf("Digite os numeros das coordenadas do triangulo: \n");
    
     /* criando a matriz*/ 
    
    for(i=0; i<ordem; i++){
    	     printf("Escreva a cordenada do ponto\n");
             for(j=0; j<ordem; j++){
                   if (j==2){  
					  matriz[i][j]=1;
                }else {
                	scanf("%d", &matriz[i][j]);
				}
                      }
             }
             
    /* Imprimindo a Matriz Digitada*/         
    
    printf("\nA matriz digitada foi:\n\n");
          
    for(i=0; i<ordem; i++){
             printf("\n");          
             for(j=0; j<ordem; j++){                    
                      printf(" %d ", matriz[i][j]);                     
                      }
             }
     printf("\n\n");        
             
 
 /*****************************************************************************/
          /* Calculando o determinante de uma matriz 3x3*/
          
          
          det3 = (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1])
          - ((matriz[0][1]*matriz[1][0]*matriz[2][2]) + (matriz[0][0]*matriz[1][2]*matriz[2][1]) + (matriz[0][2]*matriz[1][1]*matriz[2][0]));
          
          printf("O determinante e: %d\n\n", det3);
        
           
         /* Fim do calculo do det3*/          

    
/******************************************************************************/    
        /* Calculando o area do triangulo*/ 
    
        area = det3/2;    
        
        if (area<0){
        	area = -1 * area;
		}
        
        printf("A area do triangulo e aproximadamente: %d\n\n", area);
    
    system("pause");
    return(0);
    
}
      

/*
**      Fichero:  hexDec3
**        Autor:  Eloy Rodrigo Lorente Lorenzo
**        Fecha:  14/11/16
**
**  Descripcion: Este programa transforma dos valores hexadecimales a decimal.
*/

/* Includes del sistema */
#include <stdio.h>

/* Definición de constantes */ 
#define CTE 16
#define SINERROR 1
#define CONERROR 0

int main()
{
  char car1;
  char car2;
  int valor;
  int valor1;
  int valor2;
  int cuno;
  int cdos;

  do 
    {
      printf("Introduzca el numero hexadecimal: ");
      scanf("\n%c%c", &car1, &car2);
      
      if (car1 != 'q' || car2 != 'q'){
	
	if ('0' <= car1 && car1 <= '9'){
	  valor1 = car1 - '0';
	  cuno = SINERROR;
	}else{
	  if ('a' <= car1 && car1 <= 'f'){
	    valor1 = car1 - 'a' + 10;
	    cuno = SINERROR;
	  }else{
	    if ('A' <= car1 && car1 <= 'F'){
	      valor1 = car1 - 'A' + 10;
	      cuno = SINERROR;
	    }else{
	      cuno = CONERROR; 
	    }
	  }
	}
	
	if ('0' <= car2 && car2  <= '9'){
	  valor2 = car2 - '0';
	  cdos = SINERROR;
	}else{
	  if ('a' <= car2 && car2 <= 'f'){
	    valor2 = car2 - 'a' + 10;
	    cdos = SINERROR;
	  }else{
	    if ('A' <= car2 && car2 <= 'F'){
	      valor2 = car2 - 'A' + 10;
	      cdos = SINERROR;
	    }else{
	      cdos = CONERROR;
	    }
	  }
	}
	if (cuno == SINERROR && cdos == SINERROR){
	  valor = CTE * valor1 + valor2;
	  printf("El valor decimal de 0x%c%c es %d\n", car1, car2, valor);
	}else{
	  if (cuno == CONERROR){
	    printf("Error en el primer valor introducido\n");
	  }
	  if (cdos == CONERROR){
	    printf("Error en el segundo valor introducido\n");   
	  }
	}
      }
      
    }
  while (car1 != 'q' || car2 != 'q');
  
  return 0;
}




  
    
    
    

    

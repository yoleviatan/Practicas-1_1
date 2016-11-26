/*
**      Fichero:  hexDec5
**        Autor:  Eloy Rodrigo Lorente Lorenzo
**        Fecha: 
**
**  Descripcion: Este programa transforma dos valores hexadecimales a decimal.
*/

/* Includes del sistema */
#include <stdio.h>

/* Definición de constantes */ 
#define CTE 16
#define SINERROR 0
#define CONERROR1 1
#define CONERROR2 2

int hexDec (char car1, char car2)
{
  
  int valor1;
  int valor2;
  int valor;
  
  if ('0' <= car1 && car1 <= '9'){
    valor1 = car1 - '0';
  }else{
    if ('A' <= car1 && car1 <= 'F'){
      valor1 = car1 - 'A' + 10;
    }else{
      valor1 = car1 - 'a' + 10;
    }
  }
  
  if ('0' <= car2 && car2 <= '9'){
    valor2 = car2 - '0';
  }else{
    if ('A' <= car2 && car2 <= 'F'){
      valor2 = car2 - 'A' + 10;
    }else{
      valor2 = car2 - 'a' + 10;
    }
  }
  valor = CTE * valor1 + valor2;
  
  return (valor);
}

int hexValidos (char car1, char car2)
{
  int cuno;
  int cdos;
  int valided;
  
  //Esta condicion comprueba que el caracter "car1" es valido en el codigo hexagesimal.
  if (('0' <= car1 && car1 <= '9') || ('a' <= car1 && car1 <= 'f') || ('A' <= car1 && car1 <= 'F')){
    cuno = SINERROR;
  }else{
    cuno = CONERROR1; 
  }
  
  //Esta condicion comprueba que el caracter "car2" es valido en el codigo hexagesimal.
  if (('0' <= car2 && car2  <= '9') || ('a' <= car2 && car2 <= 'f') || ('A' <= car2 && car2 <= 'F')){
    cdos = SINERROR;
  }else{
    cdos = CONERROR2;
  }

  valided = cuno + cdos;
  
  return (valided);
}
  

int main()
{
  char car1;
  char car2;
  int valor;
  int valided;

  do 
    {
      printf("Introduzca el numero hexadecimal: ");
      scanf("\n%c%c", &car1, &car2);
      
      if (car1 != 'q' || car2 != 'q'){
	
	valided = hexValidos(car1, car2); 
	
	if (valided == SINERROR){
	  valor = hexDec(car1, car2);
	  printf("El valor decimal de 0x%c%c es %d\n", car1, car2, valor);
	}else{
	  if (valided == CONERROR1 || valided == 3){
	    printf("Error en el primer valor introducido\n");
	  }
	  if (valided == CONERROR2 || valided == 3){
	    printf("Error en el segundo valor introducido\n");
	  }
	}
      }
    }
  while (car1 != 'q' || car2 != 'q');
  
  return 0;
}






  
    
    
    

    

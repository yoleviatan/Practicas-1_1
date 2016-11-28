/*
**      Fichero:  hexDec6
**        Autor:  Eloy Rodrigo Lorente Lorenzo
**        Fecha: 
**
**  Descripcion: Este programa transforma cuatro valores hexadecimales a decimal.
*/

/* Includes del sistema */
#include <stdio.h>

/* Definición de constantes */ 
#define CTE1 16
#define CTE2 256
#define CTE3 4096
#define SINERROR 1
#define CONERROR 0

//Esta funcion calcula el valor hexagesimal del ultimo par de caracteres introducidos.

int hexDec1 (char car1, char car2)
{
  
  int valor1;
  int valor2;
  int valorpar1;
  
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
  valorpar1 = CTE1 * valor1 + valor2;
  
  return (valorpar1);
}

//Esta funcion calcula el valor hexagesimal del primer par de caracteres introducidos.

int hexDec2 (char car1, char car2)
{
  
  int valor1;
  int valor2;
  int valorpar2;
  
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
  valorpar2 = (CTE3 * valor1) + (CTE2 * valor2);
  
  return (valorpar2);
}

int hexValidos (char car1, char car2)
{
  int valided;
  
  //Esta condicion comprueba que el caracter "car1" es valido en el codigo hexagesimal.
  if (('0' <= car1 && car1 <= '9') || ('a' <= car1 && car1 <= 'f') || ('A' <= car1 && car1 <= 'F')){
    valided = SINERROR;
    //Esta condicion comprueba que el caracter "car2" es valido en el codigo hexagesimal.
    if (('0' <= car2 && car2  <= '9') || ('a' <= car2 && car2 <= 'f') || ('A' <= car2 && car2 <= 'F')){
      valided = SINERROR;
    }else{
      valided = CONERROR; 
    }
  }else{
    valided = CONERROR;
  }
  
  return (valided);
}
  

int main()
{
  char car1;
  char car2;
  char car3;
  char car4;
  int valor;
  int valorpar1;
  int valorpar2;
  int validedpar1;
  int validedpar2;

  do 
    {
      printf("Introduzca cuatro caracteres hexadecimales:");
      scanf("\n%c%c%c%c", &car1, &car2, &car3, &car4);
      
      if (car1 != 'q' || car2 != 'q' || car3 != 'q' || car4 != 'q'){

	//Comprobamos que los cuatro caracteres son validos, empleando 2 veces la misma función.
	
	validedpar1 = hexValidos(car1, car2);
	validedpar2 = hexValidos(car3, car4);

	//Realizamos la operacion si los caracteres son validos, de nuevo a pares, empleando 2 funciones.
	//Ambas son muy parecidas, pero con pequeños cambios respecto a la original.
	
	if (validedpar1 == SINERROR && validedpar2 == SINERROR){
	  valorpar1 = hexDec2(car1, car2);
	  valorpar2 = hexDec1(car3, car4);
	  
	  //Sumamos sus resultados para obtener el valor interesado.
	  
	  valor = valorpar1 + valorpar2;
	  printf("El valor decimal de 0x%c%c%C%c es %d\n", car1, car2, car3, car4, valor);
	}else{
	  if (validedpar1 == CONERROR || validedpar2 == CONERROR){
	    printf("Invalido\n");
	  }
	}
      }
    }
  while (car1 != 'q' || car2 != 'q' || car3 != 'q' || car4 != 'q');
  
  return 0;
}






  
    
    
    

    

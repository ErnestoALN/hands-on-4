/*
Autor: Ernesto Alonso Flores Nuño
Fecha: ultima actualización: 07/10/2021
profesor: José Antonio Aviña Méndez
Programa: Hands-on 4
*/

#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

void suma_2D (char x1, char x2, char y1, char y2){
    cout << "R => (" << x1+x2 << "," << y1+y2 << ")" << endl; 
}

void resta_2D(char x1, char y1, char x2, char y2){
	cout << "R => (" << x1-x2 << "," << y1-y2 << ")" << endl; 
}

void multi_2D(char x, char y, char escalar){
	cout << "R => (" << x*escalar  << "," << y*escalar << ")" << endl;
}

void modulo_2D(char x, char y){
	cout << "|A|: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
}

void suma_3D(char x1, char y1, char x2, char y2, char x3, char y3){
	cout << "R => (" << x1+x2+x3 << "," << y1+y2+y3 << ")" << endl; 
}

void modulo_3D(char x, char y, char z){
	cout << "|A|: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
}

void producto_punto (char x1, char y1, char z1, char x2, char y2, char z2){
	cout << "Vector => (" << x1*x2 << "," << y1*y2 << "," << z1*z2 << ")" << endl;
  cout << "Escalar =>" << x1*x2 + y1*y2 + z1*z2 << endl;  
}

void producto_cruz(char x1, char y1, char z1, char x2, char y2, char z2){
	cout << "R => i(" << y1*z2 - y2*z1 << ") - j(" << x1*z2 - x2*z1 << ") + k(" << x1*y2 - x2*y1 <<")" << endl;
	cout << "vector  = (" << y1*z2 - y2*z1 << " , " << x1*z2 - x2*z1 << " , " << x1*y2 - x2*y1 <<")" << endl;
}

void info (){
	cout << "Autor: Ernesto Alonso Flores Nuño" << endl;
	cout << "Clase: Calculo vectorial " << endl;
	cout << "Maestro: Jose Antonio Aviña Mendez " << endl;
}


//menú de opciones
int main(int argc, char *argv[]){ 
//agrc: obtiene el número de argumentos que se escribieron en la linea
//agrv: es un array con todos los argumentos que se escribieron en la linea
int oper =  atoi(argv[1]);

  cout << "-----------------------------------" << endl;
  cout << "- ¿Que operacion desea realizar?  -" << endl;
  cout << "- suma de vectores 2D           1 -" << endl;
  cout << "- resta de vectores 2D          2 -" << endl;
  cout << "- multiplicacion de vectores 2D 3 -" << endl;
  cout << "- Modulo o norma de vectores 2D 4 -" << endl;
  cout << "- suma de vectores 3D           5 -" << endl;
  cout << "- Modulo o norma de vectores 3D 6 -" << endl;
  cout << "- Producto punto y cruz      3D 7 -" << endl;
  cout << "- informacion extra             8 -" << endl;
  cout << "-----------------------------------" << endl;
  
 switch(oper) {
    case 1: {
    cout << " " << endl;
  cout << "Suma 2D" << endl;
  float x1,y1,x2,y2;
  x1 = atoi(argv[3]);
  x2 = atoi(argv[8]);
  y1 = atoi(argv[5]);
  y2 = atoi(argv[10]);
  	cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;
  suma_2D(atoi(argv[3]), atoi(argv[8]),  atoi(argv[5]) , atoi(argv[10]));
}
   break;
      case 2:{
    cout << " " << endl;
 	float x1, x2, y1, y2;
  cout << "resta 2D" << endl;
  x1 = atoi(argv[3]);
  y1 = atoi(argv[5]);
  x2 = atoi(argv[8]);
  y2 = atoi(argv[10]);
  cout << "resta: " << "("<< x1 << "," << y1 << ")-("<< x2 << "," << y2 << ")"<< endl;
  resta_2D(atoi(argv[3]), atoi(argv[5]),  atoi(argv[8]) , atoi(argv[10]));
}
    break;
      case 3:{
    cout << " " << endl;
    cout << "multiplicación de vectores 2D" << endl;
	float x,y, escalar;
 	  x = atoi(argv[3]);
	  y = atoi(argv[5]);
	  escalar = atoi(argv[8]);
	  cout << "Multi: " << "("<< escalar << ")*("<< x << "," << y << ")"<< endl;
	  multi_2D(atoi(argv[3]), atoi(argv[5]), atoi(argv[8]));
	}
    break;
     case 4:{
    cout << " " << endl;
    cout << "Modulo o norma de vectores 2D " << endl;
	float x, y;
	  x = atoi(argv[3]);
	  y = atoi(argv[5]);
	
	cout << "|A|: " << "v" << x <<"² + " << y << "²"<< endl;
	modulo_2D(atoi(argv[3]), atoi(argv[5]));
	}
    break;
     case 5:{
    cout << " " << endl;
    cout << "suma de vectores 3D" << endl;
  float x1, x2, y1, y2,x3,y3;
  
  x1 = atoi(argv[3]);
  x2 = atoi(argv[8]);
  x3 = atoi(argv[13]);
  y1 = atoi(argv[5]);
  y2 = atoi(argv[10]);
  y3 = atoi(argv[15]);
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl;
  suma_3D(atoi(argv[3]), atoi(argv[5]), atoi(argv[8]), atoi(argv[10]), atoi(argv[13]), atoi(argv[15]));
	}
    break;
     case 6:{
     cout << " " << endl;
    cout << "Modulo o norma de vectores 3D" << endl;
	float x, y,z;
	  x = atoi(argv[3]);
	  y = atoi(argv[5]);
	  z = atoi(argv[7]);
	  cout << "|A|: " << "v" << x <<"² + " << y << "² + " << z << "²"<< endl;
	  modulo_3D(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]));
	}
    break;
     case 7:{
    cout << " " << endl;
float x1, x2, y1, y2, z1, z2;
  
  x1 = atoi(argv[3]);
  y1 = atoi(argv[5]);
  z1 = atoi(argv[7]);
  x2 = atoi(argv[10]);
  y2 = atoi(argv[12]);
  z2 = atoi(argv[14]);
  
  cout << "Producto punto: " << "("<< x1 << "*" << x2 << ")+(" << y1 <<  "*" << y2 << ")+(" << z1 <<  "*" << z2 << ")"<< endl;
  producto_punto(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]), atoi(argv[10]), atoi(argv[12]), atoi(argv[14]));
  
  cout << " " << endl;
  
  cout << "Producto Cruz 3D " << endl;
  cout << "| i j k |" << endl;
  cout << "| "<< x1 << " " << y1 << " " << z1<< " |" <<  " = i(" << y1 << "(" << z2 << ")) - " << y2 << "(" << z1 << ")) - j(" << x1 << "(" << z2 << ") - " << x2 << "(" << z1 << ")) + k(" << x1 << "(" << y2 << ")- "<< x2 << "(" << y1 <<")" << endl;
  cout << "| "<< x2 << " " << y2 << " " << z2<< " |" << endl;
  producto_cruz(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]), atoi(argv[10]), atoi(argv[12]), atoi(argv[14]));
	}
    break;
    case 8:{
    cout << " " << endl;
	info();
	}
    break;
}
}
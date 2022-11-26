 /*
 Elaborar un programa que muestre el nivel de avance de un estudiante dentro de la universidad.
 La cantidad acumulada de cr�ditos debe ser mayor igual a cero y como m�ximo 160 
 Creditos acumulados     A�o Acad�mico
   Menos de 32            Primer a�o
   entre 32 a 63          Segundo a�o
   entre 64 a 95          Tercer a�o
   entre 96 a 127         Cuarto a�o
   entre 128 a mas        Quinto a�o
*/


#include<iostream>
using namespace std;

int main(){
 
  setlocale(LC_CTYPE,"Spanish");  
  
  //Declarac�n de Variables
  int creditos=0, precio=100,montoapagar=0;
  
  
  //Entrada de Datos
  cout<<"Ingrese los cr�ditos acumulados: ";
  cin>>creditos;
  //Validaci�n
  if (creditos>=0 && creditos<160)
  {  if (creditos<32)
        cout << " Primer a�o";
  	 if (creditos>=32 && creditos<=63)
  	   cout << " Segundo a�o";
  	 if (creditos>=64 && creditos<=95)
  	   cout << " Tercer a�o";
  	 if (creditos>=96 && creditos<=127)
  	   cout << " Cuarto a�o";
  	 if (creditos>=128)
        cout << " Quinto a�o";
  	//Proceso
  	 
  	 montoapagar=creditos*precio;
  	 
  	 //Salida de Datos
  	 cout<<"\n\n-------- REPORTE -----------------"<<endl;
     cout<<"Precio x Cr�dito:  "<<precio<<endl;
     cout<<"Creditos Acum   :  "<<creditos<<endl;
     cout<<"----------------------------------"<<endl;
     cout<<"Monto a pagar   :  "<<montoapagar<<endl;
  	
  }
  else
    cout<<"Ingreso errado ... debe ser mayor a 0";
    
  return 0;
}

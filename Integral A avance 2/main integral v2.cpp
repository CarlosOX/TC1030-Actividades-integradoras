#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "Insertion.h"
#include "Alimentos.h"
#include <stdlib.h>


using namespace std;



int main(){
	
		cout<<"PROGRAMA DE ORDENAMIENTO DE CALORIAS";
		cout<<"Aqui se encuentra una lista de alimentos con sus respectivas calorias por cada 100 gramos";
		
		string matriz[20][2]={{"Manzana","40"},{"Leche de cabra","72"},{"Queso crema","245"},{"Mousse","177"},{"Yogur natural","62"},{"Leche entera","68"},{"Flan de vainilla","102"},{"Jamon","380"},{"Chorizo","468"},{"Pato","200"},{"Pollo","134"},{"Salami","325"},{"Tripas","100"},{"Salmon","172"},{"Trucha","94"},{"Miel","300"},{"Avena","367"},{"Arroz blanco","354"},{"Clara","48"},{"Huevo entero","162"}};
		cout<<endl;
		for(int i=0;i<20;i++){
			for(int j=0;j<2;j++){
				cout<<"["<<matriz[i][j]<<"]"<<"  ";
			}
			cout<<"\n";
		}
		
		cout<<endl;
		int arrayalimentos[] = {40,72,245,177,62,68,102,380,468,200,134,325,100,172,94,300,367,354,48,162};
		vector<int> source (arrayalimentos, arrayalimentos + sizeof(arrayalimentos) / sizeof(int) );
		vector<int> v;
		Sort<int> sort;
		
		cout<<"Aqui se presentan las calorias ordenadas de menor a mayor"<<endl;
		v = sort.insertion(source);
		cout<<endl;
		cout<<arrayToString(v);
		cout<<endl;
		cout<<endl;
		cout<<endl;
		
		cout<<"A continuacion se presenta la estructura lineal para esta base de datos la cual es una lista doblemente ligada"<<endl;
		
		DList<int> alimentoslista;
		for(int i=0;i<v.size();i++){
			alimentoslista.insertion(v[i]);	
		}	
		
		cout<<"LISTA ORDENADA CON ALIMENTOS DE MENOR A MAYOR CALORIAS"<<endl;
		cout<<alimentoslista.toStringForward();
		cout<<endl;
		cout<<"LISTA ORDENADA CON ALIMENTOS DE MAYOR A MENOR CALORIAS"<<endl;
		cout<<endl;
		cout<<alimentoslista.toStringBackward();
		cout<<endl;
		
		bool t=true;
		int opcion;
		string respuesta;
		int val;
		while(t==true){
		
			cout<<"1. AGREGAR"<<endl;
		   	cout<<"2. BUSCAR"<<endl;
		   	cout<<"3. ELIMINAR"<<endl;
		   	cout<<"Escoga una opcion: ";
		   	cin>>opcion;
		   
		  	 if(opcion==1){
		   		cout<<"Ingrese el valor que desea agregar: "<<endl;
		   		cin>>val;
		   		alimentoslista.insertion(val);
		   		cout<<alimentoslista.toStringForward()<<endl;
		   	}
		   	else if(opcion==2){
		   		cout<<"Ingrese el valor a buscar: "<<endl;
		   		cin>>val;
		   		cout<<"POSICION DEL ELEMENTO BUSCADO: "<<alimentoslista.search(val)<<endl;
		   		cout<<alimentoslista.toStringForward()<<endl;
		   	}
		   	else if(opcion==3){
		   		cout<<"Ingrese el iterador del valor que desea eliminar: "<<endl;
		   		cin>>val;
		   		alimentoslista.deleteAt(val);
		   		cout<<alimentoslista.toStringForward()<<endl;
		   		
		   	}
		   
		 	  else{
		   		cout<<"Ingreso una opcion incorrecta"<<endl;
		   	}
		   
		 	  cout<<"Desea continuar modificando la lista?"<<endl;
		   	cin>>respuesta;
		   	if(respuesta=="No"){
		   		t=false;
		   	}
		
		}
	
	return 0;
}

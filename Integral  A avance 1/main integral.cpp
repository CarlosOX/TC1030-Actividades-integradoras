#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "Insertion.h"
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
		int array[] = {40,72,245,177,62,68,102,380,468,200,134,325,100,172,94,300,367,354,48,162};
		vector<int> source (array, array + sizeof(array) / sizeof(int) );
		vector<int> v;
		Sort<int> sort;
		
		cout<<"Aqui se presentan las calorias ordenadas de menor a mayor"<<endl;
		v = sort.insertion(source);
		cout<<endl;
		cout<<arrayToString(v);
		cout<<endl;
		cout<<endl<<"El alimento con mayor numero de calorias es"<<v[(v.size())-1];
	
	return 0;
}

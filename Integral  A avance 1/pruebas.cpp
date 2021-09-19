#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include "Insertion.h"
#include <stdlib.h>


using namespace std;


int main(){

	cout<<"CASO 1. Con alimentos ordenados aleatoriamente se observa que se ordenan correctamente"<<endl;
	
	cout<<"[40,10,50,300,213,130,2,5,]"<<endl;

	int array[] = {40,10,50,300,213,130,2,5,};
	vector<int> source (array, array + sizeof(array) / sizeof(int) );
	vector<int> v;
	Sort<int> sort;
	
	v = sort.insertion(source);
	
	cout<<arrayToString(v);
	cout<<endl;
	cout<<endl;
	cout<<"CASO 2. Con alimentos casi completamente ordenados se observa que se ordenan correctamente"<<endl;
	cout<<"[34,37,89,45,100,120,130]"<<endl;
	
	int array2[]={34,37,89,45,100,120,130};
	vector<int> source2 (array2, array2 + sizeof(array2) / sizeof(int) );
	vector<int> v2;
	Sort<int> sort2;
	
	v2 = sort2.insertion(source2);
	
	cout<<arrayToString(v2);
	
	cout<<endl;
	cout<<endl;
	cout<<"CASO 3. Con alimentos ordenados de forma descendente se observa que se ordenan correctamente"<<endl;
	cout<<"[120,56,46,33,31,26,23,19,15,13]"<<endl;
	
	int array3[]={120,56,46,33,31,26,23,19,15,13};
	vector<int> source3 (array3, array3 + sizeof(array3) / sizeof(int) );
	vector<int> v3;
	Sort<int> sort3;
	
	v3 = sort3.insertion(source3);
	cout<<arrayToString(v3);
	
	
	cout<<endl;
	cout<<endl;
	cout<<"CASO 4. Con alimentos que repiten calorias  se observa que se ordenan correctamente"<<endl;
	cout<<"[20,40,50,40,33,26,23,23,50,33]"<<endl;
	
	int array4[]={20,40,50,40,33,26,23,23,50,33};
	vector<int> source4 (array4, array4 + sizeof(array4) / sizeof(int) );
	vector<int> v4;
	Sort<int> sort4;
	
	v4 = sort4.insertion(source4);
	cout<<arrayToString(v4);
	


	return 0;

};

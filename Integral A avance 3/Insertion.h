#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>


using namespace std;

template <class T>

class Sort{


	private:
		void swap(vector<T>&, int, int);
		
	public:
		vector<T> insertion(const vector<T>& );
		string arrayToString(const vector<T>&);
		
};

template <class T>
string arrayToString(const vector<T> &v) {
	stringstream aux;

	aux << "[" << v[0];
	for (int i = 1; i < v.size(); i++) {
		aux << ", " << v[i];
	}
	aux << "]";
	return aux.str();
}


template <class T>
void Sort<T>::swap(vector<T> &v, int i, int j) {
	T aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}
	
template <class T>
vector<T> Sort<T>::insertion(const vector<T> &source) {
	vector<T> v(source);

	for (int i = 1; i < v.size(); i++) {
		for (int j = i; j > 0 && v[j] < v[j - 1]; j--) {
			swap(v, j, j - 1);
		}
	}
	return v;
}



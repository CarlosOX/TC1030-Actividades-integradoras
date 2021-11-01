# PROGRAMA PARA ORDENAR LAS CALORIAS DE ALIMENTOS DE MENOR A MAYOR CALORIAS
Este programa tiene como objetivo encontrar los alimentos que mayor calorias tienen y menor. Ya sea en una base de datos con muchos alimentos o en una dieta asignada. 
Puede servir para determinar que alimentos conviene comer y cuales escoger dependiendo de lo que se espera lograr, ya sea un deficit calorico o superavit calorico.
## SICT0302B: Toma decisiones 

### Selecciona y usa una estructura lineal adecuada al problema

Hago uso de una lista doblemente ligada para almacenar las calorias de los alimentos de forma que se pueda acceder a cada valor de la lista, encontrar el ultimo valor agregado(tail) o el primer valor agregado (head). El poder crear una lista doblemente ligada permite poder agregar o eliminar los elementos guardados. Como se trabaja con apuntadores se permite aplicar métodos a la lista que la modifiquen ya sea buscando algun objeto, agregandolo, actualizandolo o eliminandolo. 


### Selecciona un algoritmo de ordenamiento adecuado al problema

Para este problema utilice un algoritmo de tipo insertion, para poder organizar las calorias de menor a mayor utilize insertion sort ya que los datos que se esperan recibir en su mayoria estan ordenados de manera aleatoria o incluso en algunos casos ya vendrian casi resueltos. Por lo que se estarian usando el mejor de los casos con una complejidad de o(n). Existen otros algoritmos que podrian ser mas rapidos pero escogi este debido a que no se espera trabajar con listas muy grandes,  es mas sencillo de implementar y para los casos que se espera recibir son el mejor de los casos para este algortimo.

### Usa un árbol adecuado para resolver un problema

Usé un BTS para poder organizar los alimentos por sus calorias, de tal manera que se puedan encontrar o agregar alimentos con calorias similares. El arreglo inicial que se utilizó para el árbol está desordenado por lo que es poco probable que se degenere.

Utilicé un menú donde se encuentran las funciones de busqueda, eliminar o agregar algun dato al árbol. Estas se encuentran en las líneas 81 a la 83.

## SICT0301B: Evalúa los componentes

### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa,

los casos de pruebas para todas las funciones se encuentran pruebas.cpp donde se prueban las funciones de: 

El ordenamiento de datos para todos los casos posibles de forma correcta.
Se observan las diferentes funciones que se pueden realizar con las listas, entre ellas agregar, eliminar o buscar algun elemento en la lista.


### Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes,

#### lista 
 Funcion de inserción: O(1) debido a que no presenta iteraciones y solo hay operaciones que  afectan  las entradas .
 Funcion de busqueda: O(n)  Para esta función se presenta un ciclo While donde n es representado por el valor que se desea encontrar se trata de O(1)*n. 
 Funcion de eliminado: O(n) y O(1) 
Para esta función se presentan un valor de entrada en el cual se utiliza un ciclo While donde las iteraciones(itr) son representadas por " n " e incrementa de forma lineal. Sin embargo este ciclo no afecta los valores de entrada de la función por lo que O(1). O sea complejidad O(1).


#### ordenamiento de calorías

ordenamiento con insertion sort:  Para la mayoria de los casos se recibiran datos de forma aleatoria por lo que la complejidad sera o(n)

#### uso de árbol

Funcion add del BST: O(log(n)) debido a que casi siempre se tendrá el mejor de los casos el cual es que no esté degenerado el árbol. Debido a su recursividad es O*log(n). Para el peor de los casos, el cual sería un árbol degenerado será complejidad O(n).

Función remove del BST: O(log(n)) debido a su recursividad la cual modifica los valores de entrada. O*log(n). Todo esto para el mejor de los casos, el cual se tendrá la mayoría de las veces. Para el peor de los casos el cual es un árbol degenerado será complejidad O(n).

Función find del BST: Debido a su recursividad se tiene O*log(n) para el mejor de los casos el cual es un árbol no degenerado. O sea O(log(n)). Para el peor de los casos se trata de una complejidad O(n) el cual se daría en un árbol degenerado.


## SICT0303B: Implementa acciones científicas 
### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.

Se implementara en proximos avances

### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. Usar de manera
Se implementara en proximos avances

### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa. Usar de manera
Se implementara en proximos avances

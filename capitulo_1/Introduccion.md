# CAPITULO 1: Introducción

Resumen del primer cápitulo del libro

## 1.1 Abstracción
Es un proceso mental mediante el cual el ser humano tiene la capacidad de extraer los rasgos esenciales de “algo” para representarlos por medio de un lenguaje gráfico o escrito. Esta acción subjetiva y creativa, depende del contexto psicológico de la persona que la realiza.

## 1.2 Estructuras de datos

Una estructura de datos, se define como una colección o grupo de datos organizados de forma asociada correctamente para así poder aplicarles operaciones de manipulación a dichos datos, todos por igual.

Tipos de estructuras de datos:
* Estructuras de datos estácticas: se les asigna un tamaño fio de memoria y no puede cambiar durante la ejecución del programa.

* Estructuras de datos dinámicas: el tamaño de memoria utilizada no se fija, no es constante y se adapta durante el uso del programa implementado, su tamaño en memoria puede aumentar y disminuir durante la ejecución del programa.
    - Estructuras lineales: Son aquellas en las que se definen grupos de elementos con una relacion predecesor-sucesor. Las estructuras lineales más importantes son: las pilas, colas y las listas.
    - Estructuras no lineales. En estas estructuras no existe una relacion de adyacencia entre elementos, los elementos pueden o no estar ligados a los demás elementos. Las estructuras no lineales mas destacables son: los árboles y los grafos.

## 1.3 Listas ligadas
Son un tipo de estructura dinámicas lineales. Esta conformada de n elementos $(x_1, x_2, x_3, ..., x_n)$, donde el elemento $x_{k+1}$ tiene como predecesor a $x_{k}$ donde el valor de $k$ es $1 <= k < n$

A partir de la forma del nodo y su número de ligas a otros nodos, las listas se clasifican como:

- Listas sencillas
- Listas dobles
- Listas de listas (Multiencadenamiento)

### 1.3.1 Listas sencillas
Una lista sencilla esta conformada por nodos que **solamente** tienen una liga hacia su siguiente nodo. De modo que cada nodo es apuntado desde el nodo predecesor dentro de la lista. A la vez, puede haber dos tipos de listas sencillas:

- Lista Sencilla Lineal: donde cada nodo solo apunta a su sucesor, el último nodo apunta a un valor nulo o vacío.
- Lista Sencilla Circular: cada nodo apunta a su predecesor y a su sucesor, a excepción del primero (Head) que apunta como predecesor el último nodo de la lista y el último al primero como su sucesor.

### 1.3.2 Listas dobles
Similar a la lista sencilla, con la diferencia que ahora cada nodo tendrá un apuntador extra hacia su predecesor. El primer nodo de la lista (Head) apuntará como predecesor a nulo o vacío y su último nodo apuntará como predecesor al antepenultimo nodo. La lista doble circular, por su parte, seguirá apuntando el último nodo hacia el primero y el primero hacia el último, ahora con doble puntero predecesor-sucesor.

### 1.3.3 Listas ortogonales
Es una estructura donde cada nodo que la conforma tendrá cuatro nodos, donde cada nodo apunta:

- Hacia arriba: su predecesor vertical
- Hacia abajo: su sucesor vertical
- Hacia la izquierda: su predecesor horizontal
- Hacia la derecha: su sucesor horizontal

Si el nodo no apunta hacia otro nodo, lo hará hacia nulo o vacío. Este tipo de listas son utilizadas como matrices dinámicas.

### 1.3.4 Operaciones básicas

Todas las listas mencionadas tendrán en común operaciones para ser manipuladas, las cuales están implementadas en cada una dependiendo su forma, a manera de no romper el orden y concordancia entre los datos almacenados. Estas operaciones son:

1. **Recorrido:** recorrer la estructura es leer los datos de todos los nodos, nodo a nodo, hasta llegar al último de ellos inclusive.
2. **Inserción:** añade un nodo con cierta información dada en la estructura, ya sea:
- Al inicio
- Al final
- En un orden específico (ascendente, descendente, orden de ingreso, alfabetico, etc).
3. **Búsqueda:** dado un dato o referencia específica, recorre la estructura hasta encontrar un nodo con la información de referencia dada o, llegar en su defecto, al final de la estructura.

### 1.3.5 Ventajas y desventajas
A diferencia de arreglos (arrays) por defecto en algunos lenguajes compilados (C, Perl, Java, C++) las estructuras son dinámicas en cuando a la cantidad de datos a resguardar, a diferencia de dichos arreglos donde la cantidad de datos a almacenar debe ser indicada antes de instancia dicho arreglo.

La desventaja primordial es el cuidado respecto al uso de punteros, el cual, si no se hace con el debido cuidado podríamos modificar información sensible grabada en espacios de memoria principal en ese momento.

# 1.4 Nomenclatura

La información para un nodo como mínimo tiene la siguiente conformación:

| Caracteristica | Descripción |
|-|-|
| Dirección | Ubicación en la memoria (principal o masiva) |
| Dato o información | Campo(s) donde se almacena la información a manipular (string, int, char, Object, etc) |
| Enlace o Liga | Es un campo (al menos uno) que permite almacenar la dirección del siguiente nodo de la lista |

Si **P** es un apuntador a un nodo cualquiera, la siguiente nomenclatura se usará para identificar cada una de las caracteristicas antes descritas:

| nomenclatura | significado |
|-|-|
| p | Apuntador al nodo cuya dirección de memoria está en p |
| p(dato) | El campo de información para el nodo apuntado por p |
| p(liga) | El campo que almancena la dirección de memoria del nodo sucesor del nodo p. Dependiendo del tipo de lista puede tener más de un enlace |
| p(liga)<-NULL | El campo almacena un valor nulo para indicar que no existe un sucesor del nodo p |
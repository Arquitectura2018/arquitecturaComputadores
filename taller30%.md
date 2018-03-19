# TALLER ( PRIMER PARCIAL)
# Christian Herrera
## ARQUITECTURA DE COMPUTADORES 2018 Jornada Especial
1. ¿Qué es una arquitectura de computadores?

`Es el diseño, estructura, y agrupación de componentes físicos y lógicos para leer, escribir y procesar datos`

2. Nombre las generaciones de los computadores y sus características más relevantes
```
                            	Primera Generación - La válvula o tubo de vacío (1946-1954)
			    
1943 -> ENIAC -> 30 toneladas -> 140 Kw.
1946 -> Máquina de John Von Neumann (Arquitectura utilizada hasta nuestros días)
1953 -> IBM crea algunas máquinas (701, 704, 709).



			    	Segunda Generación - El Transistor (1957-1964)

1948 -> En los Laboratorios Bell inventaron el transistor y con este desarrollo se ganaron el premio Nobel
	de física.
1961 -> La empresa Digital Equipment Corporation (DEC) lanza un computador conocido como el PDP-1 con una 
	RAM de 120 KB, basado en transistores y la venta al público era de USD $120.000. En este mismo 
	año IBM lanza el IBM 7090 y tenía 32 KB de RAM
1964 -> Sale al mercado el CDC 1600 -> Primera Máquina paralela.

			    	
				
				Tercera Generación - El Circuito Integrado (1964-1971)
			    
1964 -> Aparece el S/360 -> Registros de 32 bits con direccionamiento de memoria de 2^24 posiciones.
1959 -> Texas Instruments desarrolla el primer circuito integrado con 12 transistores.

				
				
				Cuarta Generación - Large Scale Integration (LSI)
				Very Large Scale Integration (VLSI), Microprocesador (1971-1983)
				
Decenas de miles de transistores en un chip (LSI -> Large Scale Integration)
Cientos de miles de transistores en un chip (VLS -> Very Large Scale Integration)
Microprocesador.
Caída de precios por lo que la IBM desarrolla el primer PC.

				
				
				Quinta Generación - Very High Scale Integration (VHLSI), PC's (1990-????)

Very High Large Scale Integration -> millones de transistores.
```

3. Segun Flynn ¿ Cuál es la clasificación de las arquitecturas?
```Este tipo de clasificación también es conocida como la taxonomía de Flynn y se clasifica en 4 tipos:

SISD -  Single Instruction Single Data. Este tipo de arquitecturas normalmente se ven en celulares de 
 	gama baja, generalmente presente en sistemas con un sólo núcleo. 
	Se asigna la ejecución de una sola instrucción sobre un solo dato.

SIMD -  Single Instruction Multiple Data. En este caso una sola instrucción es ejecutada sobre un 
	conjunto de datos. Este tipo de arquitecturas tiene como ejemplo a los procesadores vectoriales.

MIMD -  Multiple Instruction Multiple Data - Aquí lo que se tiene es que un conjunto de instrucciones 
	diferentes se aplica sobre un conjunto de datos distintos. Un ejemplo de este tipo de 
	arquitecturas puede verse en las GPU, o incluso en sistemas conectados en clúster.

MISD -  Multiple Instruction Single Data. No es una arquitectura típica
```

4. Nombre las clases de aplicaciones de cómputo.
```
	> Equipos de escritorio (PC’s)

	> Equipos servidores. (Utilizados para almacenar bases de datos y a los cuales acceden muchos usuarios)
	  
	> Tablets - dispositivos móviles

	> Wearables

	> Supercomputadores - HPC (High Performance Computing) - GPU : CPU (Sistemas heterogeneos)
```

5. Muestre la clasificación de la jerarquía de un equipo de cómputo.

      ![jerarquía](./Imagenes/jerarquia.jpg "Jerarquía de un equipo de cómputo")

6. ¿Qué es un compilador?
```Es un software que verifica si un progrma de alto nivel está bien escrito y si este es el caso,
   traduce ese programa a lenguaje ensamblador y luego a lenguaje máquina"
```

7. ¿ Defina qué es una instrucción?

8. ¿Cuales son los principios básicos de diseño de hardware de una arquitectura de cómputo, escriba una definición de cada uno?

9. ¿Qué es SPARCV8?

10. ¿Cuáles son las categorías de instrucciones de la arquitectura SPARCV8?

11. ¿Que tipos de registros se encuentran en SPARC V8?

12. ¿ Cuál es el número mínimo y máximo de registros que se puede implementar en la arquitectura SPARCV8?

13. ¿ Cuáles son las instrucciones de acceso a memoria de SPARCV8? de un ejemplo de cada uno.

14. Represente los siguientes números en complemento a 2.
```
	a.5
	b.12890
	c.56900
	d.11
	e.140
```
15. Explique las instrucciones aritmético lógicas y su sintaxis en lenguaje ensamblador.

16. Explique cada uno de los campos de los 3 formatos de la arquitectura SPARC V8.

17. ¿Qué diferencia hay entre el campo **op, op2 y op3**?

18. ¿Qué es **PSR** ?, explique cada uno de sus campos.

19. ¿ Qué es **ICC** y **CWP**?

20. ¿Qué es una instrucción sintética, de dos ejemplos?

21. ¿Qué significa el campo **a** para una instrucción BRANCH?.

22. ¿Para qué la instrucción **CALL** utiliza el registro %O7?.

23. Convertir el siguiente programa en lenguaje de máquina a lenguaje ensamblador y luego a lenguaje de alto nivel:
```
10100000000100000010000000000101
10100010000100000011111111111010
10010000000001000100000000010000
```
24.Solucione el siguiente programas en lenguaje ensamblador, lenguaje de máquina y hexadecimal, además coloque su dirección de memoria.
```c
int main(){
	int i = 5; 
	int b = -4;
	int c[100];
	int d[20];
	c[5] = i + 2;
	d[4] = b + 3;
	return c[5] + d[4] -i
}
```

25. Convierta el siguiente código a lenguaje ensamblador, máquina **SPARC V8** y hexadecimal.
a.
 ```c
 int main(){
 int a = 8;
 int b = -14800;
 int c = 33; 
 if((a+b)<=b*16){
 	c=a+(b*2);
	}
else{
	return b-78;
}
	return a+c;
}
 ```

b.
 ```c
int main(){
	int a = 8;
	int b = -10;
	if(a!=b){
		return c/16;
	}
	else{
		return b*32;
	}
}
```
c.

 ```c
int main(){
	int a = -21180;
}
```

26. Convierta el siguiente código a lenguaje ensamblador, máquina **SPARC V8** y hexadecimal.
 ```c
int test(int x, int y, int w){
	int z;
	z = x - y + w*4;
	return z + 2;
}

int main(){
	int a = 4, b = 2, c = -15600;
	int x = test(a,b,c);
	return x + 45;
}
 ```

27. Implemente la función **Pot** en lenguaje de alto nivel,lenguaje ensamblador **SPARC V8** y lenguaje de máquina SPARC V8 que realice la potencia de dos números enteros sin signo realizando llamados a la función multiplicacion hecha en clase.

28. Implemente una función **Fact** en lenguaje de alto nivel, lenguaje ensamblador **SPARC V8** y lenguaje de máquina SPARC V8 que calcule el factorial de un número entero sin signo.

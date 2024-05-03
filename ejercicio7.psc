Proceso ejercicio7
		Definir num, i Como entero;
		Dimension vect1[10];
		Dimension vect2[10];
		Dimension vect3[10];
		Escribir "Ingrese la longitud de los vectores: ";
		Leer num;
		
		Escribir "Ingrese los valores de los vectores: ";
		Para i <- 0 Hasta num-1 Con Paso 1 Hacer
			Leer vect1[i];
		FinPara
		
		Para i <- 0 Hasta num-1 Con Paso 1 Hacer
			Leer vect2[i];
		FinPara
		
		Para i <- 0 Hasta num-1 Con Paso 1 Hacer
			vect3[i] <- vect1[i] + vect2[i];
		FinPara
		
		Escribir "El resultado de la suma de vectores es: ";
		Para i <- 0 Hasta num-1 Con Paso 1 Hacer
			Escribir vect3[i], " ";
		FinPara
		Escribir "";
FinProceso
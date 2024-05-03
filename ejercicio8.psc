Proceso ejercicio8
		Definir long, i, producto_punto Como Entero;
		Definir vector1, vector2 Como Entero;
		
		Escribir "Ingrese la longitud de los vectores: ";
		Leer long;
		
		Para i <- 1 Hasta long Con Paso 1 Hacer
			Escribir "Ingrese el elemento ", i, " del primer vector: ";
			Leer vector1;
		Fin Para
		
		Para i <- 1 Hasta long Con Paso 1 Hacer
			Escribir "Ingrese el elemento ", i, " del segundo vector: ";
			Leer vector2;
		Fin Para
		
		producto_punto <- 0;
		Para i <- 1 Hasta long Con Paso 1 Hacer
			producto_punto <- producto_punto + (vector1 * vector2);
		Fin Para
		
		Escribir "El producto punto de los dos vectores es: ", producto_punto;
FinAlgoritmo
Proceso CalcularPromedio
    Definir numEstudiantes, i, nota, sum, promedio Como Real;;
    numEstudiantes <- 10;
    sum <- 0;
    Para i <- 1 Hasta numEstudiantes Con Paso 1 Hacer
        Escribir "Ingrese la calificacion del estudiante ", i, ": ";
        Leer nota;
        sum <- sum + nota;
    FinPara
    promedio <- sum / numEstudiantes;
    Escribir "El promedio general de la seccion es: ", promedio;
FinProceso
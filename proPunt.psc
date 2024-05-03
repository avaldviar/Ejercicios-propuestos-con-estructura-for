Proceso proPunt
	definir i, vect1, vect2, produ como entero;
	dimensionar vect1[2], vect2[2];
	produ <- 0;
	
	para i<-0 hasta 1 con paso +1 Hacer
		escribir "ingresar numero ", i+1, " a vector 1:";
		leer vect1[i];
		escribir "ingresar numero ", i+1, " a vector 2:";
		leer vect2[i];
	FinPara
	
	para i<-0 hasta 1 con paso +1 Hacer
		produ <- produ + (vect1[i] * vect2[i]);
	FinPara
	
	escribir "El producto punto de los dos vectores ingresados es: ", produ;
FinProceso
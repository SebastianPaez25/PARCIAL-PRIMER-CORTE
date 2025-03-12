Algoritmo OSCILADOR
	// Definición de variables
	Definir numero_base, exponente, f Como Real
	Definir radio, microondas, infrarojo, visible, ultravioleta, rayos_x Como Real
	
	Repetir
		Escribir 'Ingrese el número base: '
		Leer numero_base // While
		Si (numero_base)=(caracter) Entonces
			Escribir 'Error: solo puede ingresar números para la base'
		FinSi
	Hasta Que  NO (numero_base)=(caracter)
	
	Repetir
		Escribir 'Ingrese el exponente:'
		Leer exponente // While
		Si (exponente)=(caracter) Entonces
			Escribir 'Error: solo puede ingresar números para el exponente.'
		FinSi
	Hasta Que  NO (exponente)=(caracter)
	
	// Limite de cada tipo de radiación
	radio <- 3*10^9
	microondas <- 3*10^12
	infrarojo <- 4.3*10^14
	visible <- 7.5*10^14
	ultravioleta <- 3*10^17
	rayos_x <- 3*10^19
	
	// Cálculo de la frecuencia
	f <- numero_base*10^exponente
	// Clasificación de la radiación según su frecuencia
	
	Si f < radio Entonces
		Escribir 'Tipo de radiación: Radio.'
	SiNo
		Si f < microondas Entonces
			Escribir 'Tipo de radiación: Microondas.'
		SiNo
			Si f < infrarojo Entonces
				Escribir 'Tipo de radiación: Infrarojo.'
			SiNo
				Si f < visible Entonces
					Escribir 'Tipo de radiación: Visible.'
				SiNo
					Si f < ultravioleta Entonces
						Escribir 'Tipo de radiación: Ultravioleta.'
					SiNo
						Si f < rayos_x Entonces
							Escribir 'Tipo de radiación: Rayos X.'
						SiNo
							Escribir 'Tipo de radiación: Rayos gamma.'
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
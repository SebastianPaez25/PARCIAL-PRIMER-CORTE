# Bucle que solicita el número base hasta recibir un valor válido
while True:
    try: # Código que puede contener un error
        numero_base = float(input("Ingrese el numero base y presione enter: "))
        break # Rompe el bucle si la entrada es válida
    except ValueError: # Usamos except para clasificar el error
        print("Error: solo puede ingresar numeros para la base.")
    
# Bucle que solicita el exponente hasta recibir un valor válido
while True:
    try: # Código que puede contener un error
        exponente = float(input("Ingrese el exponente y presione enter: "))
        break # Rompe el bucle si la entrada es válida
    except ValueError: # usamos except para clasificar el error
        print("Error: solo puede ingresar numeros para el exponente.")
 
# Cálculo de la frecuencia
f = numero_base * 10**exponente

# Definir límites de cada tipo de radiación en Hercios
radio = 3e9
microondas = 3e12
infrarojo = 4.3e14
visible = 7.5e14
ultravioleta = 3e17
rayos_x = 3e19

# Definir el tipo de radiación según la frecuencia
if f < radio:
    print("Tipo de radiación: Radio.")
elif f < microondas:
    print("Tipo de radiación: Microondas.")
elif f < infrarojo:
   print("Tipo de radiación: Infrarojo.")
elif f < visible:
    print("Tipo de radiación: Visible.")
elif f < ultravioleta:
    print("Tipo de radiación: Ultravioleta.")
elif f < rayos_x:
    print("Tipo de radiación: Rayos X.")
else:
    print("Tipo de radiación: Rayos gamma.")
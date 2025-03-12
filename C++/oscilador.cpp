#include <iostream>
#include <cmath> // Para usar pow()
#include <limits> // Para usar numeric_limits<streamsize>
using namespace std;

int main() { 
    float numero_base;
    // Bucle que solicita el numero base hasta recibir un valor válido
    while (true) {
        std::cout << "Ingrese el numero base y presione enter: ";
        if (std::cin >> numero_base) {
            break; // Rompe el bucle si la entrada es válida
        } else {
            std::cerr << "Error: Solo puede ingresar numeros para la base." << std::endl;
            std::cin.clear(); // Limpia los datos guardados en cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpia el bufer de cin
        }
    }
    
    float exponente;
    // Bucle que solicita el exponente hasta recibir un valor válido
    while (true) {
        std::cout << "Ingrese el exponente y presione enter: ";
        if (std::cin >> exponente) {
            break; // Rompe el bucle si la entrada es válida
        } else {
            std::cerr << "Error: Solo puede ingresar numeros para el exponente." << std::endl;
            std::cin.clear(); // Limpia los datos guardados en cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpia el bufer de cin
        }   
    }
    
    // Cálculo de la frecuencia y usando pow() para calcular el exponente
    double f = numero_base * pow(10, exponente);
    
    // Definir límites de cada tipo de radiación en hercios
    double radio = 3e9;
    double microondas = 3e12;
    double infrarojo = 4.3e14;
    double visible = 7.5e14;
    double ultravioleta = 3e17;
    double rayos_x = 3e19;
    
    // Definir el tipo de radiación según la frecuencia
    if (f < radio) {
        std::cout << "Tipo de radiacion: Radio." << std::endl;
    } else if (f < microondas) {
        std::cout << "Tipo de radiacion: Microondas." << std::endl;
    } else if (f < infrarojo) {
        std::cout << "Tipo de radiacion: Infrarojo." << std::endl;
    } else if (f < visible) {
        std::cout << "Tipo de radiacion: Visible." << std::endl;
    } else if (f < ultravioleta) {
        std::cout << "Tipo de radiacion: Ultravioleta." << std::endl;
    } else if (f < rayos_x) {
        std::cout << "Tipo de radiacion: Rayos X." << std::endl;
    } else {
        std::cout << "Tipo de radiacion: Rayos gamma." << std::endl;
    }
    
    return 0;
}
// Perimetro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    float semi, t, r, v1, at, pt, L;

    L = 7;
    v1 = 21 / 2.0;
    float v2 = L * 3;

    semi = (3.1416 * pow(v1, 2)) / 2; //173.1807
    float t1 = (L * v2) / 2.0;
    t = t1 * 2;//73.5
    r = (L * v2) * 2; //294
    at = semi + t + r;

    semi = v1 * (2 + 3.1416);
    t = pow(v2, 2) + pow(L, 2);
    float t2 = (sqrt(t)) * 2;

    r = (L * 4);
    pt = semi + t2 + r;
    printf("area: %f\n", at);
    printf("perimetro: %f\n", pt);

    return 0;

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

#include <stdio.h>
#include <string.h>

typedef struct circuloStruct{
    float radio;
    float area;
}circulo;

typedef struct elipseStruct{
    float radio_menor;
    float radio_mayor;
    float area;
}elipse;

typedef struct trianguloStruct{
    float lado_1;
    float lado_2;
    float lado_3;
    float area;
}triangulo;

typedef struct cuadradoStruct{
    float lados;
    float area;
}cuadrado;

typedef struct rectanguloStruct{
    float base;
    float altura;
    float area;
}rectangulo;

typedef union figurasUnion{
    circulo circulo;
    elipse elipse;
    triangulo triangulo;
    cuadrado cuadrado;
    rectangulo rectangulo;
}figuras;

typedef enum {CIRCULO,ELIPSE,TRIANGULO,CUADRADO,RECTANGULO}figuras_index;

double calcular_superficie_figura();
circulo cargarCirculo();
elipse cargarElipse();
triangulo cargarTriangulo();
cuadrado cargarCuadrado();
rectangulo cargarRectangulo();


int main(){
    float superficie = calcular_superficie_figura();
    if (superficie != -1){
        printf("La superficie es de: %f \n", superficie);
    }
    return 0;
}

double calcular_superficie_figura(){
    int opcion;
    figuras figura;
    printf("Figura que va a ingresar (ciruclo(0)/elipse(1)/triangulo(2)/cuadrado(3)/rectangulo(4)): ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 0:
        figura.circulo = cargarCirculo();
        figura.circulo.area = figura.circulo.radio * figura.circulo.radio * 3.1416;
        return figura.circulo.area;
        break;
    case 1:
        figura.elipse = cargarElipse();
        figura.elipse.area = 3.1416 * figura.elipse.radio_mayor * figura.elipse.radio_menor;
        return figura.elipse.area;
        break;
    case 2:
        figura.triangulo = cargarTriangulo();
        figura.triangulo.area = figura.triangulo.lado_1 * figura.triangulo.lado_2 / 2;
        return figura.triangulo.area;
        break;
    case 3:
        figura.cuadrado = cargarCuadrado();
        figura.cuadrado.area = figura.cuadrado.lados * figura.cuadrado.lados;
        return figura.cuadrado.area;
        break;
    case 4:
        figura.rectangulo = cargarRectangulo();
        figura.rectangulo.area = figura.rectangulo.base * figura.rectangulo.altura;
        return figura.rectangulo.area;
        break;
    default:
        printf("No ha ingresado una opcion valida \n");
        return -1;
        break;
    }
}

circulo cargarCirculo(){
    circulo c;
    printf("Ingrese el radio: ");
    scanf("%f", &c.radio);
    c.area = -1;
    return c;
};

elipse cargarElipse(){
    elipse e;
    printf("Ingrese el radio menor: ");
    scanf("%f", &e.radio_menor);
    printf("Ingrese el radio mayor: ");
    scanf("%f", &e.radio_mayor);
    e.area = -1;
    return e;
}
triangulo cargarTriangulo(){
    triangulo t;
    printf("Ingrese el lado 1: ");
    scanf("%f", &t.lado_1);
    printf("Ingrese el lado 2: ");
    scanf("%f", &t.lado_2);
    printf("Ingrese el lado 3: ");
    scanf("%f", &t.lado_3);
    t.area = -1;
    return t;
}
cuadrado cargarCuadrado(){
    cuadrado c;
    printf("Ingrese los lados: ");
    scanf("%f", &c.lados);
    c.area = -1;
    return c;
}
rectangulo cargarRectangulo(){
    rectangulo r;
    printf("Ingrese la base: ");
    scanf("%f", &r.base);
    printf("Ingrese la altura: ");
    scanf("%f", &r.altura);
    r.area = -1;
    return r;
}
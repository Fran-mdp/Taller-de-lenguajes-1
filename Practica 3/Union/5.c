typedef struct dimensiones{
    double pos_x;
    double pos_y;
    double ancho;
    double alto;
}dim;

typedef union acceso{
    dim separadas;
    double puntos[2][2];
    double juntas[4];
}acc;

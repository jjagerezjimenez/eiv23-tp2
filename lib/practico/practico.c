#include <practico.h>


/**
 * @brief Sumar dos enteros de 32 bit
 * 
 * @param A Primer sumando
 * @param B Segundo sumando
 * @return Resultado de la suma 
 */
int32_t suma(int32_t A,int32_t B)
{
    // reemplazar el código de abajo con la solución
   return A+B;
}

/**
 * @brief Sumar los números de un arreglo en memoria
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return sumatoria de b[0] hasta b[n-1]
 */
int64_t sumatoria(int32_t n,const int32_t *b)
{
    // reemplazar el código de abajo con la solución
    int sumatoria = 0;
    
    for (;n>0;n--){
        sumatoria = sumatoria + b[n-1];
    }
    return sumatoria;
}

/**
 * @brief Encuentra la posicion del máximo elemento de un arreglo
 * 
 * @param n Cantidad de números
 * @param b Puntero al primer número
 * @return Posición del mayor número k tal que b[k] <= b[i] para todo i en {0,..,n-1}
 */
int32_t posicion_maximo(int32_t n,const int32_t *b)
    // reemplazar el código de abajo con la solución
{   int maximo = b[0], posicion=0;

    for (;n>0;n--){
        if (b[n-1] > maximo) {maximo = b[n-1]; posicion = n-1;};

    }
    return posicion;
}

/**
 * @brief Ordenar un arreglo de menor a mayor en el lugar
 *
 * Luego del llamado a esta función debe cumplirse que
 * b[i]<=b[j] para todo i <= j con i,j en {0,..,n-1}
 *  
 * @param n Cantidad de números
 * @param b Puntero al primer número
 */
void ordenar_en_sitio_menor_a_mayor(int32_t n,int32_t *b)
{   int x=0, posicion=0;
    // reemplazar el código de abajo con la solución
    for (;n>0;n--){
        x = b[n-1];
        posicion = posicion_maximo(n,b);
        b[n-1] = b[posicion];
        b[posicion] = x;
    }
    return ;
}

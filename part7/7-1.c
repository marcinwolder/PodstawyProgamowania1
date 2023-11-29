#include <stdio.h>
#include <stdlib.h>

double* czytaj(int rows, int cols);
void pisz(double *matrix, int rows, int cols);
void dodaj(double* matrix1, int rows1, int cols1, double* matrix2, int rows2, int cols2);
void iloczyn(double* matrix1, int rows1, int cols1, double* matrix2, int rows2, int cols2);

int main(void){
    int n1, n2, m1, m2;

    double *matrix1, *matrix2;
    
    printf("Podaj rozmiar macierzy A: \n");
    scanf("%d %d", &n1, &m1);
    printf("Podaj elementy macierzy A: \n");
    matrix1 = czytaj(n1, m1);
    
    printf("Podaj rozmiar macierzy B: \n");
    scanf("%d %d", &n2, &m2);
    printf("Podaj elementy macierzy B: \n");
    matrix2 = czytaj(n2, m2);
    
    printf("\nMacierz A\n");
    pisz(matrix1, n1, m1);
    printf("\nMacierz B\n");
    pisz(matrix2, n2, m2);
    
    printf("\nWynik dodawania macierzy (A+B):\n");
    dodaj(matrix1, n1, m1, matrix2, n2, m2);
    
    printf("\nWynik mnozenia macierzy (AxB):\n");
    iloczyn(matrix1, n1, m1, matrix2, n2, m2);
    printf("\nWynik mnozenia macierzy (BxA):\n");
    iloczyn(matrix2, n2, m2, matrix1, n1, m1);
    
    free(matrix1);
    free(matrix2);
    
    return 0;
}

double* czytaj(int rows, int cols){
    double *arr = malloc(rows*cols*sizeof(double));
    
    for (int i = 0; i < rows*cols; i++) {
        double buf;
        scanf("%lf", &buf);
        *(arr+i) = buf;
    }
    
    return arr;
}
void pisz(double *matrix, int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.4lf ", *(matrix+(i*cols+j)));
        }
        printf("\n");
    }
}
void dodaj(double* matrix1, int rows1, int cols1, double* matrix2, int rows2, int cols2){
    if(rows1 != rows2 || cols1 != cols2){
        printf("Nie można dodać macierzy (złe rozmiary!)\n");
        return;
    }
    
    double *resultMatrix = malloc(rows1*cols1*sizeof(double));
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            int index = i*cols1+j;
            *(resultMatrix+index)=*(matrix1+index)+*(matrix2+index);
        }
    }
    
    pisz(resultMatrix, rows1, cols1);
}
void iloczyn(double* matrix1, int rows1, int cols1, double* matrix2, int rows2, int cols2){
    if(cols1 != rows2){
        printf("Nie można wymnozyć macierzy (złe rozmiary!)\n");
        return;
    }
    double *resultMatrix = malloc(rows1*cols2*sizeof(double));
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            int sum = 0;
            for (int k = 0; k < cols1; k++) {
                double a = *(matrix1+(i*cols1+k));
                double b = *(matrix2+(k*cols2+j));
                sum += a*b;
            }
            *(resultMatrix+(i*cols2+j)) = sum;
        }
    }
    
    pisz(resultMatrix, rows1, cols2);
}
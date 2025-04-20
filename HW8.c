#include <stdio.h> 

int main(){
    int matrix1[2][2] = {{3,2},{5,10}};
    int matrix2[2][2] = {{2,4}  ,{7,7}};
    int matrix3[2][4] = {{3,2,5,9} ,{5,10,4,6}};
    printf("Matrix 1 + matrix2: \n");
    for(int i = 0; i<2;i++){
        for(int j = 0; j<2;j++){
            int sum = matrix1[i][j]+matrix2[i][j];
             printf("%d", sum);
             printf(" ");
        } 
        printf("\n");
    }
    printf("Matrix 1 * 5: \n");
    for(int i = 0; i<2;i++){
        for(int j = 0; j<2;j++){
            int product = 5*matrix1[i][j];
            printf("%d", product);
            printf(" "); 
        } 
        printf("\n");
    }
    printf("Matrix 1 * Matrix3: \n");
    int value;
        for(int i = 0; i<2;i++){
            for(int j = 0; j<4;j++){
                value = 0;
                for(int k=0;k<2;k++){
                 value += matrix1[i][k]*matrix3[k][j];
                }
                printf("%d",value);
                printf(" ");
            } 
            printf("\n");
        }
        printf("Matrix 1 transposed \n");
        for(int i = 0; i<2;i++){
            for(int j = 0; j<2;j++){
                 printf("%d",matrix1[j][i]); 
                 printf(" ");
            } 
            printf("\n");
        }

    return 0;

}
#include <iostream>
#include <vector>
using namespace std;
/*class Matrix
{
private:
    int m_numRows;
    int m_numCols;
    int array[][];
public:
 Matrix(int rows, int cols);
 int getRows(){return m_numRows;}
 int getCols(){return m_numCols;}
};*/
class MatrixMath
{
    public:
    void addition(int mat1[2][2], int mat2[2][2]){
        for(int i = 0; i<2;i++){
            for(int j = 0; j<2;j++){
                 cout << mat1[i][j]+mat2[i][j]  << " ";
            } 
            cout << endl;
        }
    }
    void addition(vector<vector<int>> v1, vector<vector<int>> v2){
        for(unsigned int i = 0; i<v1.size();i++){
            for(unsigned int j = 0; j<v1[i].size();j++){
                 cout << v1[i][j]+v2[i][j]  << " ";
            } 
            cout << endl;
        }
    }
    void scalerMultiplication(int mat1[2][2], int scaler){
        for(int i = 0; i<2;i++){
            for(int j = 0; j<2;j++){
                 cout << scaler*mat1[i][j]  << " ";
            } 
            cout << endl;
        }
    }
    void scalerMultiplication(vector<vector<int>> v1, int scaler){
        for(unsigned int i = 0; i<v1.size();i++){
            for(unsigned int j = 0; j<v1[i].size();j++){
                 cout << scaler*v1[i][j]  << " ";
            } 
            cout << endl;
        }
    }
    void MatrixMultiplication(int mat1[2][2], int mat2[2][4]){
        int value;
        for(int i = 0; i<2;i++){
            for(int j = 0; j<4;j++){
                value = 0;
                for(int k=0;k<2;k++){
                 value += mat1[i][k]*mat2[k][j];
                }
                cout << value << " ";
            } 
            cout << endl;
        }
    }
    void MatrixMultiplication(vector<vector<int>> v1, vector<vector<int>> v2){
        int value;
        for(unsigned int i = 0; i<v1.size();i++){
            for(unsigned int j = 0; j<v2[i].size();j++){
                value = 0;
                for(unsigned int k=0;k<v1[i].size();k++){
                 value += v1[i][k]*v2[k][j];
                }
                cout << value << " ";
            } 
            cout << endl;
        }
    }
    void transpose(int mat1[2][2]){
        for(int i = 0; i<2;i++){
            for(int j = 0; j<2;j++){
                 cout << mat1[j][i]  << " ";
            } 
            cout << endl;
        }
    }
    void transpose(vector<vector<int>> v1){
        for(unsigned int i = 0; i<v1.size();i++){
            for(unsigned int j = 0; j<v1[i].size();j++){
                 cout << v1[j][i]  << " ";
            } 
            cout << endl;
        }
    }

    private:
};



int main(){
vector<vector<int>> vector1 = {{3,2},{5,10}};
//int matrix[2][2] = {{3,2},{5,10}};
vector<vector<int>> vector2 = {{2,4},{7,7}};
//int matrix2[2][2] = {{3,2}  ,{5,10}};
vector<vector<int>> vector3 = {{3,2,5,9},{5,10,4,6}};
//int matrix3[2][4] = {{3,2,5,9} ,{5,10,4,6}};
MatrixMath tester;
/*tester.addition(matrix,matrix2);
tester.scalerMultiplication(matrix,5);
tester.MatrixMultiplication(matrix,matrix3);
tester.transpose(matrix);*/
cout << "matrix1 + matrix2: " << endl;
tester.addition(vector1,vector2);
cout << "matrix1 * 5: " << endl;
tester.scalerMultiplication(vector1,5);
cout << "matrix1 * matrix3: " << endl;
tester.MatrixMultiplication(vector1,vector3);
cout << "matrix1 transposed: " << endl;
tester.transpose(vector1);
return 0;
}
/*Matrix :: Matrix(int rows, int cols){
    m_numRows = rows;
    m_numCols = cols;
    int input = 0;
    array[m_numRows][m_numCols];
    for(int i=0;i<m_numRows;i++){
        for(int j=0;j<m_numCols;j++){
            cout << "enter value for row " << i + 1 << " Col " << j+1 << endl;
            cin >> input;
            array[i][j] = input;
        }
    }
}*/
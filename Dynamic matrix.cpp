#include<iostream>

using namespace std;

int main(){

    /*Initialised rows and columns of matrix 1 and 2*/

    int row1,col1,row2,col2,row3,col3;
    cout<<"Enter the number of rows and columns of matrix 1: ";
    cin>>row1>>col1;
    cout<<"Enter the number of rows and columns of matrix 2: ";
    cin>>row2>>col2;


    /*Checking condition for matrix multiplication*/

    if( col1 != row2 ){
        cout<< "Multiplication not possible ! ";
    }


    /*muliplication condition of matrix*/

    else{
        int m1[ row1 ][ col1 ];                                     /*Declared matrix 1 and input elements */
        for( int i=0; i<row1; i++ ){
            for( int j=0; j<col1; j++ ){
                cout << "Enter element a["<<i+1<<"]["<<j+1<<"]";
                cin >> m1[i][j];
            }
            cout << endl;
        }
        int m2[row2][col2];                                    /*Declared matrix 2 and input elements */
        for( int i=0; i<row2; i++){
            for( int j=0; j<col2; j++){
                cout << "Enter element b["<<i+1<<"]["<<j+1<<"]";
                cin >> m2[i][j];
            }
            cout << endl;
        }                                                    
        row3 = row1;                                             /*Declared rows and columns of matrix 3*/
        col3 = col2;
        int m3[ row3 ][ col3 ];
        for( int i=0; i<row3; i++ ) {
            for ( int j = 0; j<col3; j++ ){
                m3[i][j] = 0;                                  /*put value 0 in all places of matrix 3*/
                for ( int k = 0; k < col1; k++){               /* Multiplication logic and putting values in matrix 3 */ 
                    m3[i][j] += m1[i][k]*m2[k][j];                   
                }
            }
        }
        cout << "Resultant matrix: " << endl;                    /* Displaying resultant matrix */
        for( int i=0; i<row3; i++ ){
            for( int j=0; j<col3; j++ ){
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }            
}

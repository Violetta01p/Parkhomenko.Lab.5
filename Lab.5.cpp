#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int matrix[n][n];
    cout<<"Enter element the marix:"<<endl;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];     
        } }
    for (int i = 0; i < n; i++){
        int x=0;
        for (int j = 0; j < n; j++){
            if(matrix[i][j] !=0){
                matrix[i][x++] = matrix[i][j];
            }}
     while(x<n){
            
                matrix[i][x++] = 0;
            }}
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << " " << matrix[i][j] <<" ";
        }
       cout<<endl;
    }
    return 0;
}

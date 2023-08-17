/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
void RotateMatrix(vector<vector<int>> & matrix){
    int n =matrix.size();
    char temp;
  
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           temp=matrix[i][j];
           matrix[i][j]=matrix[j][i];
           matrix[j][i]=temp;
           
           //swap(a, b) 
        }
        
    }
    
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
        
    }

}

int main()
{
   vector<vector<int>>  input_matrix={{1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };
    /*vector<vector<int>>  input_matrix={{1, 2, 3,4},
    { 5, 6,7,8},
    {9,10,11,12},
    {13,14,15,16}
    };*/
    RotateMatrix(input_matrix);

for(const auto&row:input_matrix){
    
    for(int num : row){
       cout<< num<<" ";
    }
    cout<<endl;
}
cout<<endl;

/*int row, column, a;
    cin>>row;
    // taking input into 2D vector from user
    for(int i=0 ; i<row ; i++) {
         cin>>column;
         vector<int> p;
         for(int j=0 ; j<column ; j++) {
              cin>>a;
              p.push_back(a);
         }
         v.push_back(p);
    }
    // displaying 2D vector value
    for(auto q: v) {
        for(auto it: q) {
            cout<<it<<" ";
         } 
         cout<<endl;
     }
     RotateMatrix(v);
     for(const auto&row:v){
    for(int num : row){
       cout<< num<<" ";
    }
}
cout<<endl;*/

    return 0;
}

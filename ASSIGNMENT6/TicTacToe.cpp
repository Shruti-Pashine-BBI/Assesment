/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>


using namespace std;

string tictactoe(vector<vector<char>>& first) {
    int N = 3;

    
    for (int i = 0; i < N; i++) {
        if (first[i][0] == first[i][1] && first[i][1] == first[i][2] && first[i][0] != ' ')
            return string(1, first[i][0]);
        if (first[0][i] == first[1][i] && first[1][i] == first[2][i] && first[0][i] != ' ')
            return string(1, first[0][i]);
    }
    
    
    if (first[0][0] == first[1][1] && first[1][1] == first[2][2] && first[0][0] != ' ')
        return string(1, first[0][0]);
    if (first[0][2] == first[1][1] && first[1][1] == first[2][0] && first[0][2] != ' ')
        return string(1, first[0][2]);

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (first[i][j] == ' ')
                return "Pending";
        }
    }
    
    return "Draw";
}

int main()
{
    
    vector<vector<char>> first= {
        {'O', 'O', 'O'},
        {'X', 'X', 'X'},
        {'O', 'O', 'O'}
    };
    
    string result = tictactoe(first);
    cout << "Result: " << result << endl;
    
    /*cout<<"Input Matrix"<<"\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter Player "<<i+1<<j+1<<":";
            cin>>first[i][j];
        }
    }
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << first[i][j] << " ";
        }
        cout << endl;
    }*/

    return 0;
}

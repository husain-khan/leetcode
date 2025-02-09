#include <bits/stdc++.h>
//this code lets me to rotate the matrix to the right 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m=matrix.size();      
         for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
              if(i==j){
                break;
              }
              else{
                swap(matrix[i][j],matrix[j][i]);
              }
            }
         }

         for(int t=0;t<m;t++){
            reverse(matrix[t].begin(),matrix[t].begin()+m);
         }

    }
};

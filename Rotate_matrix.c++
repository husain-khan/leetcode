#include <bits/stdc++.h>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        // int n=martix[0].size;
      
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

         for(int k=0;k<m;k++){
            reverse(matrix[k].begin(),matrix[k].begin()+m);
         }

    }
};

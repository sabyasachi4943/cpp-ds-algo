#include<iostream>
using namespace std;

void spiralPrint(int arr[][10],int n, int m){
  //4 variables
  int startRow = 0;
  int endRow = n - 1;
  int startCol = 0;
  int endCol = m - 1;

  // Outer loop (traverse array boundary)
  while(startCol <= endCol and startRow <= endRow){

    // start row
    for (int col = startCol; col <= endCol; col ++){
      cout << arr[startRow][col]<<" ";
    }
    // end col
    for (int row = startRow + 1; row <= endRow; row++){
      cout << arr[row][endCol]<<" ";
    }
    // end row
    for (int col = endCol - 1; col >= startCol; col--){
      if(startRow==endRow){
        break;
      }
      cout << arr[endRow][col]<<" ";
    }
    // start row
    for (int row = endRow - 1; row >= startRow + 1; row--){
      // avoid duplicating printing of elements
      if(startCol==endCol){
        break;
      }
      cout << arr[row][startCol]<<" ";
    }

    // update the variables
    startRow++;
    endRow--;
    startCol++;
    endCol--;

  }

}




int main(){
  int arr[][10] = {{1, 2, 3, 4},
                  {12,13,14,5},
                  {11,16,15,6},
                  {10,9,8,7,} };

  int n = 4, m = 4;

  spiralPrint(arr, n, m);
  return 0;
}
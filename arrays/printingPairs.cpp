#include<iostream>
using namespace std;

// Problem : print all pairs of elements
void printAllPairs(int arr[], int n){
  // print all the elements (2 nested loops)
  for (int i = 0; i < n;i++){
    int x = arr[i];

    for (int j = i + 1; j < n; j++){
      int y = arr[j];

      cout << x << "," << y << endl;
    }
    cout << endl;
  }
}

int main(){
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(int);

  // output
  printAllPairs(arr, n);

  return 0;
   
}
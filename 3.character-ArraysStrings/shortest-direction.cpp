// https://practice.geeksforgeeks.org/problems/shortest-direction4201/1#
/* SSSNEEEW
Final x and y is 2,-2.EESS
*/


#include<iostream>
using namespace std;

int main(){
  char route[1000];
  cin.getline(route, 1000);

  int x = 0;
  int y = 0;

  for (int i = 0; route[i] != '\0'; i++){
    switch(route[i]){
      case 'N':
        y++;
        break;
      case 'S':
        y--;
        break;
      case 'E':
        x++;
        break;
      case 'W':
        x--;
        break;
    }
  }

  cout << "Final x and y is " << x << "," << y << ".";

  if(x>=0 and y>=0){
           while(x--){
               cout<<"E";
           }
           while(y--){
               cout<<"N";
           }
  }else if(x<=0 and y>=0){
           while(y--){
               cout<<"N";
           }
           while(x++){
               cout<<"W";
           }
  }else if(x<=0 and y<=0){
           while(y++){
               cout<<"S";
           }
           while(x++){
               cout<<"W";
           }
  }else{
           while(x--){
               cout<<"E";
           }
           while(y++){
               cout<<"S";
           }
  }
}
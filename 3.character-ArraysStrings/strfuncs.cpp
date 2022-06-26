#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char a[1000] = "apple";
  char b[1000];

  // calc length
  cout << strlen(a) << endl;
  // strcpy
  strcpy(b, a);
  cout << b << endl;

  // Compare
  cout << strcmp(a, b) << endl;
  
  // strcmp
  char web[20] = "www.";
  char domain[20] = "exam.com";

  strcat(web, domain);

  strcpy(b,web);

  cout << b << endl;

  int result = strcmp(web, domain);

  cout << result << endl;

  return 0; 
}
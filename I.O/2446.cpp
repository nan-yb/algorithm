#include <iostream>

using namespace std;

int main()
{
  int n =  0;
  cin >> n ;

  for(int i= n; i > 0; i--){
    for (int j = n; j > i; j--) cout << " ";
    for (int j = 1; j <= (i*2-1); j++) cout << "*";
    cout   <<endl;
  }

  for(int i = 2 ; i <= n; i++){
    for (int j = n; j > i; j--) cout << " ";
    for (int j = 1; j <= (i*2-1); j++) cout << "*";
    cout   <<endl;
  }

  return 0;
}

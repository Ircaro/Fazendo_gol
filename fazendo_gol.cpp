#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  char z, g, d, c;
  cin >> z >> g >> d >> c;

  if (z != d) {
    cout << "Bloqueado" << endl;
  } else if (z == d) {
    cout << "Driblado" << endl;
    if (g != c) {
      cout <<  "...e o goleiro pega" << endl;
    } else {
      cout << "Gol" << endl;
    }
  } 

}

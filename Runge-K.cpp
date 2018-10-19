#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


 float Euler(float x)
 {
   float y;
   y = -2*(pow(x,3)) + 12*(pow(x,2)) -20*(x) + 8.5;
   return y;
}

float Verdadero(float x)
{
  float y;
  y = -0.5*(pow(x,4)) + 4*(pow(x,3)) - 10*(pow(x,2)) + 8.5*(x) + 1;
  return y;
}

void line()
{
  for(int i=1;i<41;i++)
  cout<<"--";
  cout<<"\n";
}


int main()
{
  float y=1, i, h; //Condicion inicial, en x=0, y=1

  cout<< "Ingresa el tamano de paso: "<<endl;
  cin >> h;

  cout << "Los valores de Euler son:" << endl;
  cout << y << endl;
  for(i=0.5; i<=4; i=i+h) //Desde x=0, hasta x=4
  {
    y = y + Euler(i-h)*h;
    cout << y << endl;
  }

  cout << "Los valores verdaderos son:" << endl;
  for(i=0; i<=4; i=i+h)
  {
    cout << Verdadero(i) << endl;
    //cout << y << endl;
  }

  cout <<setw(50)<<"Tabulacion de valores de x, y-Verdadera,,y-Euler,:\n";
  line();
  cout<<setw(15)<<"Valores de X"<<setw(15)<<"Y-Verdadero"<<setw(15)<<"Y-Euler\n";
  line();


y=1;

  for(i=0; i<h; i=i+h)
{
  cout<< setw(15) << i << setw(15) << Verdadero(i) << setw(15) << y << endl;
}

for (i=0.5; i<=4; i=i+h)
{
  y = y + Euler(i-h)*h;
  cout<< setw(15) << i << setw(15) << Verdadero(i) << setw(15) << y << endl;
}


   return 0;
}

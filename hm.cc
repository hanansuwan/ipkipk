#include <iostream>
#include <cmath>
using namespace std;
void test_root(double q, int n, int steps) ;
double root_iterative(double q, int n, int steps);
int main()
{
    double b= root_iterative (15.0,2,11);
    cout << "die wurzel ist : "<<b <<endl;
    test_root (15.0,2,11);
    return 0 ;

}


double root_iterative(double q, int n, int steps){
double a=1 ;
for (int i =0 ; i<steps ; i++){

 a = a+((double)1/(double)n)*( (double)q/(pow(a, (double)n-1))-a);

}

 return a ;
 }



 void test_root(double q, int n, int steps) {
  double a=1 ;
for (int i =0 ; i<steps ; i++){

 a = a+((double)1/(double)n)*( (double)q/(pow(a, (double)n-1))-a);

}

double dif = pow((double)a, n) ;
double unter = q ;
int res = unter - dif ;// der unterschied muss 0 sein -- 0 ist int
// ich habe mit double aber nicht geklappt ?!
  cout << " q  "<<   q   << endl ;
  cout << " n  "<<   n   << endl ;
  cout << " a  "<<   a   << endl ;

  cout << " pow(a, n) "<< pow((double)a, n)     << endl ;
  cout << "der Unterschied ist : "<<res;



}

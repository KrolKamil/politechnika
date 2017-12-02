#pragma argsused
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 float a,b,c;
 long double delta,x1,x2,x12,ImX,ReX;
 cout << "\t\t\tObliczam Rownanie kwadratowe\n" << endl;
 cout << "\t\tO postaci" << "\t\tax^2 + bx + c" << endl;
 cout << "\n\tPodaj a: a= ";
 cin >> a;
 cout << "\n\tPodaj b: b= ";
 cin >> b;
 cout << "\n\tPodaj c: c= ";
 cin >> c;
 cout << "\n\n";
 if(a!=0)
  {
   delta=(b*b) - (4*a*c);

   if(delta>0)
   {
    cout << "\tDelta wynosi\t" << delta << endl;
    cout << "\tPierwiastek z delty= " << sqrt(delta) << endl;
    cout << "\tRownanie ma 2 pierwiastki rzeczywiste\n" << endl;
    x1=(-b - sqrt(delta))/(2*a);
    x2=(-b + sqrt(delta))/(2*a);
    cout << "\tPodaje rozwianie\n\n\tx1= " << x1 << endl;
    cout << "\tOraz\n\tx2= " << x2 << endl << endl;
   }
   else
   {
    if(delta==0)
    {
     cout << "\tDelta wynosi\t" << delta << endl;
     cout << "\tPierwiastek z delty= " << sqrt(delta) << endl;
     cout << "\tRownanie ma jeden, podwojny pierwiastek\n" << endl;
     x12=-b/(2*a);
     cout << "\tPodaje rozwiazanie\n\tx12= " << x12 << endl << endl;
    }
    else
    {
     cout << "\tDelta wynosi\t" << delta << endl;
     cout << "\tPierwiastek z delty= " << "-1*" << sqrt(fabs(delta)) << endl;
     cout << "\tRownanie nie ma pierwiastkow\n\tw dziedzinie liczb rzeczywistych\n";
     cout << "\tObliczam pierwiastki zespolone!!\n";
     ReX=-b/(2*a);
     ImX=sqrt(fabs(delta))/(2*a);
     cout << "\tPodaje rozwiazanie:" << endl;


										     cout << "\tx1 = " <<  ReX << " + " << ImX << "i" << endl;
     cout << "\n\tOraz\n\n\tx2 = " << ReX << " - " << ImX << "i" << endl << endl;
     }
    }
   }
 else
  {
   if(a==0)
   {
    if(b==0)
    {
     if(c==0)
     {
      cout << "\tRownanie ma postac:\n\tc=0" << endl;
      cout << "\tPodaje wartosc c:\n";
      cout << "\tc= " << c << "\n\tTo jest sprzecznosc\n\n";
     }
     else
     (
      cout << "\tRownanie ma postac:" << "\t" << c << " = 0" << endl);
      cout << "\tTo jest torzsamosc" << endl;
     }
    }
    else
    {
     cout << "b*x + c =0" << endl;
     delta=(b*b)-(4*c);
     x1=-b-sqrt(fabs(delta));
     x2=-b+sqrt(fabs(delta));
     cout << "\tPodaje rozwiazanie\n" << "\t" << delta << endl;
     cout << "\tx1= " << x1 << "\n\tx2= " << x2 << endl << endl;
     }
   }
 return 0;
}

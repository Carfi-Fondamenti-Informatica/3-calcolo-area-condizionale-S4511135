/*
Nome : Giulio 
Cognome : Anyanwu 
Matricola : S4511135
Esercizio : Si scriva un programma per calcolare l’area di triangolo, quadrato e rettangolo a seconda dell’opzione selezionata. Il programma prende in ingresso i valori nel seguente ordine a, b e opzione. a e b sono numeri reali mentre opzione è un numero intero.
*/

#include <iostream>

using namespace std;

int main ()
{
   float a, b, area;
   int opzione;
   
   cout << "inserire a" << endl;
   cin >> a;
   cout << "inserire b" << endl;
   cin >> b;
   cout << "inserire opzione 0, 1, 2" << endl;
   cin >> opzione ;
   
   switch (opzione)
   {
      case 0:
         area = ((a*b)/2);
         cout << area << endl;
         break;
      case 1:
         area = (a*a);
         cout << area << endl;
         break;
      case 2:
         area = (a*b);
         cout << area << endl;
         break;
      default:
         cout << "opzione non valida" << endl;

   }
   return 0;
}

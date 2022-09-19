#include <iostream>
#include <cmath>
using namespace std;

/*int main() {

  cout<<"Ievadi skaitli no 10-20 (ieskaitot)"<<endl;

  int x;
  cin>>x;

  if (x<10){  cout<<"Error"<<endl;}
  else if (x>20){cout<<"Error"<<endl;}
  else if (x>10 && x<20){cout<<"Paldies"<<endl;}
  return 0;


}*/



int main(){

   int x;
   int y;
   int c;

   cout<<"Ievadi kateti"<<endl;
   cin>>x;
   cout<<"Ievadi kateti"<<endl;
   cin>>y;
   cout<<"Ievadi hipotenuzu"<<endl;
   cin>>c;

   /*if (x<c && y<c){cout<<"Eksiste"<<endl;}
   else if (x>c && y>c){cout<<"NEeksiste"<<endl;}
   else if (x="-" || y="-"){cout<<"Tu daunis?"<<endl;}*/

  if (x+y<c){cout<<"Eksiste"<<endl;}
   else if (x+y>c){cout<<"NEeksiste"<<endl;}
   /*else if ( ){cout<<"Tu daunis?"<<endl;}*/



   return 0;






}

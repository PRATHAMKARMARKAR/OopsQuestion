/*Write a class definition for an order class for a nightclub that contains a table number, a
server’s name, and the number of patrons at the table. Include a private static data member for
the table minimum charge, which is $4.75. Write a main() function that declares no object of
order class type, but uses a static member function to display the table minimum charge.*/
#include<bits/stdc++.h>
using namespace std;
class nightclub{
     int numberofpatron;
     int tablenumber;
     string servername;
     static double minimumcharge;
     public:
     void diplayminiumcharge(){
        cout<<"minimumcharge is -->"<<minimumcharge<<endl;
     }
 };
double nightclub :: minimumcharge = 4.75;
int main (){
    nightclub n;
    n.diplayminiumcharge();
    return 0;
}
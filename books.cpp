#include <iostream>
#include <string>
int main ()
{
   std :: string name;
   std ::     cout << "Enter your name:\n";
   getline (std :: cin,name);
   int age;
   std :: cout << "Enter your Age:\n";
   std :: cin >> age;
   if (! std :: cin >>age)
    {
      std ::  cout <<"Error! Enter numbers only! \n";
      return 1;
    }   
   double reamining =15532;
   int books =5;
   double price = 4555.99;
   std :: cout <<"Enter your desired quantity:\n";
   int wanted;
   std :: cin >> wanted;
   int total = price * wanted;
   if (wanted == 5)
   {
       std :: cout <<"The t0tal price is " << total <<" Do you want to procced!\n";
   }
   else if ( wanted == 4)
   {
        std :: cout <<"The price is " <<total << std :: endl;
   }
   else if (wanted == 3) 
   {
       std :: cout << "The price is " << total << std :: endl;
   }
   else if (wanted == 2) 
   {
      std :: cout <<"The price is "<< total << std :: endl; 
   }
   else if (wanted == 1)
   {
      std :: cout <<"The price is " << total << std :: endl; 
   }
   else 
   {
       std :: cout <<"The reamining quanitty = 5!" << std :: endl;
   }
   std :: cout <<"Your Remaining Cash is " << reamining << " Please Spend carefully!\n";
   return 0;
}

#include <iostream>
#include <string>
int main ()
{
   std :: string name;
   std ::     cout << "Enter your name:\n";
   getline (std :: cin,name);
   int age;
   std :: cout << "Enter your Age:\n";
   if (! (std :: cin >>age))
    {
      std ::  cout <<"Error! Enter numbers only! \n";
      return 1;
    }   
   double remaining =15532;
   double price = 4555.99;
   std :: cout <<"Enter your desired quantity:\n";
   int wanted;
   std :: cin >> wanted;
   double total = price * wanted;
   if (wanted == 5)
   {
       std :: cout <<"The total price is " << total <<" Do you want to continue!\n";
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
       std :: cout <<"The reamining quantity = 5!" << std :: endl;
   }
   std :: cout <<"Your Remaining Cash is " << reamining << " Please Spend carefully!\n";
   return 0;
}

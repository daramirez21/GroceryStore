//Author: David Ramirez
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5];  //array of 5 strings
  int numItems = 0;
  char input;
  string item;

  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  cin.ignore();
  
  if (input == 'a' || input == 'A')
  {
    cout<< "What is the item?\n";
    cin>>item;
    cin.clear();
    cin.ignore();
 
   if (numItems<5)
    {
     list[numItems] = item;
     numItems++;
    }

  else
   { 
     cout<< "You'll need a bigger list!\n";
   }
  }
  } while (input != 'q' && input != 'Q');

  if( input == 'Q' || input == 'q')
  {
  cout<< "==ITEMS TO BUY==\n";
  for( int i = 0; i < 5; i++)
   {
   cout<< i+1 << " " << list[i]  << endl;

   }
  }
  return 0;
}

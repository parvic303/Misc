#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Compiled with g++ iTriage.cpp -o test
// Run with ./test

void demoStack()
{
   cout << "Stack demo:" << endl << endl;
   stack <string> phrase;

   phrase.push(" dogs.");
   phrase.push(" lazy");
   phrase.push(" the");
   phrase.push(" over");
   phrase.push(" jumped");
   phrase.push(" fox");
   phrase.push(" brown");
   phrase.push(" quick");
   phrase.push("The");

   cout << "There are " << phrase.size() << " elements in the stack." << endl;

   while (!phrase.empty())
   {
      cout << phrase.top();
      phrase.pop();
   }
   cout << endl << endl;

   return;
}

string reverseArray(string &inputString)
{
   string reversedString = "";

   if (inputString.length() > 0)
   {
      for(int i=inputString.length()-1; i >= 0; i--)
      {
         reversedString += inputString[i];
      }
   }

   return reversedString;
}

void printEvenNumbers(int lowerBound, int upperBound)
{
   if (upperBound > lowerBound )
   {
      cout << "\nEven numbers between " << lowerBound << " and " << upperBound  << ":" << endl << endl;

      for(int i=lowerBound; i <= upperBound; i++)
      {
         if ( i % 2 == 0 )
         cout << " " << i << ",";
      }
      cout << endl;
   }

   return;
}

int main(int argc, char* argv[])
{
   demoStack();

   string inputString = "abcdefghiljkmnopqrstuvwxyz";
   cout << "Reverse array demo:" << endl << endl;
   cout << "The original sring is " << inputString << endl;
   cout << "The reversed sring is " << reverseArray( inputString ) << endl;

   printEvenNumbers( 0, 100 );

   return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream file2{"abc.txt"};

	if(file2)
	{
 
	 file2 <<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

 	  cout<<endl<<endl;
	}
 		else 
		{
		  cout<< "error could not read or create file abc.txt ";
		}

file2.close();

return 0;
}

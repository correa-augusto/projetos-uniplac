#include <iostream>
using namespace std;
int main()
{
  cout << "Números pares entre 55 e 189:" << endl;
  
  for(int i = 55; i <= 189; i++ )
  {
  	if(i % 2 == 0)
	  {
	  	cout << i << " ";
	  }
  }
}

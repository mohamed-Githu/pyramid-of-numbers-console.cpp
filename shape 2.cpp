#include <iostream>
using namespace std ; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int rows ; 
	
	cout << "Rows = " ;
	cin >> rows ;
	
	for ( int x = 1 ; x <= rows ; x ++ )
	{
		for ( int y = 0 ; y < rows - x ; y ++ )
		{
			cout << " " ;
		}
		for ( int z = 1 ; z < x ; z ++ )
		{
			cout << z ;
		}
		for ( int a = x ; a >= 1 ; a -- )
		{
			cout << a ;
		}
		cout << endl ;
	}
	
	
	
	return 0;
}

#include <iostream>
#include <iomanip>
#include <array>
#include <stdexcept>
using namespace std; 
void outputarray( const array< int ,11> & );
void inputarray( array< int ,11> & ); 

int main()
{ 
array< int ,11> integersl; 
array< int ,11> integers2;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display size & content of the initialized arrays
cout << "Size of array integers1 is " << integersl.size() <<"\narray after initialization:" << endl;
outputarray( integersl );
cout << "\nSize of array integers2 is " << integers2.size() << "\narray after initialization:" << endl;
outputarray( integers2 ); 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////take in the new user values to populate the arrays
cout << "\nEnter 17 integers:" << endl;
inputarray( integersl );
inputarray( integers2 ); 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display the content of the arrays after user input
cout << "\nAfter input, the arrays contain:\n" << "integersl:" << endl;
outputarray( integersl );
cout << "integers2:" << endl;
outputarray( integers2 ); 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////array contetnt is not the same
cout << "\nEvaluating: integers1 != integers2" << endl; 



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display to user that the arrays are not of the same content
if ( integersl != integers2 ) 
    cout << "integers1 and integers2 are not equal" << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////introduce a third array and display its size and content
array< int ,11> integers3( integersl ); 
cout << "\nSize of array integers3 is " << integers3.size() << "\narray after initialization:" << endl; 
outputarray( integers3 ); 


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////Assign integer 2 to integer 1
cout << "\nAssigning integers2 to integersl:" << endl;
integersl = integers2;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display the content of first 2 arrays again to prove they are equal
cout << "integersl:" << endl;
outputarray( integersl ); 
cout << "integers2:" << endl;
outputarray( integers2 ); 


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display that the 2 arrays being evaluated for equality
cout << "\nEvaluating: integers1 == integers2" << endl; 




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display the content of the arrays are equal
if ( integersl == integers2 )
 cout << "integers' and integers2 are equal" << endl; 



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////assign it a new value and isplay the content of element 5 in the first array
cout <<"\nintegers1[5] is "<< integersl[5];
cout << "\n\nAssigning 1000 to integers1[5]" <<endl;
integersl[5]=1000;
cout << "integersl:" << endl;
outputarray( integersl );


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////attempt an out of bound assignment and catching thir error
try 
{   cout << "\nAttempt to display intergers1.at(15)" << endl;
    cout << integersl.at(15 ) << endl;
}
 catch ( out_of_range &ex )
{ 
    cerr << "An exception occurred: " << ex.what() << endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display the size of the third array
cout << "\nCurrent integers3 size is: "<< integers3.size() <<endl;




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////use the push back to expand the size and add a new value to the thrid array
integers3.fill( 1000 ); 
cout << "New integers3 size is: " << integers3.size() <<endl;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////display the new content of the third array
cout << "integers3 now contains: "; 
outputarray( integers3 );

}


 void outputarray( const array< int ,11> &array ) 
    { 
        for ( int item : array )
            cout << item << " ";
        
        cout << endl;
    } 
 void inputarray( array< int,11 > &array )
    { 
        for ( int &item : array ) 
        cin >> item;
    } 


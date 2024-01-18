// Fig. 10.11: DoubleSubscriptedArray.cpp
// DoubleSubscriptedArray class member- and friend-function definitions. #include <iostream>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h" // DoubleSubscriptedArray class definition
using namespace std;







                                                                    /*Constructors*/
// default constructor for class DoubleSubscriptedArray (default size 10) 
DoubleSubscriptedArray::DoubleSubscriptedArray( int DoubleSubscriptedArraySizeCol,int DoubleSubscriptedArraySizeRow)
    : Col(DoubleSubscriptedArraySizeCol),Row(DoubleSubscriptedArraySizeRow),size( (DoubleSubscriptedArraySizeCol*DoubleSubscriptedArraySizeRow) > 0 ? (DoubleSubscriptedArraySizeCol*DoubleSubscriptedArraySizeRow) :throw invalid_argument("Array size must be greater than 0") ), ptr( new int[ size ] )
{  
    for ( size_t i = 0; i < size; ++i)
    {    
        ptr[ i ] = 0; // set pointer-based DoubleSubscriptedArray element
    }
} // end DoubleSubscriptedArray default constructor


// copy constructor for class DoubleSubscriptedArray;
// must receive a reference to an DoubleSubscriptedArray 
DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &DoubleSubscriptedArrayToCopy) 
    : size( DoubleSubscriptedArrayToCopy.size),ptr( new int[ size ] )
{
    for ( size_t i = 0; i < size; ++i)
        ptr[ i ] = DoubleSubscriptedArrayToCopy.ptr[ i ]; // copy into object
} // end DoubleSubscriptedArray copy constructor
                                                                /*Constructors*/









                                                                /*Destructors*/
// destructor for class DoubleSubscriptedArray
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}
                                                                /*Destructors*/









// return number of elements of DoubleSubscriptedArray
size_t DoubleSubscriptedArray::getSize() const
{
    return size; // number of elements in DoubleSubscriptedArray
} // end function getSize


int DoubleSubscriptedArray::getCOl()const
{
    return Col;
}

// overloaded assignment operator;
// const return avoids: ( a1 = a2 ) = a3
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator= ( const DoubleSubscriptedArray &right)
{
    if (&right != this) // avoid self-assignment
    {
    // for DoubleSubscriptedArrays of different sizes, deallocate original // left-side DoubleSubscriptedArray, then allocate new left-side DoubleSubscriptedArray 
        if (size != right.size)
        {
            delete [] ptr; // release space
            size = right.size; // resize this object
            ptr = new int[ size ]; // create space for DoubleSubscriptedArray copy
        } // end inner if
        for ( size_t i = 0; i < size; ++i)
            ptr[ i ] = right.ptr[ i ]; // copy DoubleSubscriptedArray into object 
    } //end outer if
    Col=right.Col;
    Row=right.Row;
    return *this; // enables x = y = z, for example and return a pointer to the object on the left of the = operator
} // end function operator=


// determine if two DoubleSubscriptedArrays are equal and
// return true, otherwise return false
bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if ( size != right.size )
        return false; // DoubleSubscriptedArrays of different number of elements
    for (size_t i = 0; i < size; ++i)
    {
        if ( ptr[ i ] != right.ptr[i])
        return false; // DoubleSubscriptedArray contents are not equal
    }
    return true; // DoubleSubscriptedArrays are equal
} // end function operator==


// overloaded subscript operator for non-const DoubleSubscriptedArrays; // reference return creates a modifiable lvalue
int &DoubleSubscriptedArray::operator () ( int subscriptCol,int subscriptRow )//using [] only allowed 1 argurment therefore 1D array only
{
    // check for subscript out-of-range error
    if ((subscriptCol < 0 || subscriptCol >= Col) || (subscriptRow < 0 || subscriptRow >= Row ))
        throw out_of_range( "Subscript out of range" );
    if(subscriptRow==0)
    {
        return ptr[((Row*subscriptCol)-1)];
    }
    if(subscriptCol==0)
    {
        return ptr[((Col*subscriptRow))];
    }
    
    return ptr[ subscriptCol*subscriptRow ]; // return reference 
} // end function operator[]



// overloaded subscript operator for const DoubleSubscriptedArrays const reference return creates an rvalue 
int DoubleSubscriptedArray::operator () (int subscriptCol,int subscriptRow ) const
{
    // check for subscript out-of-range error
    if ((subscriptCol < 0 || subscriptCol >= Col) || (subscriptRow < 0 || subscriptRow >= Row ))
        throw out_of_range( "Subscript out of range" );
    if(subscriptRow==0)
    {
        return ptr[((Row*subscriptCol)-1)];
    }
    if(subscriptCol==0)
    {
        return ptr[((Col*subscriptRow))];
    }
    return ptr[ subscriptCol*subscriptRow ]; // returns copy of this element 
} // end function operator[]








// overloaded input operator for class DoubleSubscriptedArray;
// inputs values for entire DoubleSubscriptedArray
istream &operator>>(istream &input, DoubleSubscriptedArray &a)
{
    for (size_t i = 0; i < a.size; ++i) 
    {
        input>> a.ptr[ i ];
    }
    return input; // enables cin >> > >> y;
} // end function



// overloaded output operator for class DoubleSubscriptedArray
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a)
{
    // output private ptr-based DoubleSubscriptedArray
    for ( size_t i = 0; i < a.size; ++i)
    {
        output << setw( 20 ) << a.ptr[ i ];
        if ((i + 1) %a.getCOl() == 0) // 4 numbers per row of output 
            output << endl;
    } // end for
    if (a.size % a.getCOl() != 0) // end last line of output 
        output << endl;
    return output; // enables cout << x << y;
} // end function operator<<
// Fig. 10.18: Hugeint.cpp
// Hugeint member-function and friend-function definitions.
#include <cctype> // isdigit function prototype
#include "Hugeint.h" // Hugeint class definition
using namespace std;
// a long integer into a Huge Int object
// default constructor; conversion constructor that converts


Hugeint::Hugeint( long value )
{
    // initialize array to zero
    for ( short &element :integer )
        element = 0;
        // place digits of argument into array
    for ( size_t j = digits - 1; value != 0 && j >= 0; j--)
    {
        // end Hugeint conversion constructor
        integer[j] = value % 10;
        value /= 10;
    } // end for
} // end Hugeint default/conversion constructor



// conversion constructor that converts a character string
// representing a large integer into a Huge Int object
Hugeint::Hugeint( const string &number )
{
    // initialize array to zero
    for ( short &element :integer )
    element = 0;

    // place digits of argument into array
    size_t length = number.size();
    for ( size_t j = digits - length, k = 0; j < digits; ++j, ++k)
        if ( isdigit( number[ k])) // ensure that character is a digit
            integer[j] = number[k ] - '0';
}
    
// addition operator; Hugeint + Hugeint
Hugeint Hugeint::operator+(const Hugeint &op2 ) const
{

    Hugeint temp; // temporary result
    int carry = 0;
    for (int i = digits - 1; i >= 0; i--)
    {
        temp.integer[i] = integer[i] + op2. integer[i] + carry;
        //determine wether to carry a 1 
        if(temp.integer[i]>9)
        {
            temp.integer[i]%=10;
            carry=1;
        }
        else
            carry=0;
    }
    return temp;
}
Hugeint Hugeint::operator+( int op2)const        //addition of Hugeint 
{
    //convert op2 from int to hugeint 
    //then invoke the + operator for huge int
    return *this + Hugeint(op2);
}
Hugeint Hugeint::operator+(const string &op2)const  //addition of Hugeint + string
{
    //convert op2 from int to hugeint 
    //then invoke the + operator for huge int
    return *this + Hugeint(op2);
}

ostream& operator<<(ostream &output,const Hugeint &num)
{
    int i;
    for(i=0;(i<Hugeint::digits) && (0==num.integer[i]);++i)
        ;
    if(i==Hugeint::digits)
        output <<0;
    else
        for(;i<Hugeint::digits;++i)
            output<<num.integer[i];
    return output;
}






   
// addition operator; Hugeint + Hugeint
Hugeint Hugeint::operator*(const Hugeint &op2 ) const
{
    Hugeint temp; // temporary result
    int carry = 0;
    int o=0;
    int k=digits-1;
    for (int i = digits-1; i >= 0; i--)
    {
        for(int j=op2.digits-1;j>=0;j--)
        {
            temp.integer[k] = ((integer[j] * op2. integer[i] )+ carry)+temp.integer[k];
            //determine wether to carry a 1 
            if(temp.integer[k]>9)
            {
                carry=temp.integer[k]/10;
                temp.integer[k]%=10;
            }
            else
                carry=0;
            if(k>0)
            {
                k--;
            }
        }
        o++;
        k=(digits-1)-o;
        //k=(digits-1);
    }
    return temp;
}
Hugeint Hugeint::operator*( int op2)const        //addition of Hugeint 
{
    //convert op2 from int to hugeint 
    //then invoke the + operator for huge int
    return ((*this) * (Hugeint(op2)));
}
Hugeint Hugeint::operator*(const string &op2)const  //addition of Hugeint + string
{
    //convert op2 from int to hugeint 
    //then invoke the + operator for huge int
    return ((*this) * (Hugeint(op2)));
}










bool Hugeint::operator==(const Hugeint &op2 ) const
{

    for (int i = digits-1; i >= 0; i--)
    {
        if(integer[i]!=op2.integer[i])
        {
            return false;
        }
    }
    return true;
}
bool Hugeint::operator==( int op2)const  
{
    //convert op2 from int to hugeint 
    //then invoke the == operator for huge int
    return ((*this) == (Hugeint(op2)));
}
bool Hugeint::operator==(const string &op2)const  
{
    //convert op2 from int to hugeint 
    //then invoke the == operator for huge int
    return ((*this) == (Hugeint(op2)));
}











bool Hugeint::operator!=(const Hugeint &op2 ) const
{

    for (int i = digits-1; i >= 0; i--)
    {
        if(integer[i]==op2.integer[i])
        {
            return false;
        }
    }
    return true;
}
bool Hugeint::operator!=( int op2)const    
{
    //convert op2 from int to hugeint 
    //then invoke the != operator for huge int
    return ((*this) != (Hugeint(op2)));
}
bool Hugeint::operator!=(const string &op2)const 
{
    //convert op2 from int to hugeint 
    //then invoke the != operator for huge int
    return ((*this) != (Hugeint(op2)));
}







bool Hugeint::operator<(const Hugeint &op2 ) const
{

    for (int i = digits-1; i >= 0; i--)
    {
        if(integer[i]<op2.integer[i])
        {
            return true;
        }
    }
    return false;
}
bool Hugeint::operator<( int op2)const       
{
    //convert op2 from int to hugeint 
    //then invoke the < operator for huge int
    return ((*this) < (Hugeint(op2)));
}
bool Hugeint::operator<(const string &op2)const 
{
    //convert op2 from int to hugeint 
    //then invoke the < operator for huge int
    return ((*this) < (Hugeint(op2)));
}





bool Hugeint::operator>(const Hugeint &op2 ) const
{

    for (int i = digits-1; i >= 0; i--)
    {
        if(integer[i]>op2.integer[i])
        {
            return true;
        }
    }
    return false;
}
bool Hugeint::operator>( int op2)const       
{
    //convert op2 from int to hugeint 
    //then invoke the > operator for huge int
    return ((*this) > (Hugeint(op2)));
}
bool Hugeint::operator>(const string &op2)const 
{
    //convert op2 from int to hugeint 
    //then invoke the > operator for huge int
    return ((*this) > (Hugeint(op2)));
}
#ifndef DoubleSubscriptedArray_H
#define DoubleSubscriptedArray_H

    class DoubleSubscriptedArray
    {
        friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
        friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );
        public:
                explicit DoubleSubscriptedArray(int = 10,int =10);
                DoubleSubscriptedArray(const DoubleSubscriptedArray &);

                ~DoubleSubscriptedArray();

                int getCOl()const;

                size_t getSize() const; // return size
                const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray & ); // assignment operator
                bool operator==( const DoubleSubscriptedArray & ) const; // equality operator
                bool operator!=( const DoubleSubscriptedArray &right ) const
                {
                return ! ( *this == right ); // invokes DoubleSubscriptedArray::operator==
                }
                // subscript operator for non-const objects returns modifiable lvalue
                int &operator () (int,int);
                // subscript operator for const objects returns rvalue
                int  operator () (int,int) const;

        private:
                size_t size; // pointer-based DoubleSubscriptedArray size
                int *ptr; // pointer to first element of pointer-based DoubleSubscriptedArray
                size_t Col;
                size_t Row;
    };
#endif
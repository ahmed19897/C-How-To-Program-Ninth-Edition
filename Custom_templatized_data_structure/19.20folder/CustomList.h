#ifndef CUSTOMLIST_H
#define CUSTOMLIST_H

    #include <list>
    #include <iterator>

    using namespace std;
    template <typename t>class CustomList
    {
        public:
            void printlistBackward(typename list<t>::const_iterator endargument) const
            {
                //because the end memeber function returns the element AFTER the last one
                //we need to do end-- before we print
                typename list<t>::const_iterator end=endargument;
                if(end!=this->llist.cbegin())
                {
                    end--;
                    cout<<*end<<endl;
                    printlistBackward(end);
                }
                return;
            }
            list <t> llist;

    };

#endif
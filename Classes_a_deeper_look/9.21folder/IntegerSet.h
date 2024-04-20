#include <vector>

using namespace std;

#ifndef INTEGERSET_H
#define INTEGERSET_H
    class IntegerSet
    {
        public:
            IntegerSet();
            IntegerSet(bool *,int);
            ~IntegerSet();
            void DisplaySet()const;
            void unionOfSets(const vector<bool>&,const vector<bool>&);
            void intersectionOfSets(const vector<bool>&,const vector<bool>&);
            void SetIntegerSet();
            void ResetIntegerSet();
            void getSet(vector<bool>&);
            void SetElement(int);
            bool isEqualSet(const vector<bool>&,const vector<bool>);
            void DeleteElement(int);
        private:
           vector <bool> myArray; 
        
    };
#endif
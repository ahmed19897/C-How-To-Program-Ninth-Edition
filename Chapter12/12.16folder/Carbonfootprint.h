#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H
    class Carbonfootprint
    {
    private:
        int MaterialUsedInConstruction;
    public:
        Carbonfootprint(int=0);
        virtual ~Carbonfootprint();

        virtual void Calculatecarbonfootprint(void)const=0;

        void SetMaterialUsedInConstruction(int) ;
        int GetMaterialUsedInConstruction(void)const ;
    };
#endif
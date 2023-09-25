#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
    public:
        //1 is x and 2 is y coordinates bl is buttom left .....etc
        Rectangle(float tl1=2.0,float tl2=2.0,float tr1=3.0,float tr2=2.0,float bl1=2.0,float bl2=1.0,float br1=3.0,float br2=1.0);
        ~Rectangle();
        float Calculate_Parameter();
        float Calculate_Area();
        bool IsSquare()const;
        void SetFillCharacter();
        void SetParameterCharacter();
        void Draw();

        void Set_Dimension(float,float,float,float,float,float,float,float);
        void Set_Lenght(float,float);
        void Set_Width(float,float);

        float Get_Lenght(void) const ;
        float Get_Width(void) const ;



    private:
        float tl1;
        float tl2;
        float tr1;
        float tr2;

        float bl1;
        float bl2;
        float br1;
        float br2;

        float Lenght1;
        float Lenght2;
        float Width1;
        float Width2;

        char FillCharacter;
        char FillParameter;



};
#endif
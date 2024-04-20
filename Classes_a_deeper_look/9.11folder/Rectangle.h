


#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
    public:
        Rectangle(float =1.0,float =1.0);
        ~Rectangle();
        float Calculate_Parameter(float ,float);
        float Calculate_Area(float ,float);

        void Set_Lenght(float);
        void Set_Width(float);

        float Get_Lenght(void);
        float Get_Width(void);



    private:
        float lenght;
        float width;
};
#endif
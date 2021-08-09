#ifndef TRIANGLE_H_DEFINED
#define TRIANGLE_H_DEFINED

class Triangle{
    private: 
        double a;
        double b;
        double c;
    public: 
        Triangle (double a,double b, double c);
        double lado1() const;
        double lado2() const;
        double lado3() const;
};

#endif
#include<iostream>
using namespace std;
class test
{
    private:
        int side;
    public:
        test(int s)
        {
            side=s;
        }
        test()
        {
            side=10;
        }
        void show()
        {
            cout<<"side is "<< side<<endl;
        }
        void operator++()//syntax for prefix 
        {
            side+=5;
        }
        void operator++(int no_use)// syntax for postfix
        {
            side+=10;
        }
        test operator+(test new1)
        {
            test new2;
            new2.side=side+new1.side;
            return new2;

        }
};
int main ()
{
    test noob(10);
    noob.show();//10
    ++noob;//10+5
    noob.show();//15
    noob++;//15+10
    noob.show();//25
    test noob1(20);
    test noob3=noob+noob1;//20+25
    noob3.show();//45

}
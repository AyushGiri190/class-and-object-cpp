#include<iostream>
using namespace std;
class test
{
    private:
        int i=0;
    public:
        void show()
        {
            cout<<"i is "<< i<<endl;
        }
        test()
        {
            i=10;
        }
        test(int j)
        {
            i=j;
        }
        friend void operator++(test&a);
        friend void operator++(test&a , int no_use);
        friend test operator+(test&a,test&b);

        
    
};
void operator++(test&a)//we need to send the address of the object where we want to call the unary operator 
{
    a.i+=5;
}
void operator++(test&a,int no_use)// same syntax as the normal operator overloading 
{
    a.i+=10;
}
test operator+(test&a,test&b)// we need to send the address of both the object
{
    test c;
    c.i= a.i+b.i;
    return c;
}
int main()
{

    test new1(15),new2(20);
    new1++;//15+10
    new1.show();//25
    ++new2;//20+5
    new2.show();//25
    test new3 =new1+new2;//25+25
    new3.show();//50

}

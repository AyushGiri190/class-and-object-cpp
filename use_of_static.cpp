#include<iostream>
#include<string>
using namespace std;
class test
{
    private:
        static string name;//static holds same value for all the objects it is initiliased here and defined outside the class
        int i=10;
    public:
        void show()
        {
            cout<< "name is " <<name<<" i is "<<i<<endl;
        }
        void seti(int n)
        {
           i=n;
        }
        test()
        {
            i=10;
        }

};
string test::name="ayush";// static data members are defined here 
int main()
{
    test a,b,c;
    a.seti(17);
    b.seti(19);
    c.seti(20);
    a.show();//name is ayush i is 17
    b.show();//name is ayush i is 19
    c.show();//name is ayush i is 20

}

#include<iostream>
using namespace std;
class test
{
    private:
        int marks;

    public:
        void show()
        {
            cout<<"Marks are "<<marks<<endl;
        }
        void set_marks(int marks)
        {
            this->marks=marks;// this is used to access the classes data members..
        }
        test()
        {
            marks=0;
        }
};
int main ()
{
    test v;
    v.set_marks(10);
    v.show();
}
#include<iostream>
using namespace std;
class test // creating a class named test
{
    private:
        int x=0;// defining private attributes x and y initialized to 0
        int y=0;
    public:// creating some member function in public scope
        void show()
        {
            cout<<"x= "<<x<<" y= "<<y<<endl;
        }
        friend void addxy(test &a);// friend function is created to acces the private member of the class without using 
        // the public member function 
        // the prototype of friend function is "friend <returntype> <function name>(<class name >,...);"
        //The body of the friend function is defined outside the body of the class.

};
void addxy(test &a)// friend fucntion prototyped in class test defined outside the class
{
    a.x=a.x+2;// private member of the class test are accessed here wihtout memeber function
    a.y=a.y+3;
}
int main()
{
    test new1;
    new1.show();// output will be "x= 0 y= 0"
    addxy(new1);
    new1.show();// output will be "x= 2 y= 3"
}
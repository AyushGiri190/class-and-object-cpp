#include<iostream>
using namespace std;
class square;// prototying a class before defining it 
class rectangle
{
    private:
        int length=4;
        int breadth=5;
    public:
        void show_area()
        {
            cout<<"area is "<<length*breadth<<endl;
        }
        friend void show_all_sides(rectangle r, square s);// making friend function inside the first class
};
class square
{
    private:
        int side=10;
    public:
        void show_area()
        {
            cout<<"Area is "<<side*side<<endl;
        }
        friend void show_all_sides(rectangle r, square s);// making friend function inside the second class
};
void show_all_sides(rectangle r, square s)// defining the friend function outside the class
{
    cout<<"Lenght is  "<<r.length<<" breadth is "<<r.breadth<<endl;
    cout<<"Side is "<< s.side<< endl;

}
int main()
{
    rectangle R;
    square S;
    R.show_area();// output will be area is 20
    S.show_area();// output will be Area is 100
    show_all_sides(R,S);// ouput will be lenght is 4 breadth is 5
                        // side is 10
}
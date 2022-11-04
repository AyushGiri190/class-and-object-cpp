#include <iostream>
using namespace std;
class Square;
class Rectangle {
	int width, height;// attributes 
public:
	Rectangle(int w = 1, int h = 1):width(w),height(h){} // default constructor calling 
	void display() {
		cout << "Rectangle: " << width * height << endl;
	}
	void morph(Square &);// creating a function with a class in it as an argument 
};

class Square {
	int side;

public:
	Square(int s = 1):side(s){} // default constructor calling 
	void display() {
		cout << "Square: " << side * side << endl;
	}
	friend class Rectangle;// making it a friend class so every function can be used 
};

void Rectangle::morph(Square &s) {// defining the prototyped function 
	width = s.side;// will swap the width from 15 to 5(side of sqaure)
	height = s.side;// will swap the height from 10 to 5
}

int main () {
	Rectangle rec(15,10);
	Square sq(5);
	cout << "Before:" << endl;
	rec.display();// 150
	sq.display();//25

	rec.morph(sq);
	cout << "\nAfter:" << endl;
	rec.display();//25
	sq.display();//25
	return 0;
}

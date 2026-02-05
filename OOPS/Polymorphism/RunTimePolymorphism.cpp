#include <iostream>
using namespace std;

// class Shape final
class Shape
{
public:
  // Shape()
  // {
  //   cout << "Shape ctor called" << endl;
  // }

  // virtual void draw() final
  virtual void draw()
  {
    cout << "Generic drawing..." << endl;
  }
};

class Circle : public Shape
{
public:
  // Circle()
  // {
  //   cout << "Circle ctor called" << endl;
  // }

  void draw()
  {
    cout << "Circle drawing..." << endl;
  }
};

class Rectangle : public Shape
{
public:
  // Rectangle()
  // {
  //   cout << "Rectangle ctor called" << endl;
  // }

  void draw()
  {
    cout << "Rectangle drawing..." << endl;
  }
};

class Triangle : public Shape
{
public:
  // Triangle()
  // {
  //   cout << "Triangle ctor called" << endl;
  // }

  void draw()
  {
    cout << "Triangle drawing..." << endl;
  }
};

void ShapeDrawing(Shape *s)
{
  s->draw(); // draw is polymorphic
}

int main()
{
  // Circle C;
  // C.draw();
  // Rectangle R;
  // R.draw();
  // Triangle T;
  // T.draw();

  // ShapeDrawing(&C);
  // ShapeDrawing(&R);
  // ShapeDrawing(&T);

  // // without virtual keyword -> the `ptr on which you are storing` (left-handside) - its class method will called
  // Shape *s = new Shape();
  // s->draw();

  // // UPCASTING
  // Shape *s2 = new Circle();
  // s2->draw();

  // Circle *c = new Circle();
  // c->draw();

  // // DOWNCASTING
  // // Circle *c2 = new Shape();
  // Shape *s3 = new Shape();
  // Circle *c2 = (Circle *)s3; // Typecasting
  // c2->draw();

  // with virtual keyword
  Shape *s = new Shape();
  s->draw();

  // UPCASTING
  Shape *s2 = new Circle();
  s2->draw();

  Circle *c = new Circle();
  c->draw();

  // DOWNCASTING
  // Circle *c2 = new Shape();
  Shape *s3 = new Shape();
  Circle *c2 = (Circle *)s3; // Typecasting
  c2->draw();

  return 0;
}
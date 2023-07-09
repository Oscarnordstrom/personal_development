#include <iostream>
#include <math.h>
#include <numbers>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;

const double Pi = std::numbers::pi;

class Shape {
public:
  virtual double calc_area() = 0;
  virtual string get_name() = 0;
};

class PiShape : public Shape {
public:
  PiShape(double r) : radius(r) {}

protected:
  double radius;
};

class Circle : public PiShape {
public:
  Circle(double r) : PiShape(r) {}
  double calc_area() override { return radius * radius * Pi; }
  string get_name() override { return "Circle"; }
};

class Sphere : public PiShape {
public:
  Sphere(double r) : PiShape(r) {}
  double calc_area() override { return 4.0 * Pi * radius * radius; }
  string get_name() override { return "Sphere"; }
};

class Cone : public PiShape {
public:
  Cone(double r, double h) : PiShape(r), height(h) {}
  double calc_area() override {
    return Pi * radius * (radius + sqrt(radius * radius + height * height));
  }
  string get_name() override { return "Cone"; }

private:
  double height;
};

class Box : public Shape {
public:
  Box(double w, double h, double d) : width(w), height(h), depth(d) {}
  double calc_area() override {
    return 2 * (width * height + height * depth + depth * width);
  }
  string get_name() override { return "Box"; }

private:
  double width;
  double height;
  double depth;
};

int main() {
  std::vector<std::unique_ptr<Shape>> shapes;

  shapes.push_back(std::make_unique<Circle>(5.0));
  shapes.push_back(std::make_unique<Sphere>(3.0));
  shapes.push_back(std::make_unique<Cone>(3.0, 7.0));
  shapes.push_back(std::make_unique<Box>(2.0, 3.0, 4.0));

  for (const auto &shape : shapes) {
    cout << "Shape: " << shape->get_name() << ", Area: " << shape->calc_area()
         << endl;
  }

  return 0;
}

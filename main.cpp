#include <iostream>
#include <string>
#include "Car.h"
#include <cassert>


int main() {
    Car car = Car("BMW",10,10,10,0,0,45);
    Car carDefault = Car();
    Car carCopy = Car(car);

    assert(car.getName() == "BMW");
    assert(car.getHeight() == 10);
    assert(car.getWidth() == 10);
    assert(car.getLength() == 10);
    assert(car.getX() == 0);
    assert(car.getY() == 0);
    assert(car.getAngle() == 45);

    assert(carDefault.getName() == EMPTY);
    assert(carDefault.getHeight() == ZERO);
    assert(carDefault.getWidth() == ZERO);
    assert(carDefault.getLength() == ZERO);
    assert(carDefault.getX() == ZERO);
    assert(carDefault.getY() == ZERO);
    assert(carDefault.getAngle() == ZERO);

    assert(carCopy.getName() == car.getName());
    assert(carCopy.getHeight() == car.getHeight());
    assert(carCopy.getWidth() == car.getWidth());
    assert(carCopy.getLength() == car.getLength());
    assert(carCopy.getX() == car.getX());
    assert(carCopy.getY() == car.getY());
    assert(carCopy.getAngle() == car.getAngle());
    car.setName("Mercedes");
    car.setLength(20);
    assert(car.getLength() == 20);
    assert(car.getName() == "Mercedes");
    std::cout<<"Finished without errors"<<std::endl;
    return 0;
}

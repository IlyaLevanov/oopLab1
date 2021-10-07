//
// Created by Ilya Levanov on 2.10.2021.
//

#ifndef CAR_H
#define CAR_H
#include <string>
#define ZERO 0
#define EMPTY ""


class Car {
public:
    Car();
    ~Car();
    Car(const std::string& carName,int height, int width, int length,int x, int y, int angle);
    Car(const Car& car);
    void setName(const std::string& carName);
    void setHeight(int height);
    void setWidth(int width);
    void setX(int x);
    void setY(int Y);
    void setAngle(int angle);
    void setLength(int length);
    const std::string& getName() const;
    int getHeight() const;
    int getWidth() const;
    int getX() const;
    int getY() const;
    int getAngle() const;
    int getLength() const;
private:
    std::string carName;
    int height;
    int width;
    int length;
    int x;
    int y;
    int angle;
protected:
    bool checkHWLXY(int value);
    bool checkAngle(int angle);
};

#endif //CAR_H

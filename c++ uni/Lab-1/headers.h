#ifndef HEADER_H
#define HEADER_H

class Power {

private:
    double first;
    int second;
public:

    void init(double f, int s);
    void read();
    void display();
    double power();
};

class Time {

private:
    int first;
    int second;
public:

    Time(int f, int s);
    Time(double hour);
    void display();
    int minutes();
};

#endif
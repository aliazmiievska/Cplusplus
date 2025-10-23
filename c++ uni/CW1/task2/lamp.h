#ifndef HEADER_H
#define HEADER_H


class Lamp {
private:
    double m_power;
    bool m_isOn;
    static int arraySize;
public:

    Lamp() { ++arraySize; };
    ~Lamp() { --arraySize; };

    void init(double p, bool state) { m_power = p; m_isOn = state; }

    friend double totalPower(Lamp* array);

};

#endif
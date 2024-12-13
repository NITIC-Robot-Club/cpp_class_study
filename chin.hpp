#ifndef CHIN_HPP
#define CHIN_HPP

#include <iostream>

class chin {
private:
    double long_;       // chinの長さ(cm)
    double direction_;  // chinの向き(°、-180~180、左を正)
    double hardness_;   // chinの硬さ(%、0~100)
    double thickness_;  // chinの太さ(%、0~100)
public:
    chin(double _long, double direction, double hardness, double thickness);
    bool is_boron;
    void boron();
    void unboron();
};


#endif // CHIN_HPP
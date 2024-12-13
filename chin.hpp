#ifndef CHIN_HPP
#define CHIN_HPP

#include <iostream>

class chin {
private:
    double long_;       // chinの長さ(cm)
    double vertical_direction_;  // chinの向き(°、縦、-180~180、上を正)
    double horizontal_direction_;// chinの向き(°、横、-180~180、左を正)
    double hardness_;   // chinの硬さ(%、0~100)
    double thickness_;  // chinの太さ(%、0~100)
    bool is_boron_;     // chinがboronされているか
public:
    chin(double _long, double vertical_direction, double horizontal_direction, double hardness, double thickness);
    void boron();
    void unboron();
    bool is_boron();
    void set_position(double vertical_direction, double horizontal_direction);
};


#endif // CHIN_HPP
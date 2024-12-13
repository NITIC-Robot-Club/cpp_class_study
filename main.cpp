#include "chin.hpp"

int main() {
    chin chinko(13.0, 20.0, 10.0, 30.0, 20.0);
    chinko.boron();
    chinko.boron();
    chinko.unboron();
    chinko.boron();
    chinko.set_position(30.0, 40.0);
    chinko.unboron();
    chinko.boron();
}
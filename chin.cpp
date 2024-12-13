#include "chin.hpp"

chin::chin(double _long, double direction, double hardness, double thickness)
        : long_(_long), direction_(direction), hardness_(hardness), thickness_(thickness) {
    is_boron = false;
}


void chin::boron(){
    if(is_boron){
        std::cout << "You already boroned." << std::endl;
        return;
    }
    is_boron = true;
    std::cout << "You boroned." << std::endl;
    std::cout << "Your Chin info:" << std::endl;
    std::cout << "long: " << long_ << std::endl;
    std::cout << "direction: " << direction_ << std::endl;
    std::cout << "hardness: " << hardness_ << std::endl;
    std::cout << "thickness: " << thickness_ << std::endl;
}

void chin::unboron(){
    if(!is_boron){
        std::cout << "You already unboroned." << std::endl;
        return;
    }
    is_boron = false;
    std::cout << "You unboroned." << std::endl;
}
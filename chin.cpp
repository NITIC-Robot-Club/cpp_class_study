#include "chin.hpp"

chin::chin(double _long, double vertical_direction, double horizontal_direction, double hardness, double thickness)
        : long_(_long), vertical_direction_(vertical_direction), horizontal_direction_(horizontal_direction), hardness_(hardness), thickness_(thickness) {
    is_boron_ = false;
}


void chin::boron(){
    if(is_boron_){
        std::cout << "<<<You already boroned.>>>" << std::endl;
        return;
    }
    is_boron_ = true;
    std::cout << "<<<You boroned.>>>" << std::endl;
    std::cout << "Your Chin info:" << std::endl;
    std::cout << "- long: " << long_ <<  "cm" << std::endl;
    std::cout << "- direction:" << std::endl;
    std::cout << "   - vertical: " << vertical_direction_ << "°" << std::endl;
    std::cout << "   - horizontal: " << horizontal_direction_ << "°" << std::endl;
    std::cout << "- hardness: " << hardness_ << "%" << std::endl;
    std::cout << "- thickness: " << thickness_ << "%" << std::endl;
}

void chin::unboron(){
    if(!is_boron_){
        std::cout << "<<<You already unboroned.>>>" << std::endl;
        return;
    }
    is_boron_ = false;
    std::cout << "<<<You unboroned.>>>" << std::endl;
}

bool chin::is_boron(){
    return is_boron_;
}

void chin::set_position(double vertical_direction, double horizontal_direction){
    vertical_direction_ = vertical_direction;
    horizontal_direction_ = horizontal_direction;
    std::cout << "<<<You set position.>>>" << std::endl;
    std::cout << "Your Chin info:" << std::endl;
    std::cout << "- direction:" << std::endl;
    std::cout << "   - vertical: " << vertical_direction_ << "°" << std::endl;
    std::cout << "   - horizontal: " << horizontal_direction_ << "°" << std::endl;
}
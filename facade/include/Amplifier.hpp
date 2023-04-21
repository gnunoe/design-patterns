#ifndef FACADE_INCLUDE_AMPLIFIER_HPP
#define FACADE_INCLUDE_AMPLIFIER_HPP

#include <iostream>

enum class SoundType {
    STEREO = 0,
    SURROUND = 1
};

class Amplifier {
public:
    void on() {
        std::cout << "Switch on amplifier" << std::endl;
    };
    void off() {
        std::cout << "Switch off amplifier" << std::endl;
    };
    void set_volume(uint volume) {
        if (volume < 0) {
            volume_ = 0;
        } else if (volume > 100) {
            volume_ = 100;
        } else {
            volume_ = volume;
        }   
        std::cout << "Setting amplifier volume to " << volume_ << std::endl;
    };
    void set_stereo_sound() {
        sound_type_ = SoundType::STEREO;
        std::cout << "Setting amplifier sound to Stereo" << std::endl;
    }
    void set_surround_sound() {
        sound_type_ = SoundType::SURROUND;
        std::cout << "Setting amplifier sound to Surround" << std::endl;
    }
private:
    uint volume_;
    SoundType sound_type_ = SoundType::STEREO;

};

#endif // FACADE_INCLUDE_AMPLIFIER_HPP

#include <Amplifier.hpp>
#include <Lights.hpp>
#include <Projector.hpp>
#include <Screen.hpp>

#include <iostream>

class HomeTheatherFacade {
public:
    HomeTheatherFacade(Amplifier amp, Lights light, Projector proj, Screen screen)
    : amplifier_(amp)
    , lights_(light)
    , projector_(proj)
    , screen_(screen)
    {}

    void watch_movie () {
        std::cout << "Preparing room for watching a movie" << std::endl;
        lights_.dim(10);
        screen_.down();
        projector_.on();
        projector_.wideScreenMode();
        amplifier_.on();
        amplifier_.set_surround_sound();
        amplifier_.set_volume(70);
        std::cout << "Room prepared, enjoy the movie" << std::endl;
    }

    void end_movie () {
        std::cout << "Returning room to normal state" << std::endl;
        lights_.on();
        screen_.up();
        projector_.off();
        amplifier_.off();
    }

private:
    Amplifier amplifier_;
    Lights lights_;
    Projector projector_;
    Screen screen_;
};
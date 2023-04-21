#include <HomeTheatherFacade.hpp>

#include <iostream>

int main(int argc, char** argv) {

    if (argc != 1) {
        std::cout << "ERROR: no parameters needed!" << std::endl;
        return 1;
    }

    Amplifier amplifier = Amplifier();
    Lights lights = Lights();
    Projector projector = Projector();
    Screen screen = Screen();

    HomeTheatherFacade theather = HomeTheatherFacade(amplifier, lights, projector, screen);

    theather.watch_movie();
    theather.end_movie();
};

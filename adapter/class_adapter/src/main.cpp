#include <ducks/MaillardDuck.hpp>
#include <turkeys/WildTurkey.hpp>
#include <WildTurkeyAdapter.hpp>

#include <iostream>

int main(int argc, char** argv) {

    if (argc != 1) {
        std::cout << "ERROR: no parameters needed!" << std::endl;
        return 1;
    }

    auto test_duck = [](Duck* duck) {
        duck->quack();
        duck->fly();
    };

    auto maillard_duck = new MaillardDuck();
    test_duck(maillard_duck);

    auto wild_turkey = new WildTurkey();
    wild_turkey->gooble();
    wild_turkey->fly();

    auto wild_turkey_duck = new WildTurkeyAdapter();
    test_duck(wild_turkey_duck);
};

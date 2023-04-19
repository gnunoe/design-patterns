#include <Singleton.hpp>

#include <thread>
#include <vector>

#include <gtest/gtest.h>

TEST(Singleton, Test){

    auto singleton1 = Singleton::getInstance("1");
    ASSERT_EQ("1", singleton1->name());

    auto singleton2 = Singleton::getInstance("2");
    ASSERT_EQ("1", singleton2->name());
};

TEST(Singleton, MT_Test){
    auto fn = [](const int& i, std::string *ret_name){
        auto singleton = Singleton::getInstance(std::to_string(i));
        std::cout << "Thread " << i << " has singleton name: " << singleton->name() << std::endl;
        *ret_name = singleton->name();
    };

    const int num_threads = 5;
    std::vector<std::thread> threads(num_threads);
    std::vector<std::string> singleton_names(num_threads);

    for (int i=0; i < num_threads; i++){
        threads[i] = std::thread(fn, i, &singleton_names[i]);
    }

    for (auto& th : threads) {
        th.join();
    }

    auto singleton_name = singleton_names[0];
    for (const auto& name : singleton_names) {
        ASSERT_EQ(name, singleton_name);
    }
}

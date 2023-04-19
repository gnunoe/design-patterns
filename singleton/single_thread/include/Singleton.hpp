#ifndef SINGLETON_ST_INCLUDE_SINGLETON_HPP
#define SINGLETON_ST_INCLUDE_SINGLETON_HPP

#include <string>

class Singleton {
public:
    static Singleton* getInstance(const std::string& name);

    std::string name();

    // Singletons should not be cloneable.
    Singleton(Singleton &other) = delete;
    // Singletons should not be assignable.
    void operator=(const Singleton &) = delete;

private:
    Singleton(const std::string& name);

    static Singleton* singleton_;
    std::string name_;
};



#endif // SINGLETON_ST_INCLUDE_SINGLETON_HPP

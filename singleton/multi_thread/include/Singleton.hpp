#ifndef SINGLETON_MT_INCLUDE_SINGLETON_HPP
#define SINGLETON_MT_INCLUDE_SINGLETON_HPP

#include <string>
#include <mutex>

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
    static std::mutex mutex_;

    std::string name_;
};



#endif // SINGLETON_MT_INCLUDE_SINGLETON_HPP

#include <Singleton.hpp>

Singleton* Singleton::singleton_ = nullptr;

std::string Singleton::name() {
    return name_;
}

Singleton::Singleton(const std::string& name)
    : name_(name) {}

Singleton* Singleton::getInstance(const std::string& name){
    if (Singleton::singleton_ == nullptr) {
        Singleton::singleton_ = new Singleton(name);
    }
    return Singleton::singleton_;
}

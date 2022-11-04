#include "Serial.hpp"

int main()
{
    Data        *d;
    Data        *ret;
    uintptr_t   ptr;

    d = new Data;
    d->name = "ayoub";
    d->age = 23;

    ptr = serialize(d);
    ret = deserialize(ptr);
    std::cout << "name : " << ret->name << std::endl;
    std::cout << "age : " << ret->age << std::endl;
}

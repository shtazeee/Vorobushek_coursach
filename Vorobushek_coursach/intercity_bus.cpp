#include "intercity_bus.h"

intercity_bus::intercity_bus(ui rn, std::string fs, Time ttl, Time at, Type t = Type::Intercity_Bus)
    : bus(rn, fs, ttl, at, t)
{

}
#include "shuttle_bus.h"

shuttle_bus::shuttle_bus(ui rn, std::string fs, Time ttl, Time at, Type t = Type::Shuttle_Bus)
    : bus(rn, fs, ttl, at, t)
{

}

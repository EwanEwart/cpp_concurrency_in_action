#ifndef PLUGINCA_H
#define PLUGINCA_H

#include <string>

class PluginCA
{
    std::string arg{};
    std::string rarg{};
public:
    PluginCA(std::string arg);
    void reverse();
    std::string const& getRarg() const;
};

#endif // PLUGINCA_H

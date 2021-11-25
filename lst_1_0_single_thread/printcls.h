#ifndef PRINTCLS_H
#define PRINTCLS_H

#include <string>

class PrintCls
{
    std::string author{"EE"};
    std::string msg{};

public:
    PrintCls(std::string const& msg);
    virtual ~PrintCls(){}

    void print();
    std::string const& getMsg() const;
    void setMsg(const std::string &newMsg);
};

#endif // PRINTCLS_H

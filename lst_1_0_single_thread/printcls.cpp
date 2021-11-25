#include <iostream>
#include "printcls.h"

std::string const& PrintCls::getMsg() const
{
    return msg;
}

void PrintCls::setMsg(const std::string &newMsg)
{
    msg = newMsg;
}

PrintCls::PrintCls(const std::string &msg)
    :msg(msg)
{

}

void PrintCls::print()
{
    std::cout << msg << "(" << author << ")" << std::endl;
}

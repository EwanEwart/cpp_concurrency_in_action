#include <iostream>
#include <stack>
#include "pluginca.h"

std::string const& PluginCA::getRarg() const
{
    return rarg;
}

PluginCA::PluginCA(std::string arg)
: arg(arg)
{

}

void PluginCA::reverse()
{
    std::stack<char> st;
    for (auto c : arg ) {
        st.push(c);
        std::cerr << '.';
    }
    std::cerr << '\n' << "stack.size() " << st.size() << std::endl;
    for (ulong k=0; k < arg.size() ; ++k) {
        rarg += st.top();
        st.pop();
        std::cerr << '.';
    }
    std::cerr << '\n' << "rarg.size() " << rarg.size() << std::endl;
}

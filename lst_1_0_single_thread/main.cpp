#include <memory>
#include <iostream>
using namespace std;

#include "printcls.h"
#include "pluginca.h"

int main()
{
    string const m {"This is a Single Thread application."};
//    auto pclass {new PrintCls()};
//    auto pclass {unique_ptr<PrintCls>{new PrintCls(m)}};
    auto pclass {make_unique<PrintCls>(m)};

    pclass->print();
    pclass->setMsg("This is a Main Thread application.");
    pclass->print();

    auto pluginca {make_unique<PluginCA>("reverse")};
    pluginca->reverse();
    std::cout << "Reverse: '" << pluginca->getRarg() << "'" << std::endl;

//    delete pclass;

    return 0;
}

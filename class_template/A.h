#ifndef __A__
#define __A__
#include <sstream>
#include <string>
class A
{
    public:
    A() = default;
    ~A() = default;

    std::string dump()
    {
        std::stringstream ret;
        ret << "A" << std::endl;
        return ret.str();
    }
};

#endif /* __A__ */

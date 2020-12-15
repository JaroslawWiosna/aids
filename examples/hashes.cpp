#include "aids.hpp"

using namespace aids;

int main(int argc, char *argv[])
{
    {
        Hash_Map<String_View, int> hm{};
        hm.insert("1"_sv,1);
    }
    {
        Hash_Map<int, int> hm{};
        //hm.insert(1,1);
    }

    return 0;
}

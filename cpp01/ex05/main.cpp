#include "Harl.hpp"

int main()
{
    Harl har = Harl();
    har.complain("debug");
    har.complain("info");
    har.complain("warning");
    har.complain("error");
    return 0;
}
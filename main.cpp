#include "SharedLib.h"
#include <iostream>

std::string GetLibraryName()
{
    return "MainExecutable";
}

int main()
{
    std::cout << "Some linkers (like linux) won't return the call from SharedLib's \"GetLibraryName()\"" << std::endl;
    std::cout << "when calling \"GetIdentifierOfSharedLibrary()\" from the main executable. This is" << std::endl;
    std::cout << "because they search for the first available export with the desired name." << std::endl;

    std::cout << std::endl;

    std::cout << "Calling \"GetIdentifierOfSharedLibrary()\". Returned value from call: " << std::endl;
    std::cout << GetIdentifierOfSharedLibrary() << std::endl;

}

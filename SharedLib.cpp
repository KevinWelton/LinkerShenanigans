#include "SharedLib.h"

std::string GetIdentifierOfSharedLibrary()
{
    return "ModuleName == " + GetLibraryName();
}

std::string GetLibraryName()
{
    return "SharedLibrary";
}
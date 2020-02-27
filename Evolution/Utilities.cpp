#include "Includes.h"

std::filesystem::path getProgramPath()
{
    return std::filesystem::current_path();
}
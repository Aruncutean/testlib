//
// Created by arunc on 09/12/2024.
//
#include "codebase.hpp"

#if defined(_WIN32)
std::string getPlatformMessage() {
    return "Hello from Windows!";
}
#elif defined(__ANDROID__)
std::string getPlatformMessage() {
    return "Hello from Android!";
}
#else
std::string getPlatformMessage() {
    return "Hello from an unknown platform!";
}
#endif
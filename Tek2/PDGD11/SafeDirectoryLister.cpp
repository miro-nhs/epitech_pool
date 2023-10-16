/*
** EPITECH PROJECT, 2023
** Day11
** File description:
** SafeDirectory
*/

#include "SafeDirectoryLister.hpp"
#include <string>

bool SafeDirectoryLister::open(const std::string& path, bool hidden)
{
    close();
    dir_ = opendir(path.c_str());
    if (!dir_) {
        throw IDirectoryLister::OpenFailureException(strerror(errno));
        return false;
    }
    hidden_ = hidden;
    open_ = true;
    return true;
}

std::string SafeDirectoryLister::get()
{
    if (!dir_) {
        throw IDirectoryLister::NoMoreFileException();
        return "";
    }

    struct dirent* ent;
    while ((ent = readdir(dir_)) != nullptr) {
        if (!hidden_ && ent->d_name[0] == '.') continue;

        return ent->d_name;
    }
    throw IDirectoryLister::NoMoreFileException();
}
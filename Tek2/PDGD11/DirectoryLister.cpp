/*
** EPITECH PROJECT, 2023
** Day11
** File description:
** DirectoryLister
*/

#include "DirectoryLister.hpp"

DirectoryLister::DirectoryLister(const std::string& path, bool hidden): dir_(NULL), hidden_(hidden)
{
    open(path, hidden);

}

bool DirectoryLister::open(const std::string& path, bool hidden)
{
    close();
    dir_ = opendir(path.c_str());
    if (!dir_) {
        perror(path.c_str());
        return false;
    }
    hidden_ = hidden;
    open_ = true;
    return true;
}

std::string DirectoryLister::get()
{
    if (!dir_) return "";

    struct dirent* ent;
    while ((ent = readdir(dir_)) != NULL) {
        if (!hidden_ && ent->d_name[0] == '.') continue;

        return ent->d_name;
    }
    return "";
}

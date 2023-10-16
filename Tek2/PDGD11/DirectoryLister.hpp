/*
** EPITECH PROJECT, 2023
** Day11
** File description:
** DirectoryLister
*/

#ifndef DIRECTORYLISTER_HPP_
#define DIRECTORYLISTER_HPP_

#include "IDirectoryLister.hpp"
#include <string>
#include <dirent.h>

class DirectoryLister : public IDirectoryLister {
    public:
        DirectoryLister(): dir_(NULL), hidden_(false){};
        DirectoryLister(const std::string& path, bool hidden);
        ~DirectoryLister() {close();};
        bool open(const std::string& path, bool hidden);
        std::string get();
        void close(){ if (open_ == true) closedir(dir_); open_ = false;};
        // Disable copy and move constructors and assignment operator
        DirectoryLister(const DirectoryLister&) = delete;
        DirectoryLister(DirectoryLister&&) = delete;
        DirectoryLister& operator=(const DirectoryLister&) = delete;

    private:
    DIR* dir_;
    bool hidden_;
    bool open_ = false;
};

#endif /* !DIRECTORYLISTER_HPP_ */

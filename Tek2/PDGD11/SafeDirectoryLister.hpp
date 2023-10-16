/*
** EPITECH PROJECT, 2023
** Day11
** File description:
** SafeDirectoryLister
*/

#ifndef SAFEDIRECTORYLISTER_HPP_
#define SAFEDIRECTORYLISTER_HPP_

#include "IDirectoryLister.hpp"
#include <dirent.h>

class SafeDirectoryLister : public IDirectoryLister {
    public:
        SafeDirectoryLister(): dir_(NULL), hidden_(false){}
        SafeDirectoryLister(const std::string& path, bool hidden){ open(path, hidden);};
        ~SafeDirectoryLister() {close();};
        bool open(const std::string& path, bool hidden) override;
        std::string get() override;
        void close(){ if (open_ == true) closedir(dir_); open_ = false;};
        // Disable copy and move constructors and assignment operator
        SafeDirectoryLister(const SafeDirectoryLister&) = delete;
        SafeDirectoryLister(SafeDirectoryLister&&) = delete;
        SafeDirectoryLister& operator=(const SafeDirectoryLister&) = delete;

    private:
        DIR* dir_;
        bool hidden_;
        bool open_ = false;
};

#endif /* !SAFEDIRECTORYLISTER_HPP_ */

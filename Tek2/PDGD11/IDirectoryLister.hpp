/*
** EPITECH PROJECT, 2023
** Day11
** File description:
** IDirectoryLister
*/

#ifndef IDIRECTORYLISTER_HPP_
#define IDIRECTORYLISTER_HPP_
#include <iostream>
#include <string>
#include <dirent.h>
#include <exception>
#include <cstring>

class IDirectoryLister {
    public:
        ~IDirectoryLister() = default;
        virtual bool open(const std::string& path, bool hidden) = 0;
        virtual std::string get() = 0;

        class OpenFailureException : public std::exception {
            public:
                OpenFailureException(const char *err_message): err_message_(err_message) {};
                const char *what() const noexcept {return err_message_;}
            private:
                const char* err_message_;
            };

        class NoMoreFileException : public std::exception {
            public:
            const char *what() const noexcept {return "End of stream";}
        };

};


#endif /* !IDIRECTORYLISTER_HPP_ */

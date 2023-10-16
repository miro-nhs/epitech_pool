/*
** EPITECH PROJECT, 2023
** Day13
** File description:
** Stack
*/

#ifndef STACK_HPP_
#define STACK_HPP_

#include <iostream>
#include <stack>

class Stack {
    public:
    class Error : public std::exception {
        public:
            Error(const std::string& message) : message_(message) {}
            const char* what() const noexcept override { return message_.c_str(); }
            private:
            std::string message_;
        };
        Stack() = default;
        void push(double val) {data_.push(val);}
        double pop();
        double top() const;
        void add();
        void sub();
        void mul();
        void div();
        bool empty() const{ return data_.empty();}
        ~Stack(){};

    protected:
    private:
    std::stack<double> data_;
};

#endif /* !STACK_HPP_ */

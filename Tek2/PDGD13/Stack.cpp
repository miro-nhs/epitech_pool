/*
** EPITECH PROJECT, 2023
** Day13
** File description:
** Stack
*/

#include "Stack.hpp"
#include <iostream>

double Stack::pop() {
    if (data_.empty()) {
        throw Error("Empty stack");
    }
    double value = data_.top();
    data_.pop();
    return value;
}

double Stack::top() const {
    if (data_.empty()) {
        throw Error("Empty stack");
    }
    return data_.top();
}

void Stack::add() {
    if (data_.size() < 2) {
        throw Error("Missing add operand : Not enough operands");
    }
    double value1 = pop();
    double value2 = pop();
    data_.push(value1 + value2);
}

void Stack::sub() {
    if (data_.size() < 2) {
        throw Error("Not enough operands");
    }
    double value1 = pop();
    double value2 = pop();
    data_.push(value1 - value2);
}

void Stack::mul() {
    if (data_.size() < 2) {
        throw Error("Not enough operands");
    }
    double value1 = pop();
    double value2 = pop();
    data_.push(value1 * value2);
}

void Stack::div() {
    if (data_.size() < 2) {
        throw Error("Not enough operands");
    }
    double value1 = pop();
    double value2 = pop();
    data_.push(value1 / value2);
}

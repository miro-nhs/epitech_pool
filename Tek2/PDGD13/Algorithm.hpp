/*
** EPITECH PROJECT, 2023
** Day13
** File description:
** Algorithm
*/

#ifndef ALGORITHM_HPP_
#define ALGORITHM_HPP_

#include <iostream>
#include <functional>

template <typename Template>
void swap(Template &A, Template &B) {
    Template tmp;
    tmp = A;
    A = B;
    B = tmp;
}

template <typename Template>
const Template& min(Template const& A, Template const& B) {
    return A < B ? A : B;
}

template <typename Template>
const Template& max(Template const& A, Template const& B) {
    return A < B ? B : A;
}

template <typename Template>
Template clamp(Template value, Template min, Template max) {
    return value < min ? min : max < value ? max : value;
};

#endif /* !ALGORITHM_HPP_ */

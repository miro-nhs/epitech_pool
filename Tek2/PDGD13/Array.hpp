/*
** EPITECH PROJECT, 2023
** Day13
** File description:
** Array
*/

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include "Algorithm.hpp"
#include <iostream>
#include <cstring>

template <typename Type, std::size_t Size>
class Array {
public:
    Array() = default;

    Type& operator[](std::size_t index) {
        if (index >= Size) {
            throw std::out_of_range("Out of range");
        }
        return data_[index];
    }
    const Type& operator[](std::size_t index) const {
        if (index >= Size) {
            throw std::out_of_range("Out of range");
        }
        return data_[index];
    }
    std::size_t size() const { return Size; }
    void forEach(const std::function<void(const Type&)>& task) const {
        for (std::size_t i = 0; i < Size; i++) {
            task(data_[i]);
        }
    }
    template <typename U>
    Array<U, Size> convert(const std::function<U(const Type&)>& converter) const {
        Array<U, Size> result;
        for (std::size_t i = 0; i < Size; i++) {
            result[i] = converter(data_[i]);
        }
        return result;
    }
    friend std::ostream& operator<<(std::ostream& os, const Array<Type, Size>& array) {
        os << "[";
        for (std::size_t i = 0; i < Size; i++) {
            os << array.data_[i];
            if (i != Size - 1) {
                os << ", ";
            }
        }
        os << "]";
        return os;
    }

private:
    Type data_[Size];
};

#endif /* !ARRAY_HPP_ */

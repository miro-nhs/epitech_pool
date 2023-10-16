/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Warpsystem
*/

#ifndef WARPSYSTEM_HPP_
#define WARPSYSTEM_HPP_

namespace WarpSystem {
    class QuantumReactor {
    private:
        bool _stabilty = true;

    public:
        bool isStable() const;
        void setStability(bool const visibility);
    };

    class Core {
    public:
        QuantumReactor *_coreReactor;

        QuantumReactor *checkReactor() const;

        explicit Core(QuantumReactor *quantumReactor);
    };
};

#endif /* !WARPSYSTEM_HPP_ */

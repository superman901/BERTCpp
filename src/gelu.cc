#include "gelu.h"
#include <exception>
#include <cmath>

namespace lh
{
    template<class T>
    Gelu<T>::Gelu(){

    }

    template<class T>
    Gelu<T>::~Gelu(){

    }

    template<class T>
    void Gelu<T>::compute(std::size_t size, T *input){
        for(int i=0;i<size;i++)
            input[i] = input[i] * 0.5f * (1.0f + erff(input[i] * sqrtf(0.5f)));
    }

    template class Gelu<float>;
}
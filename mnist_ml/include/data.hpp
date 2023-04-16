#ifndef __DATA_H
#define __DATA_H

#include <vector>
#include "stdint.h"
#include "stdio.h"

class data {
    std::vector<uint8_t>* feature_vector; //No class at end
    uint8_t label;
    int enum_label; // A -> 1, B -> 2, C -> 3, D -> 4, E -> 5, F -> 6, G -> 7, H -> 8, I -> 9, J -> 10

    public:
    data();
    ~data();
    void set_feature_vector(std::vector<uint8_t>* feature_vector);
    void append_to_feature_vector(uint8_t value);
    void set_label(uint8_t label);
    void set_enumerated_label(int enum_label);

    int get_feature_vector_size();
    uint8_t get_label();
    uint8_t get_enumerated_label();

    std::vector<uint8_t>* get_feature_vector();

};

#endif
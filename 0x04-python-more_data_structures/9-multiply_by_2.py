#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    new_dict_mul = {}
    for key, value in a_dictionary.items():
        new_value = value * 2
        new_dict_mul[key] = new_value
    return new_dict_mul

#!/usr/bin/python3
def no_c(my_string):
    lst = list(my_string)
    for x in lst:
        if x == 'c':
            lst.remove('c')
        if x == 'C':
            lst.remove('C')
    new_string = "".join(lst)
    return new_string

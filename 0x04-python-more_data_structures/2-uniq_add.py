#!/usr/bin/python3

def uniq_add(my_list=[]):
	uniq_num = []
	sum = 0
	for num in my_list:
		if num not in uniq_num:
			uniq_num.append(num)
	for num in uniq_num:
		sum += num
	return (sum)

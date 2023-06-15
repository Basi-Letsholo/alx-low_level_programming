#!/usr/bin/python3

list_num = []
for i in range(999, 100, -1):
    for j in range(999, 100, -1):
        num = j * i
        num_str = str(num)

        if num_str == num_str[::-1]:
            list_num.append((num, i))

len_list = len(list_num)
max_num = 0
for i in range(0, len_list):
    if max_num < list_num[i][0]:
        max_num = list_num[i][0]

print(f"{max_num}")

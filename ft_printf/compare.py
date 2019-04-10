import sys
f = open('text', 'r')

for i, line in enumerate(f):
    if i%5 == 0:
        str_0 = line
        continue
    elif i%5 == 1:
        str_1 = line
        continue
    elif i%5 == 2:
        str_2 = line
        continue
    elif i%5 == 3:
        if str_1 != str_2:
            print(str_0)
            print(str_1 == str_2)
            print(str_1)
            print(str_2)
        continue
       

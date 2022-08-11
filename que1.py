from operator import itemgetter
list = []
while True:
    input_list = input()
    if not input_list:
        break
    list.append(tuple(input_list.split(",")))
 
print(sorted(list, key=itemgetter(0,1,2)))

n = int(input())

d= {}

for i in range(0, n):
    entry = str(input()).split(" ")

    name = entry[0]
    phone = int(entry[1])
    d[name] = phone

for j in range(0, n):
    name = str(input())

    if name in d:
        phone = d[name]
        print(name + "=" + str(phone))
    else:
        print("Not found")
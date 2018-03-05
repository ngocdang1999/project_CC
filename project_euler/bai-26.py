
a = b = 1
for i in xrange(3, 1000, 2):
    if i % 5 == 0:
        continue

    c = 1
    while (10 ** c) % i != 1:
        c =c+ 1

    if c > b:
        a, b = i, c

print a

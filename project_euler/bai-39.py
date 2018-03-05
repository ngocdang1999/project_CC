e=0
h=0
for p in xrange(12, 1001, 2):
    d = 0
    for a in xrange(1, p/3):
        a2 = a*a
        for b in xrange(a, (p-a)/2):
            c = p - a - b
            if a2 + b*b == c*c: d = d + 1
    if d > h: e,h = p, d
print e




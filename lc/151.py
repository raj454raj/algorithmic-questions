def func(s):
    tmp = s.split(" ")
    a = []
    tmp.reverse()
    for i in tmp:
        if i != "":
            a.append(i)

    s = " ".join(a)
    return s

print func("ashd asdkjasd the blue")

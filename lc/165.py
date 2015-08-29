def compareVersion(version1, version2):
    one = version1.split('.')
    two = version2.split('.')
    l = min(len(one), len(two))
    for i in xrange(l):
        if int(one[i]) > int(two[i]):
            return 1
        elif int(one[i]) < int(two[i]):
            return -1
    if len(one) == len(two):
        return 0
    elif len(one) > len(two):
        for i in xrange(l, len(one)):
            if int(one[i]) != 0:
                return 1
        return 0
    else:
        for i in xrange(l, len(two)):
            if int(two[i]) != 0:
                return -1
        return 0


print compareVersion("12.3265.565", "985.565.6556")
print compareVersion("985.3265.565", "985.565.6556")
print compareVersion("1.1.0", "1.1.0.000")

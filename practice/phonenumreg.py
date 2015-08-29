import re
n = input()
for i in xrange(n):
    line = raw_input()
    t=re.search("[0-9]{1,3}[ -][0-9]{1,3}[ -][0-9]{4,10}", line)
    if t.group() == line:
        x = t.group() 
        if x.__contains__(" "):
            tmparr = x.split(" ")
        elif x.__contains__("-"):
            tmparr = x.split("-")
        print "CountryCode=" + tmparr[0] \
            + ",LocalAreaCode=" + tmparr[1] \
            + ",Number=" + tmparr[2]


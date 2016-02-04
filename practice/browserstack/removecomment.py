import re
t = """
int main(){
    // this is a comment
    int i = 1;
    /*
        some more
        comments
    */
    cout<<i;
    cout<<endl; // this is for new line
    return 0;
    // last one
}
"""
t = re.sub("/\*(.|[\r\n])*?\*/", "", t)
t = re.sub("//.*\\n", "\n", t)
tmp = t.split("\n")
for line in tmp:
    x = re.match("^\s+$", line)
    if x:
        if x.group() == line:
            res = ""
    else:
        res = line
    if res != "":
        print res

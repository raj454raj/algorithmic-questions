t = """
<expr>
<sum>
<elem>4</elem>
<elem>6</elem>
<elem>7</elem>
<elem>3</elem>
<sum>
    <elem>1</elem>
    <prod>
        <elem>2</elem>
        <elem>3</elem>
    </prod>
</sum>
</sum>
</expr>
"""

import xml.etree.ElementTree as ET
def recurse(tree):
    if tree.tag == "expr":
        return recurse(tree.getchildren()[0])
    elif tree.tag == "elem":
        return int(tree.text)
    elif tree.tag == "sum":
        res = 0
        children = tree.getchildren()
        for i in children:
            res += recurse(i)
        return res
    elif tree.tag == "prod":
        res = 1
        children = tree.getchildren()
        for i in children:
            res *= recurse(i)
        return res
    else:
        return "Invalid tag found"

tree = ET.fromstring(t)
print recurse(tree)

n, m = raw_input().split(",")
n = int(n)
m = int(m)
schema = raw_input().split(",")
schema = map(lambda x: x.strip("\""), schema)
records = []
for i in xrange(len(schema)):
    schema[i] = (schema[i], i)
for i in xrange(n):
    row = raw_input()
    row = row.split(",")
    row = map(lambda x: int(x) if x.isdigit() else eval(x), row)
    records.append(row)

query = raw_input()
new_query = query
schema.sort(reverse=True)

for column in schema:
    if column[0] in new_query:
        new_query = new_query.replace(column[0], "record[%s] " % str(column[1]))

new_query = new_query.replace(" AND ", " and ")
new_query = new_query.replace(" OR ", " or ")
new_query = new_query.replace(" = ", " == ")
new_query = new_query.replace(" <> ", " != ")
new_query = new_query.replace(" OR ", " or ")

for record in records:
    if eval(new_query) == True:
        print record

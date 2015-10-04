g++ 525C.cpp -o a1
g++ temp.cpp -o a2
python temp.py > inp
./a1 < inp > b1
./a2 < inp > b2
diff b1 b2

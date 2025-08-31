Binary Vs Ternary Program takes input.txt as input

BinaryVsTernary_textinput.exe < input.txt

This BinaryVsTernary_textinput.exe after getting input generates output.dat

This output.dat contains the n(no of elements of array),comparison2(no of comparisons using Binary Search),comparison3(no of comparisons using Ternary Search)

Plot.gp contains the commands

set title "Binary vs Ternary Search Comparisons"
set xlabel "Array Size (n)"
set ylabel "No. of Comparisons"
set grid
set key left top
plot "output.dat" using 1:2 with linespoints title "Binary Search", \
     "output.dat" using 1:3 with linespoints title "Ternary Search"



Run Terminal and run command gnuplot -p plot.gp


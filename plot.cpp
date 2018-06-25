#include<iostream>
#include<fstream>
#include<stdio.h>
#include "gnuplot.h"

using namespace std;

int main()
{

gnuplot p;
p("set term postscrip pdf");
p("set output \"dump.pdf\" ");
p("set term post color");
p("set xrange[0:550]");
p("set xtics 50");
p("set yrange[0:120]");
p("set xlabel'Time(sec)'");
p("set style data lines");

p("plot 'dump.dat' using 1:2 title'Total power'lt rgb 'black' ,\
 'dump.dat' using 1:3 title'PP0'lt rgb '#006400' ,\
  'dump.dat' using 1:4 title'DRAM'lt rgb 'brown',\
 'dump.dat' using 1:5 title'CPU'lt rgb 'red'");
 
p("replot 'dump.dat' using 1:6 title'Clock-gated'lt rgb '#B8860B ',\
 'dump.dat' using 1:7 title'Idle'lt rgb 'blue'");

p("replot 'dump.dat' using 1:8 title'Mem-Bdw'lt rgb '#8B008B'");


 

}


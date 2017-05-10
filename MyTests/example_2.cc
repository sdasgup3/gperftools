#include "gperftools/profiler.h"
#include <iostream>
#include <math.h>
using namespace std;
void bar()
{
        int a,b,c,d,j,k;
        a=0;
        int z=0;
        b = 1000;
        while(z < b)
        {
                while (a < b)
                {
                        d = sin(a);
                        c = cos(a);
                        j = tan(a);
                        k = tan(a);
                        k = d * c + j *k;
                        a++;
                }
                a = 0;
                z++;
        }
}
void foo()
{
        cout << ". ";
}

int main()
{
        ProfilerStart("/home/mohammad/gperf/dump.txt");

        int a = 1000;
        while(a--){foo();}
        bar();
        ProfilerFlush();
        ProfilerStop();
}

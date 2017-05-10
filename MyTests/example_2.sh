#g++ example_2.cc -I /home/sdasgup3/Install/gperftools.install/include/  -L /home/sdasgup3/Install/gperftools.install/lib/ -lprofiler -o a.out
g++ example_2.cc -I /home/sdasgup3/Install/gperftools.install/include/   /home/sdasgup3/Install/gperftools.install/lib/libprofiler.a -o a.out

#CPUPROFILE_FREQUENCY=10000 LD_PRELOAD=/home/sdasgup3/Install/gperftools.install/lib/libprofiler.so CPUPROFILE=example_2.prof.out ./a.out

#PROFILER_LIB=/home/sdasgup3/Install/gperftools.install/lib
#LD_LIBRARY_PATH=${PROFILER_LIB}:$LD_LIBRARY_PATH
CPUPROFILE=example_2.prof.out ./a.out
~/Install/gperftools.install/bin/pprof --text a.out example_2.prof.out

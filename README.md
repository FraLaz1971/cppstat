# cppstat
Statistics classes in c++
###
`g++ -c samplestatistics.cpp`
###
`g++ -c samplehistogram.cpp`
###
`ar rcu libstat.a *.o`
###
`g++ stat.cpp -o stat -L. -lstat`
###
`g++ histo.cpp -o histo -L. -lstat`
###
usage:
###
`./stat < samples.txt`
###
`./histo <min> <max> <step> < samples.txt`

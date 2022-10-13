#!/bin/bash

#This script takes 2 command line arguments.
#Two arguments are text files
#example invocation: debian@beaglebone:~/tranhw6$ ./myCopier.sh file1.txt file2.txt
echo
echo "Starting the myCopier Bash Script"
if [ $# != 2 ]; then
 echo "There are no arguments. Usage is:"
 echo -e "myCopier file1.txt file2.txt \n "
 exit 2
fi

echo
echo "Starting the reading and writing file program"
echo "The current FILE PATH is: $PWD"
echo "Files name passed are: $1 $2 "
echo
while read line;
do echo $line;
done < $1

cp $1 $2
echo
echo "Done Copy"

#!bin/bash

#run root macro to make the scans
root -b -q run_makeScan.C

#put the variable names at the top of the result of the diff
head -n 3 file1_scan01.log > diff_scan01.log
head -n 3 file1_scan02.log > diff_scan02.log
head -n 3 file1_scan03.log > diff_scan03.log
head -n 3 file1_scan04.log > diff_scan04.log
head -n 3 file1_scan05.log > diff_scan05.log
head -n 3 file1_scan06.log > diff_scan06.log
head -n 3 file1_scan07.log > diff_scan07.log
head -n 3 file1_scan08.log > diff_scan08.log
head -n 3 file1_scan09.log > diff_scan09.log
head -n 3 file1_scan10.log > diff_scan10.log

#do the diffs
diff --suppress-common-lines file1_scan01.log file2_scan01.log >> diff_scan01.log
diff --suppress-common-lines file1_scan02.log file2_scan02.log >> diff_scan02.log
diff --suppress-common-lines file1_scan03.log file2_scan03.log >> diff_scan03.log
diff --suppress-common-lines file1_scan04.log file2_scan04.log >> diff_scan04.log
diff --suppress-common-lines file1_scan05.log file2_scan05.log >> diff_scan05.log
diff --suppress-common-lines file1_scan06.log file2_scan06.log >> diff_scan06.log
diff --suppress-common-lines file1_scan07.log file2_scan07.log >> diff_scan07.log
diff --suppress-common-lines file1_scan08.log file2_scan08.log >> diff_scan08.log
diff --suppress-common-lines file1_scan09.log file2_scan09.log >> diff_scan09.log
diff --suppress-common-lines file1_scan10.log file2_scan10.log >> diff_scan10.log

#report if there are differences
numLines=`wc -l < diff_scan01.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan01.log"
fi
numLines=`wc -l < diff_scan02.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan02.log"
fi
numLines=`wc -l < diff_scan03.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan03.log"
fi
numLines=`wc -l < diff_scan04.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan04.log"
fi
numLines=`wc -l < diff_scan05.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan05.log"
fi
numLines=`wc -l < diff_scan06.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan06.log"
fi
numLines=`wc -l < diff_scan07.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan07.log"
fi
numLines=`wc -l < diff_scan08.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan08.log"
fi
numLines=`wc -l < diff_scan09.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan09.log"
fi
numLines=`wc -l < diff_scan10.log`
if [ $numLines -gt 3 ]
  then echo "There are differences in diff_scan10.log"
fi

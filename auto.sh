#This script automatizes the job of TAs who grade the programming task of students.
#This scipt is only to run the python programs.
#All the test cases should be defined in file in order as given below:
#FileName + counter + format
##eg input.txt input1.txt input2.txt and so on..
#All the std output will documented in Outfile defined by variable $OUTFILE
# Similarly Error message will be documented in error.err file.
#



dataFolder=data #folder name where the sub-directories containing homework files for each student contains.
OUTFILE=output.out
for dir in ./$dataFolder/*/
do
    dir=${dir%*/}
    folder=${dir##*/}
    echo `echo Student: $folder`
    counter="1"
    NAME=input
    FORMAT=.txt
    TestCaseFile="input.txt" # Name of file containging testcase
    ProgramName="pframe.py"   #file name of the programe
    ProgramFullName=`echo ./$dataFolder/$folder/$ProgramName`
    echo `echo PATH: $ProgramFullName`
    echo "________________________________________________________________________" >> $OUTFILE
    echo  $folder >>$OUTFILE
    echo "________________________________________________________________________" >> $OUTFILE
    echo Testcases running from: >>$OUTFILE
    echo Testcases running from:
    while [  -f "$TestCaseFile"  ]; do
        echo `echo $TestCaseFile :` >>$OUTFILE
        echo "|------------|" >>$OUTFILE
        python3 $ProgramFullName < $TestCaseFile >> $OUTFILE 2> "error.err" #chane the python version here
        TestCaseFile=`echo $NAME$counter$FORMAT`
         echo $TestCaseFile
        ((counter++))
    done
    echo
done

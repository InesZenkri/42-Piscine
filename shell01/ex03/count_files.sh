find . | wc -l | sed 's/ //g'

: '
find .: Searches the current directory (.) and its subdirectories for files and directories.
|: Pipes the output (list of files and directories found by find) to the next command.
wc -l: Counts the number of lines in the output received from find. This gives the total count of files and directories.
|: Pipes the count (output of wc -l) to the next command.
sed 's/ //g': Uses sed to perform a substitution operation (s/ //g) to remove all spaces in the received output.
'
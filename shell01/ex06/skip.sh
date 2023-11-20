ls -l | awk 'NR % 2 == 1'

: '
ls -l: Lists files in the current directory in long format.
|: Redirects the output of ls -l to the input of the awk command.
awk 'NR % 2 == 1': Uses awk to process the input. NR represents the record (line) number. % is the modulo operator, and NR % 2 == 1 checks if the line number is odd (NR modulo 2 equals 1). If true, awk prints the line.
'
ifconfig | grep 'ether ' | cut -b 8-24

: '
ifconfig: Displays information about network interfaces.
|: Pipes the output of ifconfig to the next command.
grep 'ether ': Filters the output to only include lines containing the word 'ether', which typically represents the MAC address in the output of ifconfig.
cut -b 8-24: Extracts characters from the 8th to the 24th position of each line, effectively isolating the MAC address from the filtered output.
'
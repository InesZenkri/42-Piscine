groups $FT_USER | tr " " "," | tr -d "\n"

: '
groups $FT_USER: This command retrieves the groups to which the user $FT_USER belongs.

tr " " ",": The first tr command replaces spaces with commas. This transforms the output of groups from a space-separated list of groups to a comma-separated list.

tr -d "\n": The second tr command removes the newline character (\n). This ensures that the output is on a single line without any line breaks.
'
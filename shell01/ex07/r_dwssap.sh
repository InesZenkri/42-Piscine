awk -F: '!/^#/ && NR % 2 == 0 {print $1}' /etc/passwd \
  | sort -r -f \
  | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR >= FT_LINE1 && NR <= FT_LINE2' \
  | paste -sd ',' - | sed 's/,$/./'

: '
awk -F: !/^#/ && NR % 2 == 0 {print $1} /etc/passwd: Filters non-comment lines and prints every other username (from even-numbered lines).
sort -r -f: Sorts the usernames in reverse order (-r) ignoring case (-f).
awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" NR >= FT_LINE1 && NR <= FT_LINE2: Selects lines within the specified range defined by FT_LINE1 and FT_LINE2.
paste -sd ',' -: Joins the usernames with commas.
sed s/,$/./: Replaces the last comma with a period.
'
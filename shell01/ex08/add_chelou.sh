echo "$FT_NBR1 + $FT_NBR2" \
  | tr "mrdoc\\?'\"" "01234" \
  | tr -d "\'" \
  | tr -d '\"' \
  | bc | tr '0123456789ABC' 'gtaio luSnemf'

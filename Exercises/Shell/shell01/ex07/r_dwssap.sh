cat /etc/passwd | grep -v '\#' | awk 'NR%2==0' | awk -v FS=':' '{print $1}' | rev | sort -r | awk -v "s=$FT_LINE1" -v "f=$FT_LINE2" "s<=NR && NR<=f" | tr '\n' ',' | sed 's/,/& /g' | sed 's/, $/./g'

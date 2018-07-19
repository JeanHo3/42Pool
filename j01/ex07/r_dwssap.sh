cat /etc/passwd | grep -v '\#' | cut -d : -f 1 | sed -n "n;p" | rev |sed -e 's/^/ /' | sort -r | sed -n "$FT_LINE1"','"$FT_LINE2"'p' | tr "\n" "," | cat -e | sed 's/,$/./' | cut -c 2- | tr -d "\n"

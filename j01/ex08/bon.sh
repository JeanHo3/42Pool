ldapsearch -xLLL uid="*" cn | grep 'cn:' | cut -c 5- | grep 'BON' | wc -l | bc

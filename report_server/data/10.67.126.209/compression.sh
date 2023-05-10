#! /bin/sh

aaa=$1
#num=`find $aaa -maxdepth 1 -mtime +5 -type d | wc -l`
#find $aaa -mtime +30 -type d | xargs -I {} tar -czPf {}.tar.gz {}
#tar -cPzf document.tar.gz
#c=$(($num-1))
#find $aaa -maxdepth 1 -mtime +5 -type d | tail -$c >> 1.txt

find $aaa -maxdepth 1 -mtime +5 -type d


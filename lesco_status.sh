#!/bin/sh
sep='|'
delay=15

setstats()
{
	time=$(date +"%a %d/%m/%Y %R")
	weather=$(curl -s wttr.in/?format="%t")
	memory=$(neofetch memory | cut -d ':' -f 2 | tr -d 'MiB')
	memory=$(python -c "print(int($memory*100))")
	stats="$sep 󰍛  $memory% $sep 󰖐   $weather $sep     $time $sep"

	xsetroot -name "$stats"
}

while true
do
	setstats
	sleep $delay
done


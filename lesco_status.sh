#!/bin/sh
sep='|'
delay=2

setstats()
{
	time=$(date +"%a %d/%m/%Y %R")
	weather=$(curl -s wttr.in/?format="%t")
	memory=$(neofetch memory | cut -d ':' -f 2 | tr -d 'MiB')
	memory=$(python -c "print(int($memory*100))")
	cpu_temp=$(sensors | grep Tctl | cut -d '+' -f 2)

	stats="$sep 󰻠  $cpu_temp $sep 󰍛  $memory% $sep 󰖐   $weather $sep     $time $sep"

	xsetroot -name "$stats"
}

while true
do
	setstats
	sleep $delay
done


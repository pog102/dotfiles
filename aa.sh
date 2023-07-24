#!/bin/sh
tr=$(transmission-remote -l| grep %)
tool=$(echo "$tr" | awk '{print $1 " " $2 " " $9 "\\n"}')
echo "$tr" |
	sed " # The letters are for sorting and will not appear.
	s/.*Stopped.*/A 󰏃/;
	s/.*Idle.*/B /;
    s/.*Seeding.*/Z 󰹢/;
	s/.*100%.*/N /;
	s/.*Uploading.*/L 󰕒/;
	s/.*%.*/M /" |
    sort -h | uniq -c 


echo "Enter The Number"
read a
fact=1
if [ $a -eq 0 ];
then
	echo "the factorial is 1"
else
	while [ $a -gt 1 ];
	 do
	 fact=$(($fact*$a))
	 a=$(($a-1))
	 done
	 echo "The Factorial is : $fact"
fi

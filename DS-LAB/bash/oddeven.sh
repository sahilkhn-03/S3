echo "Enter the Number to be checked "
read n
if [ $(($n%2)) -eq 0 ]
then
	echo "$n  is Even"
else 
 echo "$n Is Odd"
fi

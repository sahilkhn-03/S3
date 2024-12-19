echo "Enter the Number"
read a
n=$a
rev=0
while [ $n -gt 0 ];
do
	digit=$(( $n % 10 ))
	rev=$(( $rev * 10 + $digit ))
	n=$(( $n/10 ))
done
if [ $rev -eq $a ];
then
echo "$a Is Palindrome : $rev"
else
echo "$a is not palindrome"
fi

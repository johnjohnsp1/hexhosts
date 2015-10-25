hexhosts
==============

Prepare known_hosts file to oclHashcat bruteforce

user@computer:~/.ssh# ./hexhosts > hosthash.txt



Hashcat example
--------------
Generate ips-left.txt and ips-right.txt files using ip-gen.sh  
Original idea:
https://www.phillips321.co.uk/2012/04/04/cracking-an-md5-of-an-ip-address/


oclHashcat64.bin -m 160 -a 1 hosthash.txt ips-left.txt ips-right.txt --hex-salt

hexhosts
==============

Prepare known_hosts file to hashcat bruteforce
```
user@computer:~/.ssh# ./hexhosts > hash.txt
```

Hashcat example
--------------
Generate ips-left.txt and ips-right.txt files using ip-gen.sh  
Original idea:
https://www.phillips321.co.uk/2012/04/04/cracking-an-md5-of-an-ip-address/

```
oclHashcat64.bin -m 160 -a 1 hash.txt ips-left.txt ips-right.txt --hex-salt
```
cpu hashcat command is different (mask by undeath, hashcat forum)
```
hashcat-cli64.bin -a 3 -m 160 hash.txt ipv4.hcmask --hex-salt 
```


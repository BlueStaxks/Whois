from pwn import *

p=process(b"./prob")

i=0
while i<1000:
	data=p.recvuntil(b"e >> ")
	data=p.recvline()
	if(data==b"Rock\n"):
		p.sendline(str(1))
	elif(data==b"Paper\n"):
		p.sendline(str2))
	elif(data==b"Scissors\n"):
		p.sendline(str0))

	i+=1

p.interactive()
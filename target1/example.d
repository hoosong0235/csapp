
example.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <.text>:
   0:	48 c7 c7 fa 97 b9 59 	mov    $0x59b997fa,%rdi
   7:	48 c7 c4 ec 17 40 00 	mov    $0x4017ec,%rsp
   e:	c3                   	retq   
   f:	48 83 ec 28          	sub    $0x28,%rsp
  13:	48 89 e7             	mov    %rsp,%rdi
  16:	e8 00 00 00 00       	callq  0x1b
  1b:	b8 00 00 00 00       	mov    $0x0,%eax
  20:	e8 00 00 00 00       	callq  0x25
  25:	89 c2                	mov    %eax,%edx
  27:	be 88 31 40 00       	mov    $0x403188,%esi

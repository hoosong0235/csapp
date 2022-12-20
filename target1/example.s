movq $0x59b997fa, %rdi
movq $0x004017ec, %rsp
retq

sub $0x28, %rsp
mov %rsp, %rdi
callq 0x401a40

mov $0x0, %eax
callq 0x4017a8
mov %eax, %edx
mov $0x403188, %esi

mov $0x5561dc96, %rdi
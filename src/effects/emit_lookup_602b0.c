/* Provisional resource lookup. Preserve the unchecked table index and tail call; the target returns a 32-bit success value. */
#define target_at ((int (*)(int))0x8c05f87c)
int get_se_bank_resource_8c0602b0(int index) { return target_at(*(int *)((unsigned char *)0x8c2fc788+(index<<2))); }

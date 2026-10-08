/* Provisional resource lookup. Preserve the unchecked table index and tail call; the target returns a 32-bit success value. */
#define target_at ((int (*)(int))0x8c1005bc)
int emit_lookup_602b0_8c16d5bc(int index) { return target_at(*(int *)((unsigned char *)0x8c317b40+(index<<2))); }

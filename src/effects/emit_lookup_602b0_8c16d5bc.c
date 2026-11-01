/* Provisional resource lookup. Preserve the unchecked table index and tail call; the target returns a 32-bit success value. */
#define game_ADXT_StartFname_wrapper_8c1005bc ((int (*)(int))0x8c1005bc)
int quest_op_bgm_8c16d5bc(int index) { return game_ADXT_StartFname_wrapper_8c1005bc(*(int *)((unsigned char *)0x8c317b40+(index<<2))); }

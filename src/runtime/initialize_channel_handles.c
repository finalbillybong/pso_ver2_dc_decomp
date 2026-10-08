/* Provisional channel identity. Preserve byte induction and shifted offsets. */
void initialize_channel_handles(void) {
 unsigned char i;
 for(i=0;i<8;i++) *(void **)((char *)0x8c466dc4 + ((unsigned int)i << 2))=((void *(*)(unsigned int))0x8c3727a0)(i);
}

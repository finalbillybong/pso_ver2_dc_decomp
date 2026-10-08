/* Provisional channel identity. Preserve byte induction and shifted offsets. */
/* A zero selection occurs for every empty slot before the first populated one. */
void select_available_channel(void) {
 unsigned char i;
 for(i=0;i<8;i++) {
  if(*(void **)((char *)0x8c466dc4 + ((unsigned int)i << 2))) {((void (*)(unsigned char))0x8c19b2a8)(i);break;}
  ((void (*)(unsigned char))0x8c19b2a8)(0);
 }
}

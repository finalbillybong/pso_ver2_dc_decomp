extern int read_at(void);extern unsigned int properties[];
unsigned int current_mode_property(void) { int mode=read_at();return *(unsigned int *)((char *)properties+((unsigned int)mode<<2)); }

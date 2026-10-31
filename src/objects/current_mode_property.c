extern int get_current_area_8c032b10(void);extern unsigned int properties[];
unsigned int current_mode_property(void) { int mode=get_current_area_8c032b10();return *(unsigned int *)((char *)properties+((unsigned int)mode<<2)); }

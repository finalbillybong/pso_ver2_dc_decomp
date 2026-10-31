extern int get_current_area_8c032b10(void);
int current_mode_active(void) { int mode=get_current_area_8c032b10();if(mode==0 || mode==15) return 0;return 1; }

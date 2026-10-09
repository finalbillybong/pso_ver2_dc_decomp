extern int read_at(void);
int current_mode_active(void) { int mode=read_at();if(mode==0 || mode==15) return 0;return 1; }

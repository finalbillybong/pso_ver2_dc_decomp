extern unsigned int flags,first,second,saved_flags,saved_first,saved_second;
void restore_effect_color_state(void) {first=saved_first;second=saved_second;flags=saved_flags;}

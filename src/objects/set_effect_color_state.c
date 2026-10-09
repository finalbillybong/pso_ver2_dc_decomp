extern unsigned int flags,first,second,saved_flags,saved_first,saved_second;
extern void mode_at(unsigned int,unsigned int);extern void apply_at(const float *);
void set_effect_color_state(void) {float parameters[4];saved_flags=flags;saved_first=first;saved_second=second;flags=(flags&~16u)|0x820;mode_at(0,0x900);parameters[0]=0.0f;parameters[1]=1.0f;parameters[2]=parameters[3]=0.5f;apply_at(parameters);}

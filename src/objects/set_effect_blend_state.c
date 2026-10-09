extern unsigned int flags,first,second,saved_flags,saved_first,saved_second;
extern void mode_at(unsigned int,unsigned int);extern void apply_at(const float *);
void set_effect_blend_state(float value) {float parameters[4];saved_flags=flags;saved_first=first;saved_second=second;flags=(flags&~16u)|0x828;mode_at(0xff00,0x800);parameters[0]=value+-1.0f;parameters[1]=parameters[2]=parameters[3]=0.0f;apply_at(parameters);}

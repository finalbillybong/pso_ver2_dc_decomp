typedef struct Field { char unknown0[7]; signed char value; char unknown8[20]; } Field;
typedef struct Actor { char unknown0[944]; unsigned int first,second; } Actor;
typedef char check_layout[sizeof(Field)==28 && sizeof(Actor)==952 && (unsigned long)&((Field *)0)->value==7 && (unsigned long)&((Actor *)0)->first==944 && (unsigned long)&((Actor *)0)->second==948 ? 1:-1];
static inline unsigned int pack(signed char a,signed char b,signed char c,signed char d) {
    unsigned int result=0;
    result|=(unsigned char)a;
    result|=((unsigned int)(int)b<<8)&0xff00;
    result|=((unsigned int)(int)c<<16)&0xff0000;
    result|=((unsigned int)(int)d<<24)&0xff000000;
    return result;
}
void pack_actor_field_bytes(Actor *o,const Field *fields) {
    o->first=pack(fields[0].value,fields[1].value,fields[2].value,fields[3].value);
    o->second=pack(fields[4].value,fields[5].value,fields[6].value,fields[7].value);
}

typedef struct View { float value0; float value4; float value8; float value12; float value16; float value20; float value24; float value28; float value32; float value36; float value40; float value44; float value48; float value52; float value56; float value60; } View;
typedef char check_View_value0[(unsigned long)&((View *)0)->value0==0?1:-1];
typedef char check_View_value4[(unsigned long)&((View *)0)->value4==4?1:-1];
typedef char check_View_value8[(unsigned long)&((View *)0)->value8==8?1:-1];
typedef char check_View_value12[(unsigned long)&((View *)0)->value12==12?1:-1];
typedef char check_View_value16[(unsigned long)&((View *)0)->value16==16?1:-1];
typedef char check_View_value20[(unsigned long)&((View *)0)->value20==20?1:-1];
typedef char check_View_value24[(unsigned long)&((View *)0)->value24==24?1:-1];
typedef char check_View_value28[(unsigned long)&((View *)0)->value28==28?1:-1];
typedef char check_View_value32[(unsigned long)&((View *)0)->value32==32?1:-1];
typedef char check_View_value36[(unsigned long)&((View *)0)->value36==36?1:-1];
typedef char check_View_value40[(unsigned long)&((View *)0)->value40==40?1:-1];
typedef char check_View_value44[(unsigned long)&((View *)0)->value44==44?1:-1];
typedef char check_View_value48[(unsigned long)&((View *)0)->value48==48?1:-1];
typedef char check_View_value52[(unsigned long)&((View *)0)->value52==52?1:-1];
typedef char check_View_value56[(unsigned long)&((View *)0)->value56==56?1:-1];
typedef char check_View_value60[(unsigned long)&((View *)0)->value60==60?1:-1];
typedef char check_View_prefix[sizeof(View)==64?1:-1];
void set_split_texture_quad(View *o,float x,float y,float width) {
 o->value0=x*(1.0f/256.0f); o->value4=y*(1.0f/256.0f);
 o->value8=x*(1.0f/256.0f); o->value12=(y+20.0f)*(1.0f/256.0f);
 o->value16=(x+width)*(1.0f/256.0f); o->value20=y*(1.0f/256.0f);
 o->value24=(x+width)*(1.0f/256.0f); o->value28=(y+20.0f)*(1.0f/256.0f);
 o->value32=((x+48.0f)-width)*(1.0f/256.0f); o->value36=y*(1.0f/256.0f);
 o->value40=((x+48.0f)-width)*(1.0f/256.0f); o->value44=(y+20.0f)*(1.0f/256.0f);
 o->value48=(x+48.0f)*(1.0f/256.0f); o->value52=y*(1.0f/256.0f);
 o->value56=(x+48.0f)*(1.0f/256.0f); o->value60=(y+20.0f)*(1.0f/256.0f);
}

typedef struct View { char unknown0[1780]; float phase; } View;
typedef char check_phase[(unsigned long)&((View *)0)->phase==1780?1:-1];
typedef char check_prefix[sizeof(View)==1784?1:-1];
extern unsigned int *primary_colors[3];
extern unsigned int *wave_colors[10];
void update_wave_colors(const View *o) {
 float phase=o->phase;
 unsigned char value;
 unsigned int first,second;
 int i;
 if(phase>1.0f) phase=2.0f-phase;
 value=(unsigned char)(unsigned int)((phase*0.9f+0.1f)*255.0f);
 first=0xff000000|((unsigned int)value<<16)|(value>>2);
 *primary_colors[0]=first;
 *primary_colors[2]=first;
 second=0xff000000|((unsigned int)value<<16)|((unsigned int)value<<8);
 *primary_colors[1]=second;
 phase=o->phase;
 for(i=0;i<10;i++) {
  float reflected;
  phase+=0.2f;
  if(phase>2.0f) phase-=2.0f;
  reflected=phase;
  if(reflected>1.0f) reflected=2.0f-reflected;
  value=(unsigned char)(unsigned int)((reflected*0.9f+0.1f)*255.0f);
  **(unsigned int **)((char *)wave_colors+((unsigned int)i<<2))=0xff000000|((unsigned int)value<<16)|((unsigned int)value<<8);
 }
}

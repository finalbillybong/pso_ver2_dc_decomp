typedef struct Block64 {unsigned int flags;float values[4];unsigned int count;float pairs[8];unsigned short unknown56;unsigned char bytes[6];} Block64;
typedef struct View {char unknown0[52];int index;char unknown56[4];Block64 original,copies[3];float samples[256];char unknown1340[28];int selected;char unknown1372[116];float xlow,xhigh,ylow,yhigh;char unknown1504[172];int first[3];char unknown1688[96];int second[3];char unknown1796[100];int pair0,pair1;char unknown1904[184];int held[6];} View;
typedef struct Input {char unknown0[32];unsigned int held;char unknown36[4];unsigned int pressed;char unknown44[16];} Input;
extern Input inputs[];extern unsigned int masks[];
typedef char check_index[(unsigned long)&((View *)0)->index==52?1:-1];
typedef char check_original[(unsigned long)&((View *)0)->original==60?1:-1];
typedef char check_copies[(unsigned long)&((View *)0)->copies==124?1:-1];
typedef char check_samples[(unsigned long)&((View *)0)->samples==316?1:-1];
typedef char check_selected[(unsigned long)&((View *)0)->selected==1368?1:-1];
typedef char check_xlow[(unsigned long)&((View *)0)->xlow==1488?1:-1];
typedef char check_xhigh[(unsigned long)&((View *)0)->xhigh==1492?1:-1];
typedef char check_ylow[(unsigned long)&((View *)0)->ylow==1496?1:-1];
typedef char check_yhigh[(unsigned long)&((View *)0)->yhigh==1500?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==1676?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==1784?1:-1];
typedef char check_pair0[(unsigned long)&((View *)0)->pair0==1896?1:-1];
typedef char check_pair1[(unsigned long)&((View *)0)->pair1==1900?1:-1];
typedef char check_held[(unsigned long)&((View *)0)->held==2088?1:-1];
typedef char check_block[sizeof(Block64)==64?1:-1];typedef char check_input[sizeof(Input)==60&&(unsigned long)&((Input *)0)->held==32&&(unsigned long)&((Input *)0)->pressed==40?1:-1];
static inline unsigned char read_byte(unsigned char *p) {return *p;}
static inline int input_available(View *o) {return (inputs[o->index].held&512)==0;}
static inline int active_button(View *o,unsigned int index) {return (inputs[o->index].pressed&*(unsigned int *)((char *)masks+(index<<2)))!=0||*(int *)((char *)o->held+(index<<2))>=5;}
extern void generate_at(View *,Block64 *,float *);
void prepare_scene_control_blocks(View *o) {unsigned int bits=o->original.flags&7;o->selected=0;if(bits) {while((bits&1)==0) {o->selected++;bits>>=1;}}generate_at(o,&o->original,o->samples);o->copies[0]=o->original;o->copies[1]=o->original;o->copies[2]=o->original;o->copies[0].flags=1;o->copies[1].flags=2;{int i;for(i=0;i<3;i++) {*(int *)((char *)o->first+((unsigned int)i<<2))=read_byte(o->copies[1].bytes+((unsigned int)i<<1));*(int *)((char *)o->second+((unsigned int)i<<2))=read_byte(o->copies[1].bytes+1+((unsigned int)i<<1));}}o->copies[2].flags=4;o->pair0=read_byte(&o->copies[2].bytes[0]);o->pair1=read_byte(&o->copies[2].bytes[1]);}

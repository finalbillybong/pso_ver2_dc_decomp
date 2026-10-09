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
extern void direct_at(Block64 *,float *);extern float sine_at(int);
void generate_scene_control_samples(View *o,Block64 *block,float *samples) {if(block->flags&1) {direct_at(block,samples);}else if(block->flags&2) {{int i;for(i=0;i<256;++i) *(float *)((char *)samples+((unsigned int)i<<2))=0.0f;}{unsigned int i;for(i=0;i<block->count;++i) {float amplitude=*(float *)((char *)block->pairs+((i+1)<<3))*0.5f;int phase=((int)read_byte(block->bytes+(i<<1))<<9)-16384;int step=(int)(((float)read_byte(block->bytes+1+(i<<1))/32.0f*65536.0f)/128.0f);int j;for(j=127;j>=0;--j) {float *p=(float *)((char *)samples+((unsigned int)j<<2));*p+=amplitude*(sine_at(phase)+1.0f);phase+=step;}}}}else if(block->flags&4) {{int i;for(i=0;i<256;++i) *(float *)((char *)samples+((unsigned int)i<<2))=0.0f;}{float amplitude=block->pairs[4]*0.5f;float baseline=block->pairs[2];int on=read_byte(&block->bytes[1]);int step=65536/on;int off=read_byte(&block->bytes[0]);int state=0;int count=0;int j;for(j=127;j>=0;--j) {float *p=(float *)((char *)samples+((unsigned int)j<<2));if(state==0) {*p=amplitude*(sine_at(count*step-16384)+1.0f)+baseline;if(++count>=on) {count=0;state=1;}}else {*p=baseline;if(++count>=off) {count=0;state=0;}}}}}}

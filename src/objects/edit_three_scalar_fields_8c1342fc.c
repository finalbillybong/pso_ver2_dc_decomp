typedef struct Input { char unknown0[32]; int held,unknown36,pressed; char unknown44[16]; } Input;
typedef struct Object { char unknown0[52]; int player; char unknown56[28]; float first,second,third; } Object;
typedef char check_layout[sizeof(Input)==60 && sizeof(Object)==96 && (unsigned long)&((Input *)0)->held==32 && (unsigned long)&((Input *)0)->pressed==40 && (unsigned long)&((Object *)0)->player==52 && (unsigned long)&((Object *)0)->first==84 && (unsigned long)&((Object *)0)->second==88 && (unsigned long)&((Object *)0)->third==92 ? 1:-1];
extern Input input[];
extern signed char initialized;
extern int axis;
extern char format[];
extern int repeat_button(void *,int,int,int);
extern void set_text_size(int),set_text_color(unsigned int),draw_text(int,const char *,...);
void edit_three_scalar_fields_8c1342fc(Object *o) {
    float values[3];
    if(!initialized) { axis=0; initialized=1; }
    values[0]=o->first; values[1]=o->second; values[2]=o->third;
    switch(axis) {
    case 0:
        if(repeat_button(&input[o->player].held,128,6,1)) values[0]+=0.01f;
        if(repeat_button(&input[o->player].held,64,6,1)) values[0]-=0.01f;
        if(*(int *)((char *)&input[0].pressed+o->player*60)&1024) values[0]=0.0f;
        break;
    case 1:
        if(repeat_button(&input[o->player].held,128,6,1)) values[1]+=0.01f;
        if(repeat_button(&input[o->player].held,64,6,1)) values[1]-=0.01f;
        if(*(int *)((char *)&input[0].pressed+o->player*60)&1024) values[1]=0.0f;
        break;
    case 2:
        if(repeat_button(&input[o->player].held,128,6,1)) values[2]+=0.01f;
        if(repeat_button(&input[o->player].held,64,6,1)) values[2]-=0.01f;
        if(*(int *)((char *)&input[0].pressed+o->player*60)&1024) values[2]=0.0f;
        break;
    }
    if(values[0]<0.0f) values[0]=0.0f;
    if(values[0]>1.0f) values[0]=1.0f;
    if(values[1]<0.0f) values[1]=0.0f;
    if(values[1]>1.0f) values[1]=1.0f;
    if(values[2]<0.0f) values[2]=0.0f;
    if(values[2]>1.0f) values[2]=1.0f;
    o->first=values[0]; o->second=values[1]; o->third=values[2];
    if(repeat_button(&input[o->player].held,32,6,1)) ++axis;
    if(repeat_button(&input[o->player].held,16,6,1)) --axis;
    if(axis<0) axis=2;
    if(axis>2) axis=0;
    set_text_size(14);
    set_text_color(0xff00ffff);
    { int selected=axis; draw_text((selected+25)|0x150000,format+13,*(float *)((char *)values+((unsigned int)selected<<2))); }
    set_text_color(0xfff0f0f0);
}

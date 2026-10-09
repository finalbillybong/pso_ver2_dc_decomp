typedef struct Object { char unknown0[160]; int selected; char unknown164[4]; int digit; char unknown172[44]; unsigned int first,second,third; } Object;
typedef char check_layout[sizeof(Object)==228 && (unsigned long)&((Object *)0)->selected==160 && (unsigned long)&((Object *)0)->digit==168 && (unsigned long)&((Object *)0)->first==216 && (unsigned long)&((Object *)0)->second==220 && (unsigned long)&((Object *)0)->third==224 ? 1:-1];
extern char format[];
extern void color(unsigned int),draw(int,const char *,...),edit_word(Object *,unsigned int *,int *,int,int,int);
void edit_three_word_fields(Object *o) {
    if(o->selected==3) color(0xffffff00);else color(0xfff0f0f0);
    draw(0x10016,format+420,o->first);
    if(o->selected==4) color(0xffffff00);else color(0xfff0f0f0);
    draw(0x10017,format+434,o->second);
    if(o->selected==5) color(0xffffff00);else color(0xfff0f0f0);
    draw(0x10018,format+448,o->third);
    if(o->selected==3) edit_word(o,&o->first,&o->digit,17,22,7);
    if(o->selected==4) edit_word(o,&o->second,&o->digit,17,23,7);
    if(o->selected==5) edit_word(o,&o->third,&o->digit,17,24,7);
}

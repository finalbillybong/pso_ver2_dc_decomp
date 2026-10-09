typedef struct Text { unsigned int flags; int unknown4; float size; char unknown12[12]; int parameter; char first,second; char unknown30[2]; char *text; char unknown36[12]; unsigned int color; } Text;
typedef char check_layout[sizeof(Text)==52 && (unsigned long)&((Text *)0)->size==8 && (unsigned long)&((Text *)0)->parameter==24 && (unsigned long)&((Text *)0)->first==28 && (unsigned long)&((Text *)0)->second==29 && (unsigned long)&((Text *)0)->text==32 && (unsigned long)&((Text *)0)->color==48 ? 1:-1];
extern char text_data[];
extern int length(const char *);
extern void *allocate(int);
extern void release(void *),copy(void *,const void *,int);
static inline void set_text(Text *o,char *source) {
    if(o->text && (o->flags&8)) { o->flags&=~8;release(o->text); }
    { char *result;
      if(source) {
        int size=length(source);
        result=allocate(size+1);
        copy(result,source,size+1);
        o->flags|=8;
      } else result=source;
      o->text=result;
    }
}
void initialize_text_style(Text *o,int parameter) {
    o->size=11.0f;o->first=45;o->second=45;
    set_text(o,text_data+16);
    o->color=0xff686868;
    o->parameter=parameter;
    o->flags|=0xc5;
}

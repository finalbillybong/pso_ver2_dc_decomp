typedef struct Descriptor { char title[18],description[34],application[16]; void *palette,*icons; unsigned short icon_count,icon_speed; void *eyecatch; unsigned short eyecatch_type; unsigned short unknown86; void *payload; int payload_size; } Descriptor;
typedef struct Object { char unknown0[84]; int handle; void *buffer; int blocks; char unknown96[52]; int state; } Object;
typedef struct Context { char unknown0[16]; char description[36]; int size; void *payload; } Context;
typedef char check_layout[sizeof(Descriptor)==96 && sizeof(Object)==152 && sizeof(Context)==60 && (unsigned long)&((Descriptor *)0)->description==18 && (unsigned long)&((Descriptor *)0)->application==52 && (unsigned long)&((Descriptor *)0)->palette==68 && (unsigned long)&((Descriptor *)0)->icons==72 && (unsigned long)&((Descriptor *)0)->icon_count==76 && (unsigned long)&((Descriptor *)0)->icon_speed==78 && (unsigned long)&((Descriptor *)0)->eyecatch==80 && (unsigned long)&((Descriptor *)0)->eyecatch_type==84 && (unsigned long)&((Descriptor *)0)->payload==88 && (unsigned long)&((Descriptor *)0)->payload_size==92 && (unsigned long)&((Object *)0)->handle==84 && (unsigned long)&((Object *)0)->buffer==88 && (unsigned long)&((Object *)0)->blocks==92 && (unsigned long)&((Object *)0)->state==148 && (unsigned long)&((Context *)0)->size==52 && (unsigned long)&((Context *)0)->payload==56 ? 1:-1];
extern Context context;
extern char title[],application[],palette[],icons[];
extern int handle_busy(int),build_package(void *,Descriptor *);
extern void release(void *);
extern void *allocate(unsigned int),*fill(void *,int,unsigned int),*copy_bytes(void *,const void *,unsigned int);
extern char *copy_text(char *,const char *);
void prepare_package_descriptor(Object *o) {
    Descriptor d;
    if(o->handle>=0 && !handle_busy(o->handle)) {
        if(o->blocks>0) {
            if(o->buffer) {release(o->buffer);o->buffer=0;}
            o->buffer=allocate((unsigned int)o->blocks<<9);
            if(o->buffer) {
                int result;
                fill(&d,0,96);
                copy_text(d.title,title);
                copy_text(d.description,context.description);
                copy_bytes(d.application,application,16);
                d.palette=palette;d.icons=icons;d.icon_count=1;d.icon_speed=1;d.eyecatch=0;d.eyecatch_type=0;d.payload=context.payload;d.payload_size=context.size;
                result=build_package(o->buffer,&d);
                switch(result) {case -256: o->state=17;break;default:if(result!=o->blocks)o->blocks=result;o->state=9;break;}
            } else o->state=17;
        } else o->state=17;
    }
}

typedef struct Descriptor { unsigned int flags; void *resource; int mode, count; void *coordinates; char unknown20[12]; unsigned int resource_index, kind; } Descriptor;
typedef struct Quad { float x0,y0,x1,y1; } Quad;
typedef char check_layout[sizeof(Descriptor)==40 && sizeof(Quad)==16 && (unsigned long)&((Descriptor *)0)->resource==4 && (unsigned long)&((Descriptor *)0)->count==12 && (unsigned long)&((Descriptor *)0)->coordinates==16 && (unsigned long)&((Descriptor *)0)->resource_index==32 && (unsigned long)&((Descriptor *)0)->kind==36 ? 1:-1];
extern Descriptor descriptors[];
extern void *instances[], *resources[], *heap, *parent;
extern Quad quads[];
extern void *allocate_at(void *,unsigned int);
extern void initialize0_at(void *,void *,Descriptor *),initialize1_at(void *,void *,Descriptor *),initialize2_at(void *,void *,Descriptor *),initialize3_at(void *,void *,Descriptor *),initialize4_at(void *,void *,Descriptor *),append_at(void *,void *);
void initialize_descriptor_tables(void) {
    Quad *p=quads;
    float x,old_y;
    float y=0.0f;
    int row;
    for(row=0;row<4;++row) {
        int column;
        old_y=y;
        x=0.0f;
        y+=0.25f;
        for(column=0;column<4;++column) {
            p->x0=x;
            p->y0=old_y;
            x+=0.25f;
            p->x1=x;
            p->y1=y;
            ++p;
        }
    }
    {
        int i;
        for(i=0;i<110;++i) {
            int offset=i*40;
            *(void **)((char *)&descriptors->resource+offset)=*(void **)((char *)resources+(*(unsigned int *)((char *)&descriptors->resource_index+offset)<<2));
            *(void **)((char *)instances+((unsigned int)i<<2))=0;
        }
    }
}

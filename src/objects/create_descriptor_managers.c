typedef struct Descriptor { unsigned int flags; void *resource; int mode, count; void *coordinates; char unknown20[12]; unsigned int resource_index, kind; } Descriptor;
typedef struct Quad { float x0,y0,x1,y1; } Quad;
typedef char check_layout[sizeof(Descriptor)==40 && sizeof(Quad)==16 && (unsigned long)&((Descriptor *)0)->resource==4 && (unsigned long)&((Descriptor *)0)->count==12 && (unsigned long)&((Descriptor *)0)->coordinates==16 && (unsigned long)&((Descriptor *)0)->resource_index==32 && (unsigned long)&((Descriptor *)0)->kind==36 ? 1:-1];
extern Descriptor descriptors[];
extern void *instances[], *resources[], *heap, *parent;
extern Quad quads[];
extern void *allocate_at(void *,unsigned int);
extern void initialize0_at(void *,void *,Descriptor *),initialize1_at(void *,void *,Descriptor *),initialize2_at(void *,void *,Descriptor *),initialize3_at(void *,void *,Descriptor *),initialize4_at(void *,void *,Descriptor *),append_at(void *,void *);
void create_descriptor_managers(void) {
    Descriptor *descriptor;
    int i;
    void *object;
    for(i=0;i<110;++i) {
        descriptor=(Descriptor *)((char *)descriptors+i*40);
        switch (*(unsigned int *)((char *)&descriptors->kind+i*40)) {
        case 0:
            object=allocate_at(heap,48);
            if(object) initialize0_at(object,parent,descriptor);
            break;
        case 1:
            object=allocate_at(heap,48);
            if(object) initialize1_at(object,parent,descriptor);
            break;
        case 2:
            object=allocate_at(heap,48);
            if(object) initialize2_at(object,parent,descriptor);
            break;
        case 3:
            object=allocate_at(heap,48);
            if(object) initialize3_at(object,parent,descriptor);
            break;
        case 4:
            object=allocate_at(heap,48);
            if(object) initialize4_at(object,parent,descriptor);
            break;
        }
        *(void **)((char *)instances+((unsigned int)i<<2))=object;
    }
}

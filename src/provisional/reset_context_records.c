typedef struct Record { unsigned short id; char unknown2[18]; } Record;
typedef struct Frame { unsigned short id,unknown2; short value,unknown6; int duration; short index,unknown14; } Frame;
typedef struct EntryA { char unknown0[8]; Record record; Frame frame; unsigned int flags; } EntryA;
typedef struct EntryB { char unknown0[20]; Record record; Frame frame; unsigned int flags; } EntryB;
typedef struct Group { char unknown0[32]; EntryA *a; void *unknown36; EntryB *b; int count_a,unknown48,count_b,unknown56; } Group;
typedef struct Context { short count; char unknown2[6]; Group *groups; void *item; } Context;
typedef char check_layout[sizeof(Record)==20 && sizeof(Frame)==16 && sizeof(EntryA)==48 && sizeof(EntryB)==60 && sizeof(Group)==60 && sizeof(Context)==16 && (unsigned long)&((Frame *)0)->value==4 && (unsigned long)&((Frame *)0)->duration==8 && (unsigned long)&((Frame *)0)->index==12 && (unsigned long)&((EntryA *)0)->record==8 && (unsigned long)&((EntryA *)0)->frame==28 && (unsigned long)&((EntryA *)0)->flags==44 && (unsigned long)&((EntryB *)0)->record==20 && (unsigned long)&((EntryB *)0)->frame==40 && (unsigned long)&((EntryB *)0)->flags==56 && (unsigned long)&((Group *)0)->a==32 && (unsigned long)&((Group *)0)->b==40 && (unsigned long)&((Group *)0)->count_a==44 && (unsigned long)&((Group *)0)->count_b==52 && (unsigned long)&((Context *)0)->groups==8 ? 1:-1];
extern short *table;
extern Context *context;
extern int load_at(void *,Record *),frame_at(void *,Frame *);
void reset_context_records(void *o) {
    Group *group;
    int i;
    if(table) {
        if(!context) return;
        group=context->groups;
        for(i=0;i<context->count;++i,++group) {
            EntryA *a=group->a;
            int j;
            for(j=0;j<group->count_a;++j,++a) {
                if(a->flags&0x400) { if(!load_at(o,&a->record)) a->flags&=~0x400; }
                if(a->flags&0x800) { if(!frame_at(o,&a->frame)) a->flags&=~0x800; }
            }
            {
                EntryB *b=group->b;
                int k;
                for(k=0;k<group->count_b;++k,++b) {
                    if(b->flags&0x400) { if(!load_at(o,&b->record)) b->flags&=~0x400; }
                    if(b->flags&0x800) { if(!frame_at(o,&b->frame)) b->flags&=~0x800; }
                }
            }
        }
    }
}

typedef struct Record { unsigned short id,unknown2; unsigned int unknown4[4]; } Record;
typedef struct Frame { unsigned short id,unknown2; short value,unknown6; int duration; short index,unknown14; } Frame;
typedef struct EntryA { char unknown0[8]; Record record; Frame frame; unsigned int flags; } EntryA;
typedef struct EntryB { char unknown0[20]; Record record; Frame frame; unsigned int flags; } EntryB;
typedef struct Group { char unknown0[32]; EntryA *a; void *unknown36; EntryB *b; int count_a,unknown48,count_b,unknown56; } Group;
typedef struct Context { short count; char unknown2[6]; Group *groups; void *item; } Context;
typedef char check_layout[sizeof(Record)==20 && sizeof(Frame)==16 && sizeof(EntryA)==48 && sizeof(EntryB)==60 && sizeof(Group)==60 && sizeof(Context)==16 && (unsigned long)&((Frame *)0)->value==4 && (unsigned long)&((Frame *)0)->duration==8 && (unsigned long)&((Frame *)0)->index==12 && (unsigned long)&((EntryA *)0)->record==8 && (unsigned long)&((EntryA *)0)->frame==28 && (unsigned long)&((EntryA *)0)->flags==44 && (unsigned long)&((EntryB *)0)->record==20 && (unsigned long)&((EntryB *)0)->frame==40 && (unsigned long)&((EntryB *)0)->flags==56 && (unsigned long)&((Group *)0)->a==32 && (unsigned long)&((Group *)0)->b==40 && (unsigned long)&((Group *)0)->count_a==44 && (unsigned long)&((Group *)0)->count_b==52 && (unsigned long)&((Context *)0)->groups==8 ? 1:-1];
extern short *table;
extern Context *context;
extern int load_at(void *,Record *),frame_at(void *,Frame *);
int load_control_record(void *unused,Record *target) {
    short *p=table;
    short count=0;
    Record *entry=0;
    while(*p!=-1) {
        if(*p&1) { count=p[2]; entry=(Record *)(p+4); break; }
        else if(*p&2) p=(short *)((char *)p+((unsigned int)(p[1]/2+2)<<1));
        else return 0;
    }
    while(count>0) {
        if(entry->id==target->id) { *target=*entry; return 1; }
        ++entry;
        --count;
    }
    return 0;
}

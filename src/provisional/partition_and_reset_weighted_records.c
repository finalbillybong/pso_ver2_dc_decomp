typedef struct Record { unsigned short id,unknown2; float weight; } Record;
typedef struct Collection { char unknown0[28]; float value; char unknown32[36]; int count; Record records[10]; } Collection;
typedef char check_layout[sizeof(Record)==8 && sizeof(Collection)==152 && (unsigned long)&((Record *)0)->weight==4 && (unsigned long)&((Collection *)0)->value==28 && (unsigned long)&((Collection *)0)->count==68 && (unsigned long)&((Collection *)0)->records==72 ? 1:-1];
static inline void swap(Record *records,int first,int second) {
    Record temporary=*(Record *)((char *)records+((unsigned int)first<<3));
    *(Record *)((char *)records+((unsigned int)first<<3))=*(Record *)((char *)records+((unsigned int)second<<3));
    *(Record *)((char *)records+((unsigned int)second<<3))=temporary;
}
int partition_weighted_records(void *unused,Record *records,int first,int last) {
    float pivot=*(float *)((char *)&records[0].weight+((unsigned int)last<<3));
    int end=last;
    --first;
    for(;;) {
        do { ++first; } while(*(float *)((char *)&records[0].weight+((unsigned int)first<<3))<pivot);
        do { --end; } while(end>first && *(float *)((char *)&records[0].weight+((unsigned int)end<<3))>pivot);
        if(first>=end) break;
        swap(records,first,end);
    }
    swap(records,first,last);
    return first;
}
void reset_weighted_records(Collection *o) {
    int i;
    o->count=0;
    o->value=0.0f;
    for(i=0;i<10;++i) { *(float *)((char *)&o->records[0].weight+((unsigned int)i<<3))=0.0f; *(unsigned short *)((char *)&o->records[0].id+((unsigned int)i<<3))=0xffff; }
}

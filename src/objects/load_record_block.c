typedef struct Record {short kind; unsigned short flags; char unknown4[64];} Record;
typedef char check_layout[sizeof(Record)==68 && (unsigned long)&((Record *)0)->flags==2 ? 1:-1];
extern char extensions[];
extern char *temporary,*destination;
extern int capacity,counts[];
extern void change_extension(char *,const char *,const char *);
extern int load(const char *,void *);
extern void *copy(void *,const void *,unsigned int);
int load_record_block(int group,const char *name) {
    char filename[32];
    int length,count,i;
    Record *record;
    change_extension(filename,name,extensions+35);
    length=load(filename,temporary);
    if(length<0)return 0;
    if(length>capacity)return 0;
    copy(destination,temporary,length);
    count=(unsigned int)length/sizeof(Record);
    record=(Record *)destination;
    for(i=0;i<count;i++,record++)record->flags=0;
    *(int *)((char *)counts+((unsigned int)group<<2))=count;
    destination+=length;
    return 1;
}

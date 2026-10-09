typedef struct Resource {const char *first,*second; int unknown8;} Resource;
typedef struct List {Resource *items; int count;} List;
typedef struct Group {List *items; int count;} Group;
typedef char check_layout[sizeof(Resource)==12 && sizeof(List)==8 && sizeof(Group)==8 && (unsigned long)&((Resource *)0)->second==4 && (unsigned long)&((List *)0)->count==4 && (unsigned long)&((Group *)0)->count==4 ? 1:-1];
extern Group *groups;
extern char extensions[];
extern int special,alternate,capacity,counts[];
extern char *temporary,*destination;
extern void log_error(...),change_extension(char *,const char *,const char *);
extern int current_area(void),load(const char *,void *),existing_count(void);
extern void *copy(void *,const void *,unsigned int);
int load_indexed_record_block(int group,int list,int item) {
    char filename[32];
    const char *name;
    char *source;
    int length,i,enabled;
    unsigned int total,count;
    List *lists=*(List **)((char *)groups+((unsigned int)group<<3));
    Resource *items;
    if(!lists || list>*(int *)((char *)&groups[0].count+((unsigned int)group<<3))-1) {log_error(extensions+4);return 0;}
    items=*(Resource **)((char *)lists+((unsigned int)list<<3));
    if(!items || item>*(int *)((char *)&lists[0].count+((unsigned int)list<<3))-1) {log_error(extensions+4);return 0;}
    name=items[item].first;
    if(current_area()==16 && group==0) {
        enabled=(special!=0);
        if(enabled)change_extension(filename,name,extensions+18);
        else if(alternate)change_extension(filename,name,extensions+27);
        else change_extension(filename,name,extensions+35);
    } else change_extension(filename,name,extensions+35);
    length=load(filename,temporary);
    if(length<0)return 0;
    if(length>capacity)return 0;
    source=temporary;
    total=0;
    for(i=0;i<18;i++)total+=*(int *)((char *)counts+((unsigned int)i<<2));
    count=(unsigned int)length/68;
    total+=count;
    if(total<=2976) {
        copy(destination+existing_count()*68,source,length);
        *(int *)((char *)counts+((unsigned int)group<<2))=count;
    }
    return 1;
}

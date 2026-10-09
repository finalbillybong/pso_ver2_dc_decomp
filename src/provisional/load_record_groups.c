typedef struct Selection { int first,second; } Selection;
typedef char check_layout[sizeof(Selection)==8 && (unsigned long)&((Selection *)0)->second==4 ? 1:-1];
extern Selection selections[];
extern int load(int,int,int);
extern void finish(int),clear(void);
extern int added_count,next_id,group_counts[];
extern short total_count;
extern int saved_id;
void load_record_groups(void) {
    int i,total;
    for(i=0;i<16;i++) {
        if(load(i,*(int *)((char *)&selections[0].first+((unsigned int)i<<3)),*(int *)((char *)&selections[0].second+((unsigned int)i<<3))))finish(i);
    }
    clear();
    total_count+=added_count;
    saved_id=next_id;
    total=0;
    for(i=0;i<18;i++)total+=*(int *)((char *)group_counts+((unsigned int)i<<2));
}

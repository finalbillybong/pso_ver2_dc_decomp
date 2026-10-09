typedef struct Record { unsigned int value; float weight; } Record;
typedef char check_layout[sizeof(Record)==8 && (unsigned long)&((Record *)0)->weight==4 ? 1:-1];
extern int partition(void *,Record *,int,int);
void sort_weighted_records(void *o,Record *records,int first,int last) {
    if(first<last) {
        int pivot=partition(o,records,first,last);
        sort_weighted_records(o,records,first,pivot-1);
        sort_weighted_records(o,records,pivot+1,last);
    }
}

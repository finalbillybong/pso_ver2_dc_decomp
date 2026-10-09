typedef struct Record { unsigned int words[11]; } Record;
typedef struct View { char unknown0[220]; Record *records; int count; } View;
typedef char check_layout[sizeof(Record) == 44 && (unsigned long)&((View *)0)->records == 220 && (unsigned long)&((View *)0)->count == 224 ? 1 : -1];
extern void *allocate_at(unsigned int);
extern void finish_at(View *);
Record *copy_actor_records(View *o, Record *source, int count) {
    if (!o->records) {
        int i;
        o->count = count;
        o->records = (Record *)allocate_at(o->count * sizeof(Record));
        for (i = 0; i < o->count; ++i) {
            o->records[i] = *source++;
        }
        finish_at(o);
    }
    return o->records;
}

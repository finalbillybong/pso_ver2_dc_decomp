typedef struct Record {int type;char payload[60];} Record;
typedef char check_payload[(unsigned long)&((Record *)0)->payload==4?1:-1];
typedef char check_record[sizeof(Record)==64?1:-1];
extern char *owner;
static inline Record *entry(int index) {return (Record *)(owner+3212+((unsigned int)index<<6));}
extern int process_at(Record *);
int process_indexed_effect_record(int index) {return process_at(entry(index));}

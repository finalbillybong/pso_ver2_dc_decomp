typedef struct Record {int type;char payload[60];} Record;
typedef char check_payload[(unsigned long)&((Record *)0)->payload==4?1:-1];
typedef char check_record[sizeof(Record)==64?1:-1];
extern char *owner;
static inline Record *entry(int index) {return (Record *)(owner+3212+((unsigned int)index<<6));}
int effect_record_active(int index) {return entry(index)->type!=0;}

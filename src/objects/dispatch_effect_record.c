typedef struct Record {int type;char payload[60];} Record;
typedef char check_payload[(unsigned long)&((Record *)0)->payload==4?1:-1];
typedef char check_record[sizeof(Record)==64?1:-1];
extern char *owner;
static inline Record *entry(int index) {return (Record *)(owner+3212+((unsigned int)index<<6));}
extern void first_at(void *),second_at(void *),third_at(void *);
void dispatch_effect_record(Record *record) {switch(record->type) {case 0:break;case 1:first_at(record->payload);break;case 2:second_at(record->payload);break;case 3:third_at(record->payload);break;}}

typedef struct Record24 {signed char tag;char unknown1[3];unsigned int words[5];} Record24;
typedef struct Descriptor24 {signed char tag;char unknown1[19];const Record24 *record;} Descriptor24;
typedef struct Descriptor20 {signed char tag;char unknown1[19];} Descriptor20;
typedef struct Record16 {unsigned int words[4];} Record16;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;unsigned int field32,field36,field40,field44,field48;void *parent;const Descriptor24 *descriptors24;const Descriptor20 *descriptors20;Record24 *records24;Record16 *records16,*optional16;} View;
typedef char check_record24[sizeof(Record24)==24?1:-1];
typedef char check_descriptor24[sizeof(Descriptor24)==24?1:-1];
typedef char check_descriptor_record[(unsigned long)&((Descriptor24 *)0)->record==20?1:-1];
typedef char check_descriptor20[sizeof(Descriptor20)==20?1:-1];
typedef char check_record16[sizeof(Record16)==16?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_field32[(unsigned long)&((View *)0)->field32==32?1:-1];
typedef char check_parent[(unsigned long)&((View *)0)->parent==52?1:-1];
typedef char check_descriptors24[(unsigned long)&((View *)0)->descriptors24==56?1:-1];
typedef char check_descriptors20[(unsigned long)&((View *)0)->descriptors20==60?1:-1];
typedef char check_records24[(unsigned long)&((View *)0)->records24==64?1:-1];
typedef char check_records16[(unsigned long)&((View *)0)->records16==68?1:-1];
typedef char check_optional16[(unsigned long)&((View *)0)->optional16==72?1:-1];
extern void base_at(View *,void *);extern void *base_name,*derived_name;
extern void *allocate_at(unsigned int);extern Record16 default16,optional_default;
extern void setup_at(View *,Record24 *,Record16 *,Record16 *);
View *initialize_record_owner(View *o,void *parent,const Descriptor24 *descriptors24,const Descriptor20 *descriptors20) {
 View **home=&o;int count24,count20;
 {View *current=o;base_at(current,parent);current->dispatch=(void *)0x8c266314;current->name=base_name;current->size=52;current->field32=0;current->field36=0;current->field40=0;current->field44=0;current->field48=0;}
 o->dispatch=(void *)0x8c2662f8;o->name=derived_name;o->size=76;o->parent=parent;o->descriptors24=descriptors24;o->descriptors20=descriptors20;
 count24=0;count20=0;
 {View *current=o;const Descriptor24 *p=current->descriptors24;const Descriptor20 *q;while(p->tag>=0) {++p;++count24;}q=current->descriptors20;if(q) while(q->tag>=0) {++q;++count20;}}
 o->records24=(Record24 *)allocate_at((count24+1)*24);o->records16=(Record16 *)allocate_at(count24*16);
 if(count20==0) o->optional16=0;else o->optional16=(Record16 *)allocate_at((count20+1)*16);
 {View *current=o;const Descriptor24 *p=current->descriptors24;Record24 *destination=current->records24;Record16 *state=current->records16;
  while(p->tag>=0) {*destination=*p->record;*state=default16;++p;++destination;++state;}destination->tag=-1;
 }
 {View *current=o;Record16 *state=current->optional16;if(state) {const Descriptor20 *p=current->descriptors20;while(p->tag>=0) {*state=optional_default;++p;++state;}*state=optional_default;}}
 {View *current=o;setup_at(current,current->records24,current->records16,current->optional16);}
 return o;
}

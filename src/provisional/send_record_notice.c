typedef struct Pair {short first,second;} Pair;
typedef struct Child {char unknown0[4]; short index;} Child;
typedef struct Object {char unknown0[32]; short id; char unknown34[98]; Child *child;} Object;
typedef struct Packet {unsigned char kind,length; short id; int first,index;} Packet;
typedef char check_layout[sizeof(Pair)==4 && sizeof(Child)==6 && sizeof(Object)==136 && sizeof(Packet)==12 && (unsigned long)&((Child *)0)->index==4 && (unsigned long)&((Object *)0)->id==32 && (unsigned long)&((Object *)0)->child==132 && (unsigned long)&((Packet *)0)->length==1 && (unsigned long)&((Packet *)0)->id==2 && (unsigned long)&((Packet *)0)->first==4 && (unsigned long)&((Packet *)0)->index==8 ? 1:-1];
extern Pair *records;
extern void notify(Packet *);
void send_record_notice(Object *o,Pair *input) {
    Packet packet;
    Pair pair;
    if(input) pair=*input;
    else if(o->child) {
        int index=o->child->index;
        if(index<0 || index>2975) {} else {
            Pair *p=(Pair *)((char *)records+((unsigned int)index<<2));
            pair=*p;
        }
    }
    { Child *child=o->child;
    if(child) {
        packet.kind=11;packet.length=3;packet.id=o->id;
        packet.first=pair.first;packet.index=child->index;
        notify(&packet);
    }}
}

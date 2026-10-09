typedef struct Object {char unknown0[36]; int state; char unknown40[4]; void *child; char unknown48[4]; void *resource;} Object;
typedef char check_layout[sizeof(Object)==56 && (unsigned long)&((Object *)0)->state==36 && (unsigned long)&((Object *)0)->child==44 && (unsigned long)&((Object *)0)->resource==52 ? 1:-1];
extern void *heap;
extern void *configure(float *,float *);
extern void mode(int,int);
extern void *allocate(void *,unsigned int),*construct(void *),*load(int);
void start_positioned_view_8c112b10(Object *o) {
    float position[2];
    float size[2];
    void *child;
    position[0]=18.0f;position[1]=355.0f;
    size[0]=342.0f;size[1]=90.0f;
    configure(position,size);
    mode(45,1);
    child=allocate(heap,112);
    if(child)construct(child);
    o->child=child;
    o->state=2;
    o->resource=load(1);
}

#include "src/include/object_vtable.h"
#include "src/include/classes/TObjCityDoor_Warp.h"
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct TObjCityDoor_Warp_pf0 TObjCityDoor_Warp_pf0;
typedef struct Block_frame_4 {
    char unknown0[0xc];
    float f0c;
    float f10;
    char unknown14[0x18];
} Block_frame_4;
struct Frame {
    Block_frame_4 f04;
};
struct TObjCityDoor_Warp_pf0 {
    char unknown0[0xc];
    float f0c;
    float f10;
};
extern "C" void operation_8c051eb8(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" TObjCityDoor_Warp *operation_8c1c16dc(TObjCityDoor_Warp *o, int a1, int a2, int a3)
{
    Frame frame;
    TObjCityDoor_Warp **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275b18;
    o->v6(a2);
    o->fe4 = 0;
    o->fe8 = 0.0f;
    o->fec = 0.0f;
    o->ff0 = (TObjCityDoor_Warp_pf0 *)a3;
    *(Block44 *)&(&frame)->f04 = *(Block44 *)&*(Block44 *)0x8c289050;
    (&frame)->f04.f0c = o->ff0->f0c;
    (&frame)->f04.f10 = o->ff0->f10;
    copy_actor_records((void *)o, (void *)(&(&frame)->f04), 1);
    attach_and_insert_object((void *)o);
    return o;
}

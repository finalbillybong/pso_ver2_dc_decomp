#ifndef PSO_VIEW_UPDATE_H
#define PSO_VIEW_UPDATE_H
/* Provisional C++ accessed prefix. Vtable prefix8 puts virtual update at slot32. */
struct ViewUpdateCallbacks {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void update();};
struct ViewUpdateObject:ViewUpdateCallbacks {char unknown28[180];int ticks;};
typedef char check_ViewUpdateCallbacks_size[sizeof(ViewUpdateCallbacks)==28?1:-1];
typedef char check_ViewUpdateObject_ticks[(unsigned long)&((ViewUpdateObject *)0)->ticks==208?1:-1];
typedef char check_ViewUpdateObject_size[sizeof(ViewUpdateObject)==212?1:-1];
#endif

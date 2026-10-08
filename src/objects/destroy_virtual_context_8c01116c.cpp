/* Provisional C++ dispatch view; compiler vtable prefix is eight bytes. */
class CleanupData { public: char unknown0[24]; };
class CleanupView:public CleanupData { public:
 virtual void operation_08();
 virtual void operation_0c();
 virtual void operation_10();
 virtual void operation_14();
 virtual void operation_18();
 virtual void operation_1c();
 virtual void operation_20();
};
struct DispatchView { char unknown0[24]; void *dispatch; };
typedef char check_data[sizeof(CleanupData)==24?1:-1];
typedef char check_virtual_prefix[sizeof(CleanupView)==28?1:-1];
typedef char check_dispatch[(unsigned long)&((DispatchView *)0)->dispatch==24?1:-1];
typedef char check_dispatch_prefix[sizeof(DispatchView)==28?1:-1];
extern "C" CleanupView *destroy_virtual_context_8c01116c(CleanupView *o,short flags) { if(o) { ((DispatchView *)o)->dispatch=(void *)0x8c260f10; o->operation_20(); if(o) { ((DispatchView *)o)->dispatch=(void *)0x8c260f70; ((void (*)(void *,int))0x8c03311c)(o,0);  } if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }

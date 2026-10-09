/* Provisional C++ view, including observed vtable prefix and nested flags. */
class Data { public: char unknown0[24]; };
class VirtualBase:public Data { public:
 virtual void operation_0();
 virtual void operation_1();
 virtual void operation_2();
 virtual void operation_3();
 virtual void operation_4();
 virtual void operation_5();
 virtual void operation_6();
 virtual void operation_7();
 virtual void operation_8();
 virtual void operation_9();
 virtual void operation_10();
 virtual void operation_11();
 virtual void operation_12();
 virtual void operation_13();
 virtual void operation_14();
 virtual void operation_15();
 virtual void operation_16();
 virtual void operation_17();
 virtual void operation_18();
 virtual void operation_19();
 virtual void operation_20();
 virtual void operation_21();
 virtual void operation_22();
 virtual void operation_23();
 virtual void operation_24();
 virtual void operation_25();
 virtual void operation_26();
 virtual void operation_27();
 virtual void operation_28();
 virtual void operation_29();
 virtual void operation_30();
 virtual void operation_31();
 virtual void operation_32();
 virtual void operation_33();
 virtual void operation_34();
 virtual void operation_35();
 virtual void operation_36();
 virtual void operation_37();
 virtual void operation_38();
 virtual void operation_39();
 virtual void operation_40();
 virtual void operation_41();
 virtual void operation_42();
 virtual void operation_43();
 virtual void operation_44();
 virtual void operation_45();
};
struct TargetFlags { char unknown0[12]; unsigned int flags; };
struct Target { char unknown0[1876]; TargetFlags state; };
class View:public VirtualBase { public: char unknown28[202]; unsigned short id; char unknown232[84]; Target *target; char unknown320[128]; unsigned int flags; };
struct Dispatch { char unknown0[24]; void *table; };
typedef char check_data[sizeof(Data)==24?1:-1];
typedef char check_base[sizeof(VirtualBase)==28?1:-1];
typedef char check_id[(unsigned long)&((View *)0)->id==230?1:-1];
typedef char check_target[(unsigned long)&((View *)0)->target==316?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==448?1:-1];
typedef char check_prefix[sizeof(View)==452?1:-1];
typedef char check_target_state[(unsigned long)&((Target *)0)->state==1876?1:-1];
typedef char check_target_flags[(unsigned long)&((TargetFlags *)0)->flags==12?1:-1];
typedef char check_target_prefix[sizeof(Target)==1892?1:-1];
typedef char check_flag_block[sizeof(TargetFlags)==16?1:-1];
typedef char check_dispatch[(unsigned long)&((Dispatch *)0)->table==24?1:-1];
typedef char check_dispatch_prefix[sizeof(Dispatch)==28?1:-1];
static inline int has_flag(View *o,unsigned int flag) { return (o->flags&flag)!=0; }
extern "C" View *destroy_virtual_flag_owner(View *o,short release) {
 if(o) {
  ((Dispatch *)o)->table=(void *)0x8c278154;
  if(has_flag(o,1)!=0) { o->operation_45(); o->flags&=~1; }
  if(has_flag(o,4)!=0) { ((void (*)(unsigned short))0x8c223564)(o->id); o->flags&=~4; }
  if(has_flag(o,16)!=0) { ((void (*)(unsigned short))0x8c2236a8)(o->id); o->flags&=~16; }
  if(has_flag(o,64)!=0) { o->target->state.flags&=~32; o->flags&=~64; }
  ((void (*)(void *,int))0x8c073514)(o,0);
  if(release>0) ((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o);
 }
 return o;
}

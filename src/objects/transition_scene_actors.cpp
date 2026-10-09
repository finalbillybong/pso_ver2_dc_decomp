struct Actor {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void unused6();virtual void refresh();};
typedef char check_actor_dispatch[sizeof(Actor)==28?1:-1];
struct Temporary {unsigned int words[8];};
typedef char check_temporary[sizeof(Temporary)==32?1:-1];
extern "C" {
extern void call_8c017ba8(void);
extern void call_8c02a798(void);
extern void call_8c1004cc(void);
extern void call_8c041690(void);
extern void call_8c01d9dc(void);
extern void call_8c380516(void);
extern void call_8c01c2b0(void);
extern void call_8c1a18b8(void);
extern void call_8c0405b4(void);
extern void call_8c13f428(void);
extern void call_8c194d14(void);
extern void call_8c1922a0(void);
extern void call_8c189d60(void);
extern void call_8c115bc0(void);
extern void call_8c02a87c(void);
extern void call_8c017bd4(void);
extern void call_8c173778(void);
extern void base_at(Temporary *,void *);
extern void load_at(void *,unsigned int);
extern Actor * lookup_at(int);
extern void move_at(Actor *,void *);
extern void prepare_at(void *);
extern void clear_settings_at(void *);
extern void mode_at(int);
extern int settings_mode_at(void *);
extern void copy_at(void *,int);
extern void load_extra_at(void *,int);
extern void apply_settings_at(void *);
extern int current_at(void);
extern void select_at(int);
extern void restore_at(void *);
extern void finish_at(int);
extern void destroy_at(Temporary *,int);
extern unsigned int resource_id;
extern char resource_data[];
extern char global_storage[];
extern char settings[];
extern unsigned short first_mask;
extern unsigned short second_mask;
extern char copy_data[];
extern char extra_data[];
extern void *actor_parent;
void transition_scene_actors(void) {
 Temporary temporary;base_at(&temporary,0);call_8c017ba8();call_8c02a798();call_8c1004cc();call_8c041690();call_8c01d9dc();call_8c380516();call_8c380516();load_at(resource_data,resource_id);
 {int i;for(i=0;i<12;++i) {Actor *actor=lookup_at(i);if(actor) move_at(actor,&temporary);}}
 prepare_at(global_storage);clear_settings_at(settings);call_8c01c2b0();call_8c1a18b8();call_8c0405b4();mode_at(2);
 if(settings_mode_at(settings)==2) {first_mask=0x1000;second_mask=0x4000;call_8c13f428();copy_at(copy_data,128);load_extra_at(extra_data,64);call_8c194d14();call_8c1922a0();}
 apply_settings_at(settings);select_at(current_at());call_8c189d60();restore_at(global_storage);
 {int i;for(i=0;i<12;++i) {Actor *actor=lookup_at(i);if(actor) {move_at(actor,actor_parent);actor->refresh();}}}
 call_8c115bc0();call_8c02a87c();call_8c017bd4();call_8c173778();finish_at(0);destroy_at(&temporary,-1);
}
}

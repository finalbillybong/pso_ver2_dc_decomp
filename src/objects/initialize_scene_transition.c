typedef struct TimeView {unsigned int words[3];} TimeView;
typedef struct Settings {int first,second,third,fourth,fifth,sixth,seventh,eighth;} Settings;
typedef char check_time_size[sizeof(TimeView)==12?1:-1];
typedef char check_setting_first[(unsigned long)&((Settings *)0)->first==0?1:-1];
typedef char check_setting_second[(unsigned long)&((Settings *)0)->second==4?1:-1];
typedef char check_setting_third[(unsigned long)&((Settings *)0)->third==8?1:-1];
typedef char check_setting_fourth[(unsigned long)&((Settings *)0)->fourth==12?1:-1];
typedef char check_setting_fifth[(unsigned long)&((Settings *)0)->fifth==16?1:-1];
typedef char check_setting_sixth[(unsigned long)&((Settings *)0)->sixth==20?1:-1];
typedef char check_setting_seventh[(unsigned long)&((Settings *)0)->seventh==24?1:-1];
typedef char check_setting_eighth[(unsigned long)&((Settings *)0)->eighth==28?1:-1];
extern void call_8c01c2b0(void);
extern void call_8c172be4(void);
extern void call_8c01d9dc(void);
extern void call_8c01c1c4(void);
extern void call_8c104e8c(void);
extern void call_8c1a18b8(void);
extern void call_8c0405b4(void);
extern void call_8c189c94(void);
extern void call_8c1a9940(void);
extern void call_8c0ea6d8(void);
extern void call_8c180ae8(void);
extern void call_8c0ea724(void);
extern void call_8c189d60(void);
extern void call_8c017ba8(void);
extern void call_8c13f3f0(void);
extern void call_8c017bd4(void);
extern void call_8c380516(void);
extern void begin_at(int,int,int);
extern void set_mode_at(int);
extern void set_phase_at(int);
extern void load_at(void *,int);
extern void configure_at(int,void *);
extern void * allocate_at(void *,unsigned int);
extern void initialize_large_at(void *,void *);
extern void * lookup_at(void);
extern int state_at(void *);
extern void request_at(int);
extern int time_ready_at(void);
extern void time_read_at(TimeView *);
extern void time_convert_at(TimeView *,unsigned int *);
extern void time_set_at(unsigned int);
extern void initialize_small_at(void *,void *);
extern void initialize_other_at(void *,void *);
extern void apply_settings_at(Settings *);
extern void prepare_global_at(void *);
extern void finish_small_at(void *);
extern void * existing;
extern void * heap;
extern void * parent;
extern void * selected;
extern int setting_mode;
extern int setting_state;
extern int reset_first;
extern int reset_second;
extern int reset_third;
extern Settings settings;
extern char load_data[];
extern char configuration[];
extern char global_storage[];
void initialize_scene_transition(void) {
 unsigned int value;TimeView stamp;void *small;
 begin_at(0,0,0);call_8c01c2b0();call_8c172be4();call_8c01d9dc();call_8c01c1c4();set_mode_at(2);set_phase_at(16);call_8c104e8c();call_8c1a18b8();call_8c0405b4();call_8c189c94();load_at(load_data,264);call_8c1a9940();configure_at(15,configuration);call_8c0ea6d8();
 if(!existing) {void *p=allocate_at(heap,292);if(p) initialize_large_at(p,parent);}
 if((selected=lookup_at())!=0) {if(state_at(selected)==-1) request_at(0);else {call_8c180ae8();set_phase_at(2);request_at(27);}call_8c0ea724();call_8c189d60();}
 else {state_at(selected);if(!time_ready_at()) {time_read_at(&stamp);time_convert_at(&stamp,&value);time_set_at(value);}
 small=allocate_at(heap,32);if(small) initialize_small_at(small,parent);
 {void *p=allocate_at(heap,36);if(p) initialize_other_at(p,parent);}
 call_8c017ba8();call_8c13f3f0();
 settings.second=15;settings.third=16;settings.fourth=16;settings.fifth=0;settings.sixth=0;settings.seventh=0;settings.first=-1;settings.eighth=0;settings.fourth=0;setting_mode=15;setting_state=0;
 call_8c0ea724();apply_settings_at(&settings);call_8c189d60();call_8c017bd4();prepare_global_at(global_storage);finish_small_at(small);
 }
 reset_first=0;reset_second=0;reset_third=0;call_8c380516();
}

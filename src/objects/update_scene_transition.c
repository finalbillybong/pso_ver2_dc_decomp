extern void call_8c01daf0(void);
extern void call_8c01dea8(void);
extern void call_8c0410b4(void);
extern void call_8c05f9e4(void);
extern void call_8c17e194(void);
extern void call_8c184614(void);
extern void call_8c042488(void);
extern void call_8c01b9e0(void);
extern void call_8c115494(void);
extern void call_8c01c210(void);
extern void call_8c115298(void);
extern void call_8c01c1c4(void);
extern void call_8c11574c(void);
extern void call_8c01c1e8(void);
extern void call_8c1159f0(void);
extern void call_8c015ab4(void);
extern void call_8c180ae8(void);
extern void call_8c380516(void);
extern void call_8c03373c(void *);
extern void call_8c0337cc(void *);
extern void call_8c033330(void *);
extern void call_8c03385c(void *);
extern int call_8c19b054(void);
extern int call_8c01c228(void);
extern int call_8c01c1dc(void);
extern int call_8c01c200(void);
extern int call_8c01e180(void);
extern int call_8c104da8(void);
extern int probe_at(int);
extern void phase_at(int);
extern void request_at(int);
extern char global_storage[];
extern int timeout;
extern int transition;
extern int forced;
void update_scene_transition(void) {
 call_8c01daf0();call_8c01dea8();call_8c03373c(global_storage);call_8c0337cc(global_storage);call_8c033330(global_storage);call_8c03385c(global_storage);call_8c0410b4();call_8c05f9e4();call_8c17e194();call_8c184614();call_8c042488();
 if(probe_at((signed char)call_8c19b054())==1) timeout=0;else if(++timeout>90) call_8c01b9e0();
 if(call_8c01c228()) {call_8c115494();call_8c01c210();}
 if(call_8c01c1dc()) {call_8c115298();call_8c01c1c4();}
 if(call_8c01c200()) {call_8c11574c();call_8c01c1e8();}
 if(transition==1) call_8c1159f0();
 if((signed char)call_8c01e180()||forced==1) {call_8c015ab4();call_8c180ae8();phase_at(2);request_at(27);}
 if(call_8c104da8()) {call_8c015ab4();request_at(0);}
 call_8c380516();
}

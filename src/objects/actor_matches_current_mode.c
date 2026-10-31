typedef struct Actor { char unknown0[892]; int mode; } Actor;
typedef char check_mode[(unsigned long)&((Actor *)0)->mode==892?1:-1];
extern int enabled,override_mode,current_mode;
extern int get_current_area_8c032b10(void);
static inline int overridden(void) { return override_mode!=0; }
int actor_matches_current_mode(const Actor *actor) {
 int mode;
 if(enabled && overridden()!=0) mode=current_mode; else mode=get_current_area_8c032b10();
 return mode==actor->mode;
}

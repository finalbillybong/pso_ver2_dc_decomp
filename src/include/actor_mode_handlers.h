#ifndef PSO_ACTOR_MODE_HANDLERS_H
#define PSO_ACTOR_MODE_HANDLERS_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; callback slots are observed ABI positions. */
typedef struct ActorModeThreeView {char unknown0[52];unsigned int motion_flags;char unknown56[184];short animation;char unknown242[574];short angle;char unknown818[36];short reset_count,countdown,saved_angle;char unknown860[52];int requested;char unknown916[4];int state;} ActorModeThreeView;
typedef struct ActorModeFiveView {char unknown0[240];short animation;char unknown242[6];float frame;char unknown252[4];float rate;char unknown260[532];Vector3 velocity;char unknown804[116];int state;} ActorModeFiveView;
typedef char check_ActorModeThreeView_motion_flags[(unsigned long)&((ActorModeThreeView *)0)->motion_flags==52?1:-1];
typedef char check_ActorModeThreeView_animation[(unsigned long)&((ActorModeThreeView *)0)->animation==240?1:-1];
typedef char check_ActorModeThreeView_angle[(unsigned long)&((ActorModeThreeView *)0)->angle==816?1:-1];
typedef char check_ActorModeThreeView_reset_count[(unsigned long)&((ActorModeThreeView *)0)->reset_count==854?1:-1];
typedef char check_ActorModeThreeView_countdown[(unsigned long)&((ActorModeThreeView *)0)->countdown==856?1:-1];
typedef char check_ActorModeThreeView_saved_angle[(unsigned long)&((ActorModeThreeView *)0)->saved_angle==858?1:-1];
typedef char check_ActorModeThreeView_requested[(unsigned long)&((ActorModeThreeView *)0)->requested==912?1:-1];
typedef char check_ActorModeThreeView_state[(unsigned long)&((ActorModeThreeView *)0)->state==920?1:-1];
typedef char check_ActorModeThreeView_size[sizeof(ActorModeThreeView)==924?1:-1];
typedef char check_ActorModeFiveView_animation[(unsigned long)&((ActorModeFiveView *)0)->animation==240?1:-1];
typedef char check_ActorModeFiveView_frame[(unsigned long)&((ActorModeFiveView *)0)->frame==248?1:-1];
typedef char check_ActorModeFiveView_rate[(unsigned long)&((ActorModeFiveView *)0)->rate==256?1:-1];
typedef char check_ActorModeFiveView_velocity[(unsigned long)&((ActorModeFiveView *)0)->velocity==792?1:-1];
typedef char check_ActorModeFiveView_state[(unsigned long)&((ActorModeFiveView *)0)->state==920?1:-1];
typedef char check_ActorModeFiveView_size[sizeof(ActorModeFiveView)==924?1:-1];
#ifdef __cplusplus
struct ActorModeTwoView;
struct ActorModeTwoCallbacks {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void unused6();virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual int check(ActorModeTwoView *,float);virtual void unused23();virtual void apply(ActorModeTwoView *,float);virtual void unused25();virtual void unused26();virtual void finish(ActorModeTwoView *,float);};
struct ActorModeTwoView:ActorModeTwoCallbacks {char unknown28[24];unsigned int motion_flags;char unknown56[180];int action;short animation;char unknown242[578];ActorModeTwoCallbacks *target;char unknown824[52];int *parameters;char unknown880[32];int requested;char unknown916[4];int state;};
typedef char check_ActorModeTwoCallbacks_size[sizeof(ActorModeTwoCallbacks)==28?1:-1];
typedef char check_ActorModeTwoView_motion_flags[(unsigned long)&((ActorModeTwoView *)0)->motion_flags==52?1:-1];
typedef char check_ActorModeTwoView_action[(unsigned long)&((ActorModeTwoView *)0)->action==236?1:-1];
typedef char check_ActorModeTwoView_animation[(unsigned long)&((ActorModeTwoView *)0)->animation==240?1:-1];
typedef char check_ActorModeTwoView_target[(unsigned long)&((ActorModeTwoView *)0)->target==820?1:-1];
typedef char check_ActorModeTwoView_parameters[(unsigned long)&((ActorModeTwoView *)0)->parameters==876?1:-1];
typedef char check_ActorModeTwoView_requested[(unsigned long)&((ActorModeTwoView *)0)->requested==912?1:-1];
typedef char check_ActorModeTwoView_state[(unsigned long)&((ActorModeTwoView *)0)->state==920?1:-1];
typedef char check_ActorModeTwoView_size[sizeof(ActorModeTwoView)==924?1:-1];
#endif
#endif

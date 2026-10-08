#ifndef PSO_VIEW_EFFECT_H
#define PSO_VIEW_EFFECT_H
/* Provisional accessed prefixes; unknown fields remain unchanged. */
typedef struct ViewEffect {void *resource;char unknown4[20];void *dispatch;short unknown28;unsigned short object_size;char unknown32[12];float value44;char unknown48[12];int value60,unknown64,value68,value72,value76,value80,value84;float value88,value92,value96,value100,value104,value108,value112,value116,value120;char unknown124[84];int value208,value212;void *value216;} ViewEffect;
typedef struct ViewChild {int unknown0;unsigned short flags;} ViewChild;
typedef struct ViewChildOwner {char unknown0[216];ViewChild *child;} ViewChildOwner;
typedef struct ViewMotionFields {char unknown0[136];int value136,value140,value144;float value148,value152;int value156;float value160;char unknown164[24];float value188,value192,value196;} ViewMotionFields;
typedef char check_ViewEffect_resource[(unsigned long)&((ViewEffect *)0)->resource==0?1:-1];
typedef char check_ViewEffect_dispatch[(unsigned long)&((ViewEffect *)0)->dispatch==24?1:-1];
typedef char check_ViewEffect_object_size[(unsigned long)&((ViewEffect *)0)->object_size==30?1:-1];
typedef char check_ViewEffect_value44[(unsigned long)&((ViewEffect *)0)->value44==44?1:-1];
typedef char check_ViewEffect_value60[(unsigned long)&((ViewEffect *)0)->value60==60?1:-1];
typedef char check_ViewEffect_value68[(unsigned long)&((ViewEffect *)0)->value68==68?1:-1];
typedef char check_ViewEffect_value72[(unsigned long)&((ViewEffect *)0)->value72==72?1:-1];
typedef char check_ViewEffect_value76[(unsigned long)&((ViewEffect *)0)->value76==76?1:-1];
typedef char check_ViewEffect_value80[(unsigned long)&((ViewEffect *)0)->value80==80?1:-1];
typedef char check_ViewEffect_value84[(unsigned long)&((ViewEffect *)0)->value84==84?1:-1];
typedef char check_ViewEffect_value88[(unsigned long)&((ViewEffect *)0)->value88==88?1:-1];
typedef char check_ViewEffect_value92[(unsigned long)&((ViewEffect *)0)->value92==92?1:-1];
typedef char check_ViewEffect_value96[(unsigned long)&((ViewEffect *)0)->value96==96?1:-1];
typedef char check_ViewEffect_value100[(unsigned long)&((ViewEffect *)0)->value100==100?1:-1];
typedef char check_ViewEffect_value104[(unsigned long)&((ViewEffect *)0)->value104==104?1:-1];
typedef char check_ViewEffect_value108[(unsigned long)&((ViewEffect *)0)->value108==108?1:-1];
typedef char check_ViewEffect_value112[(unsigned long)&((ViewEffect *)0)->value112==112?1:-1];
typedef char check_ViewEffect_value116[(unsigned long)&((ViewEffect *)0)->value116==116?1:-1];
typedef char check_ViewEffect_value120[(unsigned long)&((ViewEffect *)0)->value120==120?1:-1];
typedef char check_ViewEffect_value208[(unsigned long)&((ViewEffect *)0)->value208==208?1:-1];
typedef char check_ViewEffect_value212[(unsigned long)&((ViewEffect *)0)->value212==212?1:-1];
typedef char check_ViewEffect_value216[(unsigned long)&((ViewEffect *)0)->value216==216?1:-1];
typedef char check_ViewEffect_size[sizeof(ViewEffect)==220?1:-1];
typedef char check_ViewChild_flags[(unsigned long)&((ViewChild *)0)->flags==4?1:-1];
typedef char check_ViewChild_size[sizeof(ViewChild)==8?1:-1];
typedef char check_ViewChildOwner_child[(unsigned long)&((ViewChildOwner *)0)->child==216?1:-1];
typedef char check_ViewChildOwner_size[sizeof(ViewChildOwner)==220?1:-1];
typedef char check_ViewMotionFields_value136[(unsigned long)&((ViewMotionFields *)0)->value136==136?1:-1];
typedef char check_ViewMotionFields_value140[(unsigned long)&((ViewMotionFields *)0)->value140==140?1:-1];
typedef char check_ViewMotionFields_value144[(unsigned long)&((ViewMotionFields *)0)->value144==144?1:-1];
typedef char check_ViewMotionFields_value148[(unsigned long)&((ViewMotionFields *)0)->value148==148?1:-1];
typedef char check_ViewMotionFields_value152[(unsigned long)&((ViewMotionFields *)0)->value152==152?1:-1];
typedef char check_ViewMotionFields_value156[(unsigned long)&((ViewMotionFields *)0)->value156==156?1:-1];
typedef char check_ViewMotionFields_value160[(unsigned long)&((ViewMotionFields *)0)->value160==160?1:-1];
typedef char check_ViewMotionFields_value188[(unsigned long)&((ViewMotionFields *)0)->value188==188?1:-1];
typedef char check_ViewMotionFields_value192[(unsigned long)&((ViewMotionFields *)0)->value192==192?1:-1];
typedef char check_ViewMotionFields_value196[(unsigned long)&((ViewMotionFields *)0)->value196==196?1:-1];
typedef char check_ViewMotionFields_size[sizeof(ViewMotionFields)==200?1:-1];
#endif

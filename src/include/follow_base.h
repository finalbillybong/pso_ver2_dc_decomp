#ifndef PSO_FOLLOW_BASE_H
#define PSO_FOLLOW_BASE_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; unknown fields and data contents remain unresolved. */
typedef struct FollowBaseView {char unknown00[24];void *dispatch;char unknown28[8];unsigned short id;short unknown38;int value40,value44,angle48,angle52,value56,value60;Vector3 position,origin;void *resource;float value92,value96;Vector3 extra;} FollowBaseView;
typedef struct FollowResourceTable {char unknown00[28];void *resource;} FollowResourceTable;
typedef char check_FollowBaseView_dispatch[(unsigned long)&((FollowBaseView *)0)->dispatch==24?1:-1];
typedef char check_FollowBaseView_id[(unsigned long)&((FollowBaseView *)0)->id==36?1:-1];
typedef char check_FollowBaseView_value40[(unsigned long)&((FollowBaseView *)0)->value40==40?1:-1];
typedef char check_FollowBaseView_value44[(unsigned long)&((FollowBaseView *)0)->value44==44?1:-1];
typedef char check_FollowBaseView_angle48[(unsigned long)&((FollowBaseView *)0)->angle48==48?1:-1];
typedef char check_FollowBaseView_angle52[(unsigned long)&((FollowBaseView *)0)->angle52==52?1:-1];
typedef char check_FollowBaseView_value56[(unsigned long)&((FollowBaseView *)0)->value56==56?1:-1];
typedef char check_FollowBaseView_value60[(unsigned long)&((FollowBaseView *)0)->value60==60?1:-1];
typedef char check_FollowBaseView_position[(unsigned long)&((FollowBaseView *)0)->position==64?1:-1];
typedef char check_FollowBaseView_origin[(unsigned long)&((FollowBaseView *)0)->origin==76?1:-1];
typedef char check_FollowBaseView_resource[(unsigned long)&((FollowBaseView *)0)->resource==88?1:-1];
typedef char check_FollowBaseView_value92[(unsigned long)&((FollowBaseView *)0)->value92==92?1:-1];
typedef char check_FollowBaseView_value96[(unsigned long)&((FollowBaseView *)0)->value96==96?1:-1];
typedef char check_FollowBaseView_extra[(unsigned long)&((FollowBaseView *)0)->extra==100?1:-1];
typedef char check_FollowBaseView_size[sizeof(FollowBaseView)==112?1:-1];
typedef char check_FollowResourceTable_resource[(unsigned long)&((FollowResourceTable *)0)->resource==28?1:-1];
typedef char check_FollowResourceTable_size[sizeof(FollowResourceTable)==32?1:-1];
#endif

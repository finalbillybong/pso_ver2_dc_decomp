#ifndef PSO_RENDER_FLAGS_VIEW_H
#define PSO_RENDER_FLAGS_VIEW_H
/* Provisional accessed prefix; byte1 remains untouched by clearing. */
typedef struct RenderFlagsView {unsigned char state,unknown1;unsigned short value2;int value4;unsigned int flags;} RenderFlagsView;
typedef char check_RenderFlagsView_state[(unsigned long)&((RenderFlagsView *)0)->state==0?1:-1];
typedef char check_RenderFlagsView_value2[(unsigned long)&((RenderFlagsView *)0)->value2==2?1:-1];
typedef char check_RenderFlagsView_value4[(unsigned long)&((RenderFlagsView *)0)->value4==4?1:-1];
typedef char check_RenderFlagsView_flags[(unsigned long)&((RenderFlagsView *)0)->flags==8?1:-1];
typedef char check_RenderFlagsView_size[sizeof(RenderFlagsView)==12?1:-1];
#endif

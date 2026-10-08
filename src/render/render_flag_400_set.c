#include "src/include/render_flags_view.h"
extern RenderFlagsView render_flags;
int render_flag_400_set(void){return (render_flags.flags&0x400)?1:0;}

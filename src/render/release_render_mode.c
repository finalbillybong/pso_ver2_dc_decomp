#include "src/include/render_flags_view.h"
extern RenderFlagsView render_flags;
int release_render_mode(void){if(render_flags.flags&8){render_flags.flags&=~8;render_flags.flags|=32;}return 0;}

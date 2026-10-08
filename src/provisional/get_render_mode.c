#include "src/include/render_flags_view.h"
extern RenderFlagsView render_flags;
unsigned char get_render_mode(void){return render_flags.state;}

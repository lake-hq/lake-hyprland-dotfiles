/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x110a19ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc3c1c5ff, 0x110a19ff, 0x63596eff },
	[SchemeSel]  = { 0xc3c1c5ff, 0x764243ff, 0x9f4e21ff },
	[SchemeUrg]  = { 0xc3c1c5ff, 0x9f4e21ff, 0x764243ff },
};

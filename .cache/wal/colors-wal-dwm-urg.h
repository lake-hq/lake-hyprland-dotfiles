static const char norm_fg[] = "#c3c1c5";
static const char norm_bg[] = "#110a19";
static const char norm_border[] = "#63596e";

static const char sel_fg[] = "#c3c1c5";
static const char sel_bg[] = "#764243";
static const char sel_border[] = "#c3c1c5";

static const char urg_fg[] = "#c3c1c5";
static const char urg_bg[] = "#9f4e21";
static const char urg_border[] = "#9f4e21";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

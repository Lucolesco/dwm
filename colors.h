static const char norm_fg[] = "#d89c24";
static const char norm_bg[] = "#150f13";
static const char norm_border[] = "#000000";

static const char sel_fg[] = "#150f13";
static const char sel_bg[] = "#d89c24";
static const char sel_border[] = "#d89c24";

static const char urg_fg[] = "#e1e1e2";
static const char urg_bg[] = "#635F54";
static const char urg_border[] = "#d89c24";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

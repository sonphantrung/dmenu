/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xd0;
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10",
	"Noto Color Emoji:pixelsize=8:antialias=true:autohint=true",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#dae1ea";
static char normbgcolor[] = "#151515";
static char selfgcolor[]  = "#dae1ea";
static char selbgcolor[]  = "#5e8d87";
static char midfgcolor[]  = "#dae1ea";
static char midbgcolor[]  = "#c13939";
static char highlightnormfgcolor[]  = "#ffc978";
static char highlightnormbgcolor[]  = "#222222";
static char highlightselfgcolor[]  = "#ffc978";
static char highlightselbgcolor[]  = "#5e8d87";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel] = { selfgcolor, selbgcolor },
	[SchemeMid] = { midfgcolor, midbgcolor },
	[SchemeSelHighlight] = { highlightselfgcolor, highlightselbgcolor },
	[SchemeNormHighlight] = { highlightnormfgcolor, highlightnormbgcolor },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, OPAQUE },
	[SchemeMid] = { OPAQUE, OPAQUE },
	[SchemeSelHighlight] = { OPAQUE, OPAQUE },
	[SchemeNormHighlight] = { OPAQUE, OPAQUE },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 10;         /* -h option; minimum height of a menu line     */


/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static unsigned int border_width = 0;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "foreground", STRING, &normfgcolor },
	{ "background", STRING, &normbgcolor },
	{ "background",  STRING, &selfgcolor },
	{ "foreground",  STRING, &selbgcolor },
	{ "foreground",  STRING, &midfgcolor },
	{ "color1",  STRING, &midbgcolor },
	{ "color3",  STRING, &highlightnormfgcolor },
	{ "background",  STRING, &highlightnormbgcolor },
	{ "color3",  STRING, &highlightselfgcolor },
	{ "color4",  STRING, &highlightselbgcolor },
	{ "prompt",      STRING, &prompt },
	{ "border_width",      INTEGER, &border_width },
};

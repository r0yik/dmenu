/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */

static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
    [SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#eeeeee", "#98971a" },
	[SchemeSelHighlight] = { "#ffee00", "#98971a" },
	[SchemeNormHighlight] = { "#ffc978", "#282828" },
	[SchemeOut] = { "#ebdbb2", "#8ec07c" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 12;
static unsigned int columns    = 2;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;

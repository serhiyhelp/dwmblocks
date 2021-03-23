#define CMDLENGTH 50
#define delimiter " "

static const Block blocks[] = {
	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{ "status-locale",      0,	     9},
	{ "status-backlight",   0,	     8},
	{ "status-volume",      0,	     1},
	{ "status-power",       10,	    11},
	{ "status-date",	    30,	    12},
	{ "status-time",	    30,	    10},
};

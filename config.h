/* evilwm - Minimalist Window Manager for X
 * Copyright (C) 1999-2021 Ciaran Anscomb <evilwm@6809.org.uk>
 * see README for license and other details. */

// This file is not generated, it is used to sanity check compile options.

// XDEBUG depends on DEBUG

#if defined(XDEBUG) && !defined(DEBUG)
# define DEBUG
#endif

// INFOBANNER_MOVERESIZE depends on INFOBANNER

#if defined(INFOBANNER_MOVERESIZE) && !defined(INFOBANNER)
# define INFOBANNER
#endif

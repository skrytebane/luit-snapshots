/*
 * $XTermId: trace.c,v 1.1 2010/11/24 20:29:20 tom Exp $
 *
 * Copyright 2010 by Thomas E. Dickey
 *
 * All Rights Reserved
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appear in all copies and that
 * both that copyright notice and this permission notice appear in
 * supporting documentation, and that the name of the above listed
 * copyright holder(s) not be used in advertising or publicity pertaining
 * to distribution of the software without specific, written prior
 * permission.
 *
 * THE ABOVE LISTED COPYRIGHT HOLDER(S) DISCLAIM ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS, IN NO EVENT SHALL THE ABOVE LISTED COPYRIGHT HOLDER(S) BE
 * LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include "trace.h"

void
Trace(const char *fmt,...)
{
    static FILE *fp = 0;
    va_list ap;
    if (fp == 0)
	fp = fopen("Trace.out", "w");
    va_start(ap, fmt);
    vfprintf(fp, fmt, ap);
    va_end(ap);
}

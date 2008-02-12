/******************************************************************************
*******************************************************************************
**
**  Copyright (C) Sistina Software, Inc.  1997-2003  All rights reserved.
**  Copyright (C) 2004-2005 Red Hat, Inc.  All rights reserved.
**
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __FS_RECOVERY_H__
#define __FS_RECOVERY_H__

#include "libgfs2.h"

int replay_journals(struct gfs2_sbd *sdp);

#endif /* __FS_RECOVERY_H__ */

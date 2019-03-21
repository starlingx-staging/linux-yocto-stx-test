// SPDX-License-Identifier: GPL-2.0
// Copyright (C) 2013 INTEL Corporation
/*
 * arch/arm/mach-axxia/perf_event_vp.c
 * included from arch/arm/mach-axxia/perf_event_platform.c
 *
 * Support for the INTEL Axxia boards based on ARM cores.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.
 */

/*
 * Generic VP
 */

static void vp_startup_init(void)
{
}

static u32 vp_pmu_event_init(u32 event, struct perf_event *pevent)
{
	return 0;
}

static u32 vp_pmu_event_add(u32 event, struct perf_event *pevent)
{
	return 0;
}

static u32 vp_pmu_event_read(u32 event, struct perf_event *pevent,
			     int flags)
{
	return 0;
}

static u32 vp_pmu_event_del(u32 event, struct perf_event *pevent,
			    int flags)
{
	return 0;
}

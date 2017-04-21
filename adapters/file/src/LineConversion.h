/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service File Adapter                                          */
/* ========================================================================= */
/*                                                                           */
/* See LineConversion.c                                                      */
/*                                                                           */
/* ========================================================================= */

#ifndef _lineconversion_h_
#define _lineconversion_h_

#include <stdio.h>
#include <string.h>
#include "ndds/ndds_c.h"
#include "routingservice/routingservice_adapter.h"

/* ========================================================================= */
/*                                                                           */
/* Read line                                                                 */
/*                                                                           */
/* ========================================================================= */
enum RTIRS_FileAdapter_READ_ACTION {
	READ_ACTION_ERROR       = 0,
	READ_ACTION_SEND_SAMPLE = 1,
	READ_ACTION_SKIP_SAMPLE = 2
};

enum RTIRS_FileAdapter_READ_ACTION RTIRS_FileAdapter_read_sample(
    struct DDS_DynamicData * sampleOut, 
    FILE * file,
    char * buffer, 
    int maxSampleSize,
    RTI_RoutingServiceEnvironment * env);


/* ========================================================================= */
/*                                                                           */
/* Write line                                                                */
/*                                                                           */
/* ========================================================================= */

int RTIRS_FileAdapter_write_sample(
	struct DDS_SampleInfo  * sample_info,
    struct DDS_DynamicData * sample, 
    FILE * file,
    RTI_RoutingServiceEnvironment * env);

/* ========================================================================= */
/*                                                                           */
/* Utility                                                                   */
/*                                                                           */
/* ========================================================================= */

char * RTIRS_FileAdapter_trim(char * str);

/*****************************************************************************/

int RTIRS_FileAdapter_assign(
    struct DDS_DynamicData * sample,
    const char * field,
    const char * value,
    RTI_RoutingServiceEnvironment * env);

/*****************************************************************************/

int RTIRS_FileAdapter_write_member(
    const struct DDS_DynamicData * sample,
    const struct DDS_DynamicDataMemberInfo * info,
    FILE * file,
    RTI_RoutingServiceEnvironment * env);

#endif

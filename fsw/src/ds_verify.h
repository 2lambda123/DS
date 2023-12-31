/************************************************************************
 * NASA Docket No. GSC-18,917-1, and identified as “CFS Data Storage
 * (DS) application version 2.6.1”
 *
 * Copyright (c) 2021 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * @file
 *  Define the CFS Data Storage (DS) Application compile-time checks
 */
#ifndef DS_VERIFY_H
#define DS_VERIFY_H

#include "cfe.h"

#include "ds_platform_cfg.h"

#ifndef DS_DESTINATION_TBL_NAME
#error DS_DESTINATION_TBL_NAME must be defined!
#endif

#ifndef DS_DEF_FILTER_FILENAME
#error DS_DEF_FILTER_FILENAME must be defined!
#endif

#ifndef DS_DEST_FILE_CNT
#error DS_DEST_FILE_CNT must be defined!
#elif (DS_DEST_FILE_CNT < 1)
#error DS_DEST_FILE_CNT cannot be less than 1!
#endif

#ifndef DS_PATHNAME_BUFSIZE
#error DS_PATHNAME_BUFSIZE must be defined!
#elif (DS_PATHNAME_BUFSIZE < 1)
#error DS_PATHNAME_BUFSIZE cannot be less than 1!
#elif ((DS_PATHNAME_BUFSIZE % 4) != 0)
#error DS_PATHNAME_BUFSIZE must be a multiple of 4!
#elif (DS_PATHNAME_BUFSIZE > OS_MAX_PATH_LEN)
#error DS_PATHNAME_BUFSIZE cannot be greater than OS_MAX_PATH_LEN!
#endif

#ifndef DS_BASENAME_BUFSIZE
#error DS_BASENAME_BUFSIZE must be defined!
#elif (DS_BASENAME_BUFSIZE < 1)
#error DS_BASENAME_BUFSIZE cannot be less than 1!
#elif ((DS_BASENAME_BUFSIZE % 4) != 0)
#error DS_BASENAME_BUFSIZE must be a multiple of 4!
#elif (DS_BASENAME_BUFSIZE > OS_MAX_PATH_LEN)
#error DS_BASENAME_BUFSIZE cannot be greater than OS_MAX_PATH_LEN!
#endif

#ifndef DS_EXTENSION_BUFSIZE
#error DS_EXTENSION_BUFSIZE must be defined!
#elif (DS_EXTENSION_BUFSIZE < 1)
#error DS_EXTENSION_BUFSIZE cannot be less than 1!
#elif ((DS_EXTENSION_BUFSIZE % 4) != 0)
#error DS_EXTENSION_BUFSIZE must be a multiple of 4!
#elif (DS_EXTENSION_BUFSIZE > OS_MAX_PATH_LEN)
#error DS_EXTENSION_BUFSIZE cannot be greater than OS_MAX_PATH_LEN!
#endif

#ifndef DS_FILTER_TBL_NAME
#error DS_FILTER_TBL_NAME must be defined!
#endif

#ifndef DS_DEF_DEST_FILENAME
#error DS_DEF_DEST_FILENAME must be defined!
#endif

#ifndef DS_PACKETS_IN_FILTER_TABLE
#error DS_PACKETS_IN_FILTER_TABLE must be defined!
#elif (DS_PACKETS_IN_FILTER_TABLE < 1)
#error DS_PACKETS_IN_FILTER_TABLE cannot be less than 1!
#endif

#ifndef DS_FILTERS_PER_PACKET
#error DS_FILTERS_PER_PACKET must be defined!
#elif (DS_FILTERS_PER_PACKET < 1)
#error DS_FILTERS_PER_PACKET cannot be less than 1!
#elif (DS_FILTERS_PER_PACKET > DS_DEST_FILE_CNT)
#error DS_FILTERS_PER_PACKET cannot be greater than DS_DEST_FILE_CNT!
#endif

#ifndef DS_DESCRIPTOR_BUFSIZE
#error DS_DESCRIPTOR_BUFSIZE must be defined!
#elif (DS_DESCRIPTOR_BUFSIZE < 1)
#error DS_DESCRIPTOR_BUFSIZE cannot be less than 1!
#elif ((DS_DESCRIPTOR_BUFSIZE % 4) != 0)
#error DS_DESCRIPTOR_BUFSIZE must be a multiple of 4!
#endif

#ifndef DS_SEQUENCE_DIGITS
#error DS_SEQUENCE_DIGITS must be defined!
#elif (DS_SEQUENCE_DIGITS < 1)
#error DS_SEQUENCE_DIGITS cannot be less than 1!
#endif

#ifndef DS_MAX_SEQUENCE_COUNT
#error DS_MAX_SEQUENCE_COUNT must be defined!
#elif (DS_MAX_SEQUENCE_COUNT < 1)
#error DS_MAX_SEQUENCE_COUNT cannot be less than 1!
#endif

#ifndef DS_TOTAL_FNAME_BUFSIZE
#error DS_TOTAL_FNAME_BUFSIZE must be defined!
#elif (DS_TOTAL_FNAME_BUFSIZE < 1)
#error DS_TOTAL_FNAME_BUFSIZE cannot be less than 1!
#elif ((DS_TOTAL_FNAME_BUFSIZE % 4) != 0)
#error DS_TOTAL_FNAME_BUFSIZE must be a multiple of 4!
#elif (DS_TOTAL_FNAME_BUFSIZE > OS_MAX_PATH_LEN)
#error DS_TOTAL_FNAME_BUFSIZE cannot be greater than OS_MAX_PATH_LEN!
#endif

#ifndef DS_FILE_HDR_SUBTYPE
#error DS_FILE_HDR_SUBTYPE must be defined!
#endif

#ifndef DS_FILE_HDR_DESCRIPTION
#error DS_FILE_HDR_DESCRIPTION must be defined!
#endif

#ifndef DS_FILE_MIN_SIZE_LIMIT
#error DS_FILE_MIN_SIZE_LIMIT must be defined!
#elif (DS_FILE_MIN_SIZE_LIMIT < 1)
#error DS_FILE_MIN_SIZE_LIMIT cannot be less than 1!
#endif

#ifndef DS_FILE_MIN_AGE_LIMIT
#error DS_FILE_MIN_AGE_LIMIT must be defined!
#elif (DS_FILE_MIN_AGE_LIMIT < 1)
#error DS_FILE_MIN_AGE_LIMIT cannot be less than 1!
#endif

#ifndef DS_APP_PIPE_NAME
#error DS_APP_PIPE_NAME must be defined!
#endif

#ifndef DS_APP_PIPE_DEPTH
#error DS_APP_PIPE_DEPTH must be defined!
#elif (DS_APP_PIPE_DEPTH < 1)
#error DS_APP_PIPE_DEPTH cannot be less than 1!
#elif (DS_APP_PIPE_DEPTH > OS_QUEUE_MAX_DEPTH)
#error DS_APP_PIPE_DEPTH cannot exceed OS_QUEUE_MAX_DEPTH!
#endif

#ifndef DS_MAKE_TABLES_CRITICAL
#error DS_MAKE_TABLES_CRITICAL must be defined!
#elif ((DS_MAKE_TABLES_CRITICAL != 0) && (DS_MAKE_TABLES_CRITICAL != 1))
#error DS_MAKE_TABLES_CRITICAL must be 0 or 1!
#endif

#if (DS_SECS_PER_HK_CYCLE < 1)
#error DS_SECS_PER_HK_CYCLE cannot be less than 1!
#endif

#ifndef DS_DEF_ENABLE_STATE
#error DS_DEF_ENABLE_STATE must be defined!
#elif ((DS_DEF_ENABLE_STATE != 0) && (DS_DEF_ENABLE_STATE != 1))
#error DS_DEF_ENABLE_STATE must be 0 or 1!
#endif

#ifndef DS_CDS_ENABLE_STATE
#error DS_CDS_ENABLE_STATE must be defined!
#elif ((DS_CDS_ENABLE_STATE != 0) && (DS_CDS_ENABLE_STATE != 1))
#error DS_CDS_ENABLE_STATE must be 0 or 1!
#endif

#ifndef DS_MISSION_REV
#error DS_MISSION_REV must be defined!
#elif (DS_MISSION_REV < 0)
#error DS_MISSION_REV must be greater than or equal to zero!
#endif

#ifndef DS_FILE_HEADER_TYPE
#error DS_FILE_HEADER_TYPE must be defined!
#elif ((DS_FILE_HEADER_TYPE != 0) && (DS_FILE_HEADER_TYPE != 1))
#error DS_FILE_HEADER_TYPE must be 0 or 1!
#endif

#ifndef DS_MOVE_FILES
#error DS_MOVE_FILES must be defined!
#elif ((DS_MOVE_FILES != true) && (DS_MOVE_FILES != false))
#error DS_MOVE_FILES must be true or false!
#endif

#ifndef DS_PER_PACKET_PIPE_LIMIT
#error DS_PER_PACKET_PIPE_LIMIT must be defined!
#elif (DS_PER_PACKET_PIPE_LIMIT < 1)
#error DS_PER_PACKET_PIPE_LIMIT cannot be less than 1!
#elif (DS_PER_PACKET_PIPE_LIMIT > DS_APP_PIPE_DEPTH)
#error DS_PER_PACKET_PIPE_LIMIT cannot be greater than DS_APP_PIPE_DEPTH!
#endif

#endif
